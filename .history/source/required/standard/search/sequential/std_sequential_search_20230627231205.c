/**
 * @file std_sequential_search.c
 * @brief 标准顺序查找文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Tue Jun 27 2023 22:58 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Tue Jun 27 2023 23:12 +0800
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


u16 u16_std_sequential_search(const u8 *u8_p_data, u8 u8_length, u8 u8_value)
{
    v_std_assert_pointer(u8_p_data);
    v_std_assert_min_invalid(0, u8_length);
    v_std_assert_max_valid(M_SEARCH_MAX_NUM, u8_length);

    u8 *u8_p_tmp = NULL;

    u8_p_tmp = u8_p_data;
    for (u8 i = 0; u8_length > i; ++i)
    {
        if (u8_value == *u8_p_tmp++)
        {
            return (i);
        }
    }
    return (0);
} /* u8_std_sequential_search */
