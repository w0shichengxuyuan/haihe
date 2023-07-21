/**
 * @file std_sequential_search.c
 * @brief 标准顺序查找文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Tue Jun 27 2023 22:58 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Tue Jun 27 2023 23:18 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Tue Jun 27 2023 22:58 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_sequential_search_private.h"
#include "std_sequential_search_public.h"

/**
 * @brief 顺序查找
 *
 * @param u8_p_data  - 数据
 * @param u16_length - 数据长度
 * @param u8_value   - 查找值
 * @return [0, M_SEARCH_MAX_NUM-1]
 *         M_STD_SEQUENTIAL_SEARCH_FAIL
 */
u16 u16_std_sequential_search(const u8 *u8_p_data, u16 u16_length, u8 u8_value)
{
    v_std_assert_pointer(u8_p_data);
    v_std_assert_min_invalid(0, u16_length);
    v_std_assert_max_valid(M_SEARCH_MAX_NUM, u16_length);

    u8 *u8_p_tmp = NULL;

    u8_p_tmp = u8_p_data;

    for (u16 i = 0; u16_length > i; ++i)
        if (u8_value == *u8_p_tmp++)
            return (i);

    return (M_STD_SEQUENTIAL_SEARCH_FAIL);
} /* u16_std_sequential_search */
