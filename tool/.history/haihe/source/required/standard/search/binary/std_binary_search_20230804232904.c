/**
 * @file std_binary_search.c
 * @brief 标准折半查找文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Wed Jun 28 2023 22:52 +0800
 *
 * @authors opencode (openc0de@hotmail.com)
 * @date 2023-08-04 23:29 +0800
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
 * @param[in] u8_p_data  - 数据
 * @param[in] u16_length - 数据长度
 * @param[in] u8_value   - 查找值
 * @return [0, M_SEARCH_MAX_NUM-1]      - 成功值
 *         M_STD_SEQUENTIAL_SEARCH_FAIL - 失败值
 *
 * @ref https://www.cnblogs.com/CJT-blog/p/10475707.html
 *
 * @note 假设表中元素是按升序排列，将表中间位置记录的关键字与查找关键字比较，
 *       如果两者相等，则查找成功；否则利用中间位置记录将表分成前、后两个子表，
 *       如果中间位置记录的关键字大于查找关键字，则进一步查找前一子表，否则进一步查找后一子表。
 *       重复以上过程，直到找到满足条件的记录，使查找成功，或直到子表不存在为止，此时查找不成功。
 */
u16 u16_std_binary_search(const u8 *u8_p_data, u16 u16_length, u8 u8_value)
{
    v_std_pointer_assert(u8_p_data);
    v_std_min_invalid_assert(0, u16_length);
    v_std_max_valid_assert(M_SEARCH_MAX_NUM, u16_length);

    u8 *u8_p_tmp = NULL;
    u16 u16_low  = 0,
        u16_mid  = 0,
        u16_high = 0;

    u8_p_tmp = u8_p_data;
    u16_high = u16_length - 1;

    while (u16_high >= u16_low)
    {
        u16_mid = u16_low + ((u16_high - u16_low) >> 1);

        if (u8_value > *(u8_p_data + u16_mid))
        {
            u16_low = u16_mid + 1;
            continue;
        }

        if (u8_value < *(u8_p_data + u16_mid))
        {
            u16_high = u16_mid - 1;
            continue;
        }

        return (u16_mid);
    }

    return (M_STD_BINARY_SEARCH_FAIL);
} /* u16_std_binary_search */
