/**
 * @file std_filter.c
 * @brief 标准滤波文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 17 2023 14:58 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 17 2023 15:39 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 17 2023 14:58 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_filter_private.h"
#include "std_filter_public.h"

/**
 * @brief 限幅滤波
 *
 * @param u32_limit - 差值
 * @param u32_old   - 上次值
 * @return [0x00000000, 0xffffffff]
 * @note https://mp.weixin.qq.com/s/o2nxvlDAWk20lMjdmKMFCA
 */
u32 u32_std_limiting_filter(u32 u32_limit, u32 u32_old)
{
    u32 u32_new = 0;

    if (u32_old > u32_new)
    {
        if (u32_std_math_subtraction(u32_old, u32_new) <= u32_limit)
            return (u32_new);
    }
    else if (u32_old == u32_new)
    {
        return (u32_old);
    }
    else
    {
        if (u32_std_math_subtraction(u32_new, u32_old) <= u32_limit)
            return (u32_new);
    }

    return (u32_old);
} /* u32_std_limiting_filter */
中位值滤波法

u32 u32_std_
