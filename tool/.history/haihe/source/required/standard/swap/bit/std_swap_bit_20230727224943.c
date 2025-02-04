/**
 * @file std_swap_bit.c
 * @brief 标准位转换文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 21:14 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date 2023-07-27 22:49 +0800
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
 * @param[in, out] v_p_data - 数据
 * @param[in]      u8_bit   - 操作位
 * @return SUCCESS - 成功
 *         FAILURE - 失败
 */
state_e e_std_swap_bit_set(void *v_p_data, u8 u8_bit)
{
    if (NULL == v_p_data)
        return (FAILURE);

    if (M_MAX_BIT_NUMBER < u8_bit)
        return (FAILURE);

    #ifdef __32BIT__
        *(u32 *)v_p_data |= (1 << u8_bit);
    #else
        *(u64 *)v_p_data |= (1 << u8_bit);
    #endif

    return (SUCCESS);
} /* e_std_swap_bit_set */

/**
 * @brief 位值取0
 *
 * @param[in, out] v_p_data - 数据
 * @param[in]      u8_bit   - 操作位
 * @return SUCCESS - 成功
 *         FAILURE - 失败
 */
state_e e_std_swap_bit_clear(void *v_p_data, u8 u8_bit)
{
    if (NULL == v_p_data)
        return (FAILURE);

    if (M_MAX_BIT_NUMBER < u8_bit)
        return (FAILURE);

    #ifdef __32BIT__
        *(u32 *)v_p_data &= ~(1 << u8_bit);
    #else
        *(u64 *)v_p_data &= ~(1 << u8_bit);
    #endif

    return (SUCCESS);
} /* e_std_swap_bit_clear */

/**
 * @brief 位值取反
 *
 * @param[in, out] v_p_data - 数据
 * @param[in]      u8_bit   - 操作位
 * @return SUCCESS - 成功
 *         FAILURE - 失败
 */
state_e e_std_swap_bit_reverse(void *v_p_data, u8 u8_bit)
{
    if (NULL == v_p_data)
        return (FAILURE);

    if (M_MAX_BIT_NUMBER < u8_bit)
        return (FAILURE);

    #ifdef __32BIT__
        *(u32 *)v_p_data ^= (1 << u8_bit);
    #else
        *(u64 *)v_p_data ^= (1 << u8_bit);
    #endif

    return (SUCCESS);
} /* e_std_swap_bit_reverse */

/**
 * @brief 位值获取
 *
 * @param[in] v_p_data - 数据
 * @param[in] u8_bit   - 操作位
 * @return E_STD_SWAP_BIT_VALUE_ZERO    - 值0
 *         E_STD_SWAP_BIT_VALUE_ONE     - 值1
 *         E_STD_SWAP_BIT_VALUE_INVALID - 无效
 */
std_swap_bit_value_e e_std_swap_bit_get(const void *v_p_data, u8 u8_bit)
{
    if (M_MAX_BIT_NUMBER < u8_bit)
        return (E_STD_SWAP_BIT_VALUE_INVALID);

    std_swap_bit_value_e b_val = E_STD_SWAP_BIT_VALUE_ZERO;

    #ifdef __32BIT__
        b_val = ((*(u32 *)v_p_data) >> u8_bit) & 1;
    #else
        b_val = ((*(u64 *)v_p_data) >> u8_bit) & 1;
    #endif

    return (b_val);
} /* e_std_swap_bit_get */
