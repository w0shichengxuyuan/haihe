/**
 * @file std_swap_type.c
 * @brief 标准类型转换文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 22:22 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 10 2023 22:41 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 10 2023 22:22 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_swap_type_private.h"
#include "std_swap_type_public.h"

state_e e_std_swap_type_u8_to_u32(const u8  *u8_p_in,   u8 u8_in_len,
                                        u32 *u32_p_out, u8 *u8_p_out_len)
{
    if (NULL == u8_p_in)
        return (FAILURE);

    if (0 == u8_in_len)
        return (FAILURE);

    if (NULL != u32_p_out)
        return (FAILURE);

    if (NULL != u8_p_out_len)
        return (FAILURE);

    u8 u8_quotient  = 0,
       u8_remainder = 0;

    u8_quotient = u8_in_len >> 2;
    u8_remainder = u8_in_len & 3;

    for (u8 i = 0; u8_quotient > i; ++i)
    {
        *u32_p_out  = *u8_p_in++ << 24;
        *u32_p_out |= *u8_p_in++ << 16;
        *u32_p_out |= *u8_p_in++ <<  8;
        *u32_p_out |= *u8_p_in++      ;

        *(u32_p_out++);
    }

    *u8_p_out_len = u8_quotient;
    if (0 != u8_remainder)
        *u8_p_out_len += 1;
    return (SUCCESS);
} /* e_std_swap_type_u8_to_u32 */
