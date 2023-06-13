/**
 * @file std_swap_bit.c
 * @brief 标准位转换文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 21:14 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Tue Jun 13 2023 21:58 +0800
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

/**
 * @brief 位值取1
 *
 * @param[in] u32_p_data - 数据
 * @param[in] u8_bit     - 操作位
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_bit_set(u32 *u32_p_data, u8 u8_bit)
{
    if (NULL == u32_p_data)
        return (FAILURE);

    *u32_p_data |= (1 << u8_bit);

    return (SUCCESS);
} /* e_std_swap_bit_set */

/**
 * @brief 位值取0
 *
 * @param[in] u32_p_data - 数据
 * @param[in] u8_bit     - 操作位
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_bit_clear(u32 *u32_p_data, u8 u8_bit)
{
    if (NULL == u32_p_data)
        return (FAILURE);

    *u32_p_data &= ~(1 << u8_bit);

    return (SUCCESS);
} /* e_std_swap_bit_clear */

/**
 * @brief 位值取反
 *
 * @param[in] u32_p_data - 数据
 * @param[in] u8_bit     - 操作位
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_bit_reverse(u32 *u32_p_data, u8 u8_bit)
{
    if (NULL == u32_p_data)
        return (FAILURE);

    *u32_p_data ^= (1 << u8_bit);

    return (SUCCESS);
} /* e_std_swap_bit_reverse */

/**
 * @brief 位值获取
 *
 * @param[in] u32_data - 数据
 * @param[in] u8_bit   - 操作位
 * @return M_STD_SWAP_BIT_VAL_ZERO
 *         M_STD_SWAP_BIT_VAL_ONE
 */
std_swap_bit_val_b b_std_swap_bit_get(u32 u32_data, u8 u8_bit)
{
    std_swap_bit_val_b b_val = M_STD_SWAP_BIT_VAL_ZERO;

    b_val = (u32_data >> u8_bit) & 1;

    return (b_val);
} /* b_std_swap_bit_get */
