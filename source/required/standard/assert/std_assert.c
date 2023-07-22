/**
 * @file std_assert.c
 * @brief 标准断言文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Fri Jun 16 2023 23:31 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jul 22 2023 23:32 +0800
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
 * @brief 指针断言
 *
 * @param[in] v_p_value - 指针
 */
void v_std_pointer_assert(const void *v_p_value)
{
    if (NULL == v_p_value)
    {
        #ifdef __DEBUG__
            for (;;);
        #endif /* __DEBUG__ */
    }
} /* v_std_pointer_assert */

/**
 * @brief 最小值有效断言
 *
 * @param[in] u32_min   - 最小值
 * @param[in] u32_value - 当前值
 */
void v_std_min_valid_assert(u32 u32_min, u32 u32_value)
{
    if (u32_min > u32_value)
    {
        #ifdef __DEBUG__
            for (;;);
        #endif /* __DEBUG__ */
    }
} /* v_std_min_valid_assert */

/**
 * @brief 最小值无效断言
 *
 * @param[in] u32_min   - 最小值
 * @param[in] u32_value - 当前值
 */
void v_std_min_invalid_assert(u32 u32_min, u32 u32_value)
{
    if (u32_min >= u32_value)
    {
        #ifdef __DEBUG__
            for (;;);
        #endif /* __DEBUG__ */
    }
} /* v_std_min_invalid_assert */

/**
 * @brief 最大值有效断言
 *
 * @param[in] u32_max   - 最大值
 * @param[in] u32_value - 当前值
 */
void v_std_max_valid_assert(u32 u32_max, u32 u32_value)
{
    if (u32_max < u32_value)
    {
        #ifdef __DEBUG__
            for (;;);
        #endif /* __DEBUG__ */
    }
} /* v_std_max_valid_assert */

/**
 * @brief 最大值无效断言
 *
 * @param[in] u32_max   - 最大值
 * @param[in] u32_value - 当前值
 */
void v_std_max_invalid_assert(u32 u32_max, u32 u32_value)
{
    if (u32_max <= u32_value)
    {
        #ifdef __DEBUG__
            for (;;);
        #endif /* __DEBUG__ */
    }
} /* v_std_max_invalid_assert */
