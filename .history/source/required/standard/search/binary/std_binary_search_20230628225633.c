/**
 * @file std_binary_search.c
 * @brief 标准折半查找文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Wed Jun 28 2023 22:52 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Wed Jun 28 2023 22:56 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Wed Jun 28 2023 22:52 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_binary_search_private.h"
#include "std_binary_search_public.h"

/**
 * @brief 折半查找
 *
 * @param u8_p_data  - 数据
 * @param u16_length - 数据长度
 * @param u8_value   - 查找值
 * @return [0, M_SEARCH_MAX_NUM-1]      - 成功值
 *         M_STD_SEQUENTIAL_SEARCH_FAIL - 失败值
 * @ref https://www.cnblogs.com/CJT-blog/p/10475707.html
 * @note 从表中第一个（或最后一个）记录开始，逐个进行记录的关键字和给定值比较。
 *       如果某个记录的关键字和给定值相等，则查找成功，找到所查的记录。
 *       如果直到最后一个（或第一个）记录，其关键字和给定值比较都不等时，
 *       则表中没有所查的记录，查找不成功。
 */
u16 u16_std_binary_search(const u8 *u8_p_data, u16 u16_length, u8 u8_value)
{
    v_std_pointer_assert(u8_p_data);
    v_std_min_invalid_assert(0, u16_length);
    v_std_max_valid_assert(M_SEARCH_MAX_NUM, u16_length);

    u8 *u8_p_tmp = NULL;

    u8_p_tmp = u8_p_data;

    for (u16 i = 0; u16_length > i; ++i)
        if (u8_value == *u8_p_tmp++)
            return (i);

    return (M_STD_SEQUENTIAL_SEARCH_FAIL);
} /* u16_std_sequential_search */
