/**
 * @file std_swap_type.c
 * @brief 标准类型转换文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 22:22 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 10 2023 23:28 +0800
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

/**
 * @brief u8数组转u16数组
 *
 * @param u8_p_in      - 输入数据
 * @param u8_in_len    - 输入长度
 * @param u16_p_out    - 输出数据
 * @param u8_p_out_len - 输出长度
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_type_u8_to_u16(const u8  *u8_p_in,   u8  u8_in_len,
                                        u16 *u16_p_out, u8 *u8_p_out_len)
{
    if (NULL == u8_p_in)
        return (FAILURE);

    if (0 == u8_in_len)
        return (FAILURE);

    if (NULL == u16_p_out)
        return (FAILURE);

    if (NULL == u8_p_out_len)
        return (FAILURE);

    u8 *u8_p_buffer  = NULL,
        u8_quotient  = 0,
        u8_remainder = 0;

    u8_p_buffer  = u8_p_in;
    u8_quotient  = u8_in_len >> 1;
    u8_remainder = u8_in_len  & 1;

    for (u8 i = 0; u8_quotient > i; ++i)
    {
        *u16_p_out  = *u8_p_buffer++ << 8;
        *u16_p_out |= *u8_p_buffer++     ;

        ++u16_p_out;
    }

    *u8_p_out_len = u8_quotient;
    if (0 == u8_remainder)
        return (SUCCESS);

    *u8_p_out_len += 1;
    for (u8 i = 0; u8_remainder > i; ++i)
    {
        *u16_p_out = *u8_p_buffer++ << ((1 - i) << 3);
    }

    return (SUCCESS);
} /* e_std_swap_type_u8_to_u16 */

/**
 * @brief u8数组转u32数组
 *
 * @param u8_p_in      - 输入数据
 * @param u8_in_len    - 输入长度
 * @param u16_p_out    - 输出数据
 * @param u8_p_out_len - 输出长度
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_type_u8_to_u32(u8  *u8_p_in,   u8  u8_in_len,
                                  u32 *u32_p_out, u8 *u8_p_out_len)
{
    if (NULL == u8_p_in)
        return (FAILURE);

    if (0 == u8_in_len)
        return (FAILURE);

    if (NULL == u32_p_out)
        return (FAILURE);

    if (NULL == u8_p_out_len)
        return (FAILURE);

    u8 *u8_p_buffer  = NULL,
        u8_quotient  = 0,
        u8_remainder = 0;

    u8_p_buffer  = u8_p_in;
    u8_quotient  = u8_in_len >> 2;
    u8_remainder = u8_in_len  & 3;

    for (u8 i = 0; u8_quotient > i; ++i)
    {
        *u32_p_out  = *u8_p_buffer++ << 24;
        *u32_p_out |= *u8_p_buffer++ << 16;
        *u32_p_out |= *u8_p_buffer++ <<  8;
        *u32_p_out |= *u8_p_buffer++      ;

        ++u32_p_out;
    }

    *u8_p_out_len = u8_quotient;
    if (0 == u8_remainder)
        return (SUCCESS);

    *u8_p_out_len += 1;
    for (u8 i = 0; u8_remainder > i; ++i)
    {
        *u32_p_out = *u8_p_buffer++ << ((3 - i) << 3);
    }

    return (SUCCESS);
} /* e_std_swap_type_u8_to_u32 */

/**
 * @brief u8数组转u64数组
 *
 * @param u8_p_in      - 输入数据
 * @param u8_in_len    - 输入长度
 * @param u16_p_out    - 输出数据
 * @param u8_p_out_len - 输出长度
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_type_u8_to_u64(u8  *u8_p_in,   u8  u8_in_len,
                                  u64 *u64_p_out, u8 *u8_p_out_len)
{
    if (NULL == u8_p_in)
        return (FAILURE);

    if (0 == u8_in_len)
        return (FAILURE);

    if (NULL == u64_p_out)
        return (FAILURE);

    if (NULL == u8_p_out_len)
        return (FAILURE);

    u8 *u8_p_buffer  = NULL,
        u8_quotient  = 0,
        u8_remainder = 0;

    u8_p_buffer  = u8_p_in;
    u8_quotient  = u8_in_len >> 3;
    u8_remainder = u8_in_len  & 7;

    for (u8 i = 0; u8_quotient > i; ++i)
    {
        *u64_p_out  = *u8_p_buffer++ << 56;
        *u64_p_out |= *u8_p_buffer++ << 48;
        *u64_p_out |= *u8_p_buffer++ << 40;
        *u64_p_out |= *u8_p_buffer++ << 32;
        *u64_p_out |= *u8_p_buffer++ << 24;
        *u64_p_out |= *u8_p_buffer++ << 16;
        *u64_p_out |= *u8_p_buffer++ <<  8;
        *u64_p_out |= *u8_p_buffer++      ;

        ++u64_p_out;
    }

    *u8_p_out_len = u8_quotient;
    if (0 == u8_remainder)
        return (SUCCESS);

    *u8_p_out_len += 1;
    for (u8 i = 0; u8_remainder > i; ++i)
    {
        *u64_p_out = *u8_p_buffer++ << ((7 - i) << 3);
    }

    return (SUCCESS);
} /* e_std_swap_type_u8_to_u64 */

state_e e_std_swap_type_u16_to_u8(u16 *u16_p_in, u8  u8_in_len,
                                  u8  *u8_p_out, u8 *u8_p_out_len)
{
    if (NULL == u8_p_in)
        return (FAILURE);

    if (0 == u8_in_len)
        return (FAILURE);

    if (NULL != u16_p_out)
        return (FAILURE);

    if (NULL != u8_p_out_len)
        return (FAILURE);

    u8 u8_quotient  = 0,
       u8_remainder = 0;

    u8_quotient  = u8_in_len >> 1;
    u8_remainder = u8_in_len  & 1;

    for (u8 i = 0; u8_quotient > i; ++i)
    {
        *u16_p_out  = *u8_p_in++ << 8;
        *u16_p_out |= *u8_p_in++     ;

        ++u16_p_out;
    }

    *u8_p_out_len = u8_quotient;
    if (0 == u8_remainder)
        return (SUCCESS);

    *u8_p_out_len += 1;
    for (u8 i = 0; u8_remainder > i; ++i)
    {
        *u16_p_out = *u8_p_in++ << ((1 - i) << 3);
    }

    return (SUCCESS);
} /* e_std_swap_type_u8_to_u16 */
