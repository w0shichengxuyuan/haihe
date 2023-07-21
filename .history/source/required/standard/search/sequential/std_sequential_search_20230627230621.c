/**
 * @file std_sequential_search.c
 * @brief 标准顺序查找文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Tue Jun 27 2023 22:58 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Tue Jun 27 2023 23:06 +0800
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


u8 u8_std_sequential_search(const u8 *u8_p_data, u8 u8_length, u8 u8_value)
{
    int i;
    for (i = 0;i < n;++i)
    {
        if(a[i] == key)
            return i;
    }
    return 0;
}