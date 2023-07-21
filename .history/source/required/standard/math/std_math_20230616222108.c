/**
 * @file std_math.c
 * @brief 标准算术文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Fri Jun 16 2023 21:57 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Fri Jun 16 2023 22:21 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Fri Jun 16 2023 21:57 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_math_private.h"
#include "std_math_public.h"

/**
 * @brief 加法运算
 *
 * @param u32_addend - 加数
 * @param u32_augend - 被加数
 * @return [0x00000000, 0xffffffff]
 */
u32 u32_std_math_addition(u32 u32_addend, u32 u32_augend)
{
    u32 u32_sum = 0;

    if ((M_STD_U32_MAX_VALUE - u32_augend) >= u32_addend)
        u32_sum = u32_addend + u32_augend;

    return (u32_sum);
} /* u32_std_math_addition */

/**
 * @brief 减法运算
 *
 * @param u32_subtrahend
 * @param u32_minuend
 * @return u32
 */
u32 u32_std_math_subtraction(u32 u32_subtrahend, u32 u32_minuend)
{

} /* u32_std_math_addition */
