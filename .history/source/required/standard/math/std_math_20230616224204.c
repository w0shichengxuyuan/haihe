/**
 * @file std_math.c
 * @brief 标准算术文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Fri Jun 16 2023 21:57 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Fri Jun 16 2023 22:42 +0800
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
 * @param u32_augend - 被加数
 * @param u32_addend - 加数
 * @return [0x00000000, 0xffffffff]
 */
u32 u32_std_math_addition(u32 u32_augend, u32 u32_addend)
{
    u32 u32_sum = 0;

    if (0 == u32_augend)
    {
        u32_sum = u32_addend;
    }
    else if (0 == u32_addend)
    {
        u32_sum = u32_augend;
    }
    else if ((M_STD_U32_MAX_VALUE - u32_addend) >= u32_augend)
    {
        u32_sum = u32_augend + u32_addend;
    }
    else
    {

    }

    return (u32_sum);
} /* u32_std_math_addition */

/**
 * @brief 减法运算
 *
 * @param u32_minuend    - 被减数
 * @param u32_subtrahend - 减数
 * @return [0x00000000, 0xffffffff]
 */
u32 u32_std_math_subtraction(u32 u32_minuend, u32 u32_subtrahend)
{
    u32 u32_difference = 0;

    if (u32_minuend >= u32_subtrahend)
        u32_difference = u32_minuend - u32_subtrahend;

    return (u32_difference);
} /* u32_std_math_addition */

/**
 * @brief 乘法运算
 *
 * @param u32_multiplier   - 乘数
 * @param u32_multiplicand - 被乘数
 * @return [0x00000000, 0xffffffff]
 */
u32 u32_std_math_multiplication(u32 u32_multiplicand, u32 u32_multiplier)
{
    u32 u32_product = 0;

    if (0 == u32_multiplicand)
        return (u32_product);

    if (0 == u32_multiplier)
        return (u32_product);

    if (1 == u32_multiplicand)
        return (u32_multiplier);

    if (1 == u32_multiplier)
        return (u32_multiplicand);

    if ((M_STD_U32_MAX_VALUE / u32_multiplier) >= u32_multiplicand)
        u32_product = u32_multiplicand * u32_multiplier;

    return (u32_product);
} /* u32_std_math_multiplication */

/**
 * @brief 除法运算
 *
 * @param u32_dividend - 被除数
 * @param u32_divisor  - 除数
 * @return [0x00000000, 0xffffffff]
 */
u32 u32_std_math_division(u32 u32_dividend, u32 u32_divisor)
{
    u32 u32_quotient = 0;

    if (0 == u32_divisor)
        return (u32_quotient);

    if (u32_dividend == u32_divisor)
        u32_quotient = 1;

    if (u32_dividend > u32_divisor)
        u32_quotient = u32_dividend / u32_divisor;

    return (u32_quotient);
} /* u32_std_math_division */
