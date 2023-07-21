/**
 * @file std_assert.c
 * @brief 标准断言文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Fri Jun 16 2023 23:31 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Tue Jun 27 2023 23:26 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Fri Jun 16 2023 23:31 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_assert_private.h"
#include "std_assert_public.h"

/**
 * @brief 基本断言
 *
 */
void v_std_assert(void)
{
    #ifdef __DEBUG__
        for (;;);
    #endif /* __DEBUG__ */
} /* v_std_assert */

/**
 * @brief 断言指针
 *
 * @param v_p_value - 指针
 */
void v_std_assert_pointer(void *v_p_value)
{
    if (NULL == v_p_value)
    {
        #ifdef __DEBUG__
            for (;;);
        #endif /* __DEBUG__ */
    }
} /* v_std_assert_pointer */

/**
 * @brief 断言最小值有效
 *
 * @param u32_min   - 最小值
 * @param u32_value - 当前值
 */
void v_std_assert_min_valid(u32 u32_min, u32 u32_value)
{
    if (u32_min > u32_value)
    {
        #ifdef __DEBUG__
            for (;;);
        #endif /* __DEBUG__ */
    }
} /* v_std_assert_min_valid */

/**
 * @brief 断言最小值无效
 *
 * @param u32_min   - 最小值
 * @param u32_value - 当前值
 */
void v_std_assert_min_invalid(u32 u32_min, u32 u32_value)
{
    if (u32_min >= u32_value)
    {
        #ifdef __DEBUG__
            for (;;);
        #endif /* __DEBUG__ */
    }
} /* v_std_assert_min_invalid */

/**
 * @brief 断言最大值有效
 *
 * @param u32_max   - 最大值
 * @param u32_value - 当前值
 */
void v_std_assert_max_valid(u32 u32_max, u32 u32_value)
{
    if (u32_max < u32_value)
    {
        #ifdef __DEBUG__
            for (;;);
        #endif /* __DEBUG__ */
    }
} /* v_std_assert_max_valid */

/**
 * @brief 断言最大值无效
 *
 * @param u32_max   - 最大值
 * @param u32_value - 当前值
 */
void v_std_assert_max_invalid(u32 u32_max, u32 u32_value)
{
    if (u32_max <= u32_value)
    {
        #ifdef __DEBUG__
            for (;;);
        #endif /* __DEBUG__ */
    }
} /* v_std_assert_max_invalid */
