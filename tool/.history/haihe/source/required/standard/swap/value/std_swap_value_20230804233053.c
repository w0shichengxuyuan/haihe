/**
 * @file std_swap_value_endian.c
 * @brief 标准值转换文件
 * @author opencode (openc0de@hotmail.com)
 * @since Sun Jun 25 2023 11:59 +0800
 *
 * @authors opencode (openc0de@hotmail.com)
 * @date 2023-08-04 23:30 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by opencode, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sun Jun 25 2023 11:59 +0800 |    opencode    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_swap_value_private.h"
#include "std_swap_value_public.h"

/**
 * @brief u8值转换
 *
 * @param[in] u8_p_source - 源头数据
 * @param[in] u8_p_destin - 目的数据
 */
void v_std_swap_u8_value(u8 *u8_p_source, u8 *u8_p_destin)
{
    v_std_pointer_assert(u8_p_source);
    v_std_pointer_assert(u8_p_destin);

    u8 u8_tmp = 0;

    u8_tmp = *u8_p_destin;
    *u8_p_destin = *u8_p_source;
    *u8_p_source = u8_tmp;
} /* v_std_swap_u8_value */

/**
 * @brief u16值转换
 *
 * @param[in] u16_p_source - 源头数据
 * @param[in] u16_p_destin - 目的数据
 */
void v_std_swap_u16_value(u16 *u16_p_source, u16 *u16_p_destin)
{
    v_std_pointer_assert(u16_p_source);
    v_std_pointer_assert(u16_p_destin);

    u16 u16_tmp = 0;

    u16_tmp = *u16_p_destin;
    *u16_p_destin = *u16_p_source;
    *u16_p_source = u16_tmp;
} /* v_std_swap_u16_value */

/**
 * @brief u32值转换
 *
 * @param[in] u32_p_source - 源头数据
 * @param[in] u32_p_destin - 目的数据
 */
void v_std_swap_u32_value(u32 *u32_p_source, u32 *u32_p_destin)
{
    v_std_pointer_assert(u32_p_source);
    v_std_pointer_assert(u32_p_destin);

    u32 u32_tmp = 0;

    u32_tmp = *u32_p_destin;
    *u32_p_destin = *u32_p_source;
    *u32_p_source = u32_tmp;
} /* v_std_swap_u32_value */

/**
 * @brief u64值转换
 *
 * @param[in] u64_p_source - 源头数据
 * @param[in] u64_p_destin - 目的数据
 */
void v_std_swap_u64_value(u64 *u64_p_source, u64 *u64_p_destin)
{
    v_std_pointer_assert(u64_p_source);
    v_std_pointer_assert(u64_p_destin);

    u64 u64_tmp = 0;

    u64_tmp = *u64_p_destin;
    *u64_p_destin = *u64_p_source;
    *u64_p_source = u64_tmp;
} /* v_std_swap_u64_value */
