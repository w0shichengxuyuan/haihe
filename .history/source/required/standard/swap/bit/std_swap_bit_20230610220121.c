/**
 * @file std_swap_bit.c
 * @brief 标准位转换文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 21:14 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 10 2023 22:01 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 10 2023 21:14 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_swap_bit_private.h"
#include "std_swap_bit_public.h"

state_e e_std_swap_bit_set(u32 *u32_p_data, u8 u8_bit)
{
    if (NULL == u32_p_data)
        return (FAILURE);

    *u32_p_data |= (1 << u8_bit);
    return (SUCCESS);
} /* e_std_swap_bit_set */

state_e e_std_swap_bit_clear(u32 *u32_p_data, u8 u8_bit)
{
    if (NULL == u32_p_data)
        return (FAILURE);

    *u32_p_data &= ~(1 << u8_bit);
    return (SUCCESS);
} /* e_std_swap_bit_clear */

state_e e_std_swap_bit_reverse(u32 *u32_p_data, u8 u8_bit)
{
    if (NULL == u32_p_data)
        return (FAILURE);

}