/**
 * @file std_math.c
 * @brief 标准算术文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Fri Jun 16 2023 21:57 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date 2023-07-27 22:32 +0800
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
 * @param[in] u32_augend - 被加数
 * @param[in] u32_addend - 加数
 * @return [0x00000000, 0xffffffff]
 *
 * @ref https://zhuanlan.zhihu.com/p/136367900
 *
 * @note 公式:
 *       和 = 被加数 + 加数
 *       u32_sum = u32_augend + u32_addend
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
        v_std_assert();
    }

    return (u32_sum);
} /* u32_std_math_addition */

/**
 * @brief 减法运算
 *
 * @param[in] u32_minuend    - 被减数
 * @param[in] u32_subtrahend - 减数
 * @return [0x00000000, 0xffffffff]
 *
 * @ref https://zhuanlan.zhihu.com/p/136367900
 *
 * @note 公式:
 *       差 = 被减数 - 减数
 *       u32_difference = u32_minuend + u32_subtrahend
 */
u32 u32_std_math_subtraction(u32 u32_minuend, u32 u32_subtrahend)
{
    u32 u32_difference = 0;

    if (0 == u32_subtrahend)
    {
        u32_difference = u32_minuend;
    }
    else if (0 == u32_minuend)
    {
        v_std_assert();
    }
    else if (u32_minuend = u32_subtrahend)
    {
        v_std_sw_delay_do_nothing();
    }
    else if (u32_minuend > u32_subtrahend)
    {
        u32_difference = u32_minuend - u32_subtrahend;
    }
    else
    {
        v_std_assert();
    }

    return (u32_difference);
} /* u32_std_math_addition */

/**
 * @brief 乘法运算
 *
 * @param[in] u32_multiplicand - 被乘数
 * @param[in] u32_multiplier   - 乘数
 * @return [0x00000000, 0xffffffff]
 *
 * @ref https://zhuanlan.zhihu.com/p/136367900
 *
 * @note 公式:
 *       积 = 被乘数 * 乘数
 *       u32_product = u32_multiplicand * u32_multiplier
 */
u32 u32_std_math_multiplication(u32 u32_multiplicand, u32 u32_multiplier)
{
    u32 u32_product = 0;

    if (0 == u32_multiplicand)
    {
        v_std_sw_delay_do_nothing();
    }
    else if (0 == u32_multiplier)
    {
        v_std_sw_delay_do_nothing();
    }
    else if (1 == u32_multiplicand)
    {
        u32_product = u32_multiplier;
    }
    else if (1 == u32_multiplier)
    {
        u32_product = u32_multiplicand;
    }
    else if ((M_STD_U32_MAX_VALUE / u32_multiplier) >= u32_multiplicand)
    {
        u32_product = u32_multiplicand * u32_multiplier;
    }
    else
    {
        v_std_assert();
    }

    return (u32_product);
} /* u32_std_math_multiplication */

/**
 * @brief 除法求商运算
 *
 * @param[in] u32_dividend - 被除数
 * @param[in] u32_divisor  - 除数
 * @return [0x00000000, 0xffffffff]
 *
 * @ref https://zhuanlan.zhihu.com/p/136367900
 *
 * @note 公式:
 *       商 = 被除数 / 除数
 *       u32_quotient = u32_dividend / u32_divisor
 */
u32 u32_std_math_division_quotient(u32 u32_dividend, u32 u32_divisor)
{
    u32 u32_quotient = 0;

    if (0 == u32_divisor)
    {
        v_std_assert();
    }
    else if (0 == u32_dividend)
    {
        v_std_sw_delay_do_nothing();
    }
    else if (1 == u32_divisor)
    {
        u32_quotient = u32_dividend;
    }
    else if (1 == u32_dividend)
    {
        v_std_sw_delay_do_nothing();
    }
    else if (u32_dividend == u32_divisor)
    {
        u32_quotient = 1;
    }
    else if (u32_dividend > u32_divisor)
    {
        u32_quotient = u32_dividend / u32_divisor;
    }
    else
    {
        v_std_sw_delay_do_nothing();
    }

    return (u32_quotient);
} /* u32_std_math_division_quotient */

/**
 * @brief 除法取余运算
 *
 * @param[in] u32_dividend - 被除数
 * @param[in] u32_divisor  - 除数
 * @return [0x00000000, 0xffffffff]
 *
 * @ref https://zhuanlan.zhihu.com/p/136367900
 *
 * @note 公式:
 *       余 = 被除数 % 除数
 *       余 = 被除数 & (除数 - 1)
 *       u32_remainder = u32_dividend % u32_divisor
 *       u32_remainder = u32_dividend & (u32_divisor - 1)
 */
u32 u32_std_math_division_remainder(u32 u32_dividend, u32 u32_divisor)
{
    u32 u32_remainder = 0;

    if (0 == u32_divisor)
    {
        v_std_assert();
    }
    else if (0 == u32_dividend)
    {
        v_std_sw_delay_do_nothing();
    }
    else if (1 == u32_divisor)
    {
        v_std_sw_delay_do_nothing();
    }
    else if (1 == u32_dividend)
    {
        u32_remainder = u32_dividend;
    }
    else if (u32_dividend == u32_divisor)
    {
        v_std_sw_delay_do_nothing();
    }
    else if (u32_dividend < u32_divisor)
    {
        u32_remainder = u32_dividend;
    }
    else
    {
        u32_remainder = u32_dividend & (u32_divisor - 1);
    }

    return (u32_remainder);
} /* u32_std_math_division_remainder */
