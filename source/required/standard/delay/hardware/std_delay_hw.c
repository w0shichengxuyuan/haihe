/**
 * @file std_delay_hw.c
 * @brief 标准硬件延时文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Thu Jun 15 2023 22:16 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Tue Jun 20 2023 23:06 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Thu Jun 15 2023 22:16 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_delay_hw_private.h"
#include "std_delay_hw_public.h"

/**
 * @brief 基本硬件延时
 *
 */
void v_std_delay_hw_do_nothing(void)
{
    #if 0
        NOP();
    #endif

    #if 0
        __NOP();
    #endif

    #if 0
        nop();
    #endif

    #if 0
        __nop();
    #endif
} /* v_std_delay_hw_do_nothing */

/**
 * @brief 微秒硬件延时
 *
 * @param[in] u32_size - 大小
 */
void v_std_delay_hw_us(u32 u32_size)
{
    if (0 == u32_size)
        return;

    if (E_DELAY_US_MAX_SIZE < u32_size)
        return;

    v_std_delay_hw_do_nothing();
} /* v_std_delay_hw_us */

/**
 * @brief 毫秒硬件延时
 *
 * @param[in] u32_size - 大小
 */
void v_std_delay_hw_ms(u32 u32_size)
{
    if (0 == u32_size)
        return;

    if (E_DELAY_MS_MAX_SIZE < u32_size)
        return;

    v_std_delay_hw_do_nothing();
} /* v_std_delay_hw_ms */

/**
 * @brief 秒硬件延时
 *
 * @param[in] u32_size - 大小
 */
void v_std_delay_hw_s(u32 u32_size)
{
    if (0 == u32_size)
        return;

    if (E_DELAY_S_MAX_SIZE < u32_size)
        return;

    v_std_delay_hw_do_nothing();
} /* v_std_delay_hw_ms */

/**
 * @brief 分钟硬件延时
 *
 * @param[in] u32_size - 大小
 */
void v_std_delay_hw_min(u32 u32_size)
{
    if (0 == u32_size)
        return;

    if (E_DELAY_MIN_MAX_SIZE < u32_size)
        return;

    v_std_delay_hw_do_nothing();
} /* v_std_delay_hw_min */

/**
 * @brief 1微秒硬件延时
 *
 */
void v_std_delay_hw_1us(void)
{
    v_std_delay_hw_us(1);
} /* v_std_delay_hw_1us */

/**
 * @brief 10微秒硬件延时
 *
 */
void v_std_delay_hw_10us(void)
{
    v_std_delay_hw_us(10);
} /* v_std_delay_hw_10us */

/**
 * @brief 50微秒硬件延时
 *
 */
void v_std_delay_hw_50us(void)
{
    v_std_delay_hw_us(50);
} /* v_std_delay_hw_50us */

/**
 * @brief 100微秒硬件延时
 *
 */
void v_std_delay_hw_100us(void)
{
    v_std_delay_hw_us(100);
} /* v_std_delay_hw_100us */

/**
 * @brief 200微秒硬件延时
 *
 */
void v_std_delay_hw_200us(void)
{
    v_std_delay_hw_us(200);
} /* v_std_delay_hw_200us */

/**
 * @brief 500微秒硬件延时
 *
 */
void v_std_delay_hw_500us(void)
{
    v_std_delay_hw_us(500);
} /* v_std_delay_hw_500us */

/**
 * @brief 1毫秒硬件延时
 *
 */
void v_std_delay_hw_1ms(void)
{
    v_std_delay_hw_ms(1);
} /* v_std_delay_hw_1ms */

/**
 * @brief 10毫秒硬件延时
 *
 */
void v_std_delay_hw_10ms(void)
{
    v_std_delay_hw_ms(10);
} /* v_std_delay_hw_10ms */

/**
 * @brief 50毫秒硬件延时
 *
 */
void v_std_delay_hw_50ms(void)
{
    v_std_delay_hw_ms(50);
} /* v_std_delay_hw_50ms */

/**
 * @brief 100毫秒硬件延时
 *
 */
void v_std_delay_hw_100ms(void)
{
    v_std_delay_hw_ms(100);
} /* v_std_delay_hw_100ms */

/**
 * @brief 200毫秒硬件延时
 *
 */
void v_std_delay_hw_200ms(void)
{
    v_std_delay_hw_ms(200);
} /* v_std_delay_hw_200ms */

/**
 * @brief 500毫秒硬件延时
 *
 */
void v_std_delay_hw_500ms(void)
{
    v_std_delay_hw_ms(500);
} /* v_std_delay_hw_500ms */

/**
 * @brief 1秒硬件延时
 *
 */
void v_std_delay_hw_1s(void)
{
    v_std_delay_hw_s(1);
} /* v_std_delay_hw_1s */

/**
 * @brief 2秒硬件延时
 *
 */
void v_std_delay_hw_2s(void)
{
    v_std_delay_hw_s(2);
} /* v_std_delay_hw_2s */

/**
 * @brief 5秒硬件延时
 *
 */
void v_std_delay_hw_5s(void)
{
    v_std_delay_hw_s(5);
} /* v_std_delay_hw_5s */

/**
 * @brief 10秒硬件延时
 *
 */
void v_std_delay_hw_10s(void)
{
    v_std_delay_hw_s(10);
} /* v_std_delay_hw_10s */

/**
 * @brief 15秒硬件延时
 *
 */
void v_std_delay_hw_15s(void)
{
    v_std_delay_hw_s(15);
} /* v_std_delay_hw_15s */

/**
 * @brief 20秒硬件延时
 *
 */
void v_std_delay_hw_20s(void)
{
    v_std_delay_hw_s(20);
} /* v_std_delay_hw_20s */

/**
 * @brief 30秒硬件延时
 *
 */
void v_std_delay_hw_30s(void)
{
    v_std_delay_hw_s(30);
} /* v_std_delay_hw_30s */

/**
 * @brief 1分钟硬件延时
 *
 */
void v_std_delay_hw_1min(void)
{
    v_std_delay_hw_min(1);
} /* v_std_delay_hw_1min */
