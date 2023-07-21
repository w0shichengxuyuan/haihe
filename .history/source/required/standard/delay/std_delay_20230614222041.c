/**
 * @file std_delay.c
 * @brief 标准延时文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 12:46 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Wed Jun 14 2023 22:20 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 10 2023 12:46 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_delay_private.h"
#include "std_delay_public.h"

/**
 * @brief 基本延时
 *
 */
vd v_std_delay_do_nothing(vd)
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
} /* v_std_delay_do_nothing */

/**
 * @brief 微秒延时
 *
 * @param[in] u32_size - 大小
 */
vd v_std_delay_us(u32 u32_size)
{
    if (0 == u32_size)
        return;

    if (E_DELAY_US_MAX_SIZE < u32_size)
        return;

    v_std_delay_do_nothing();
} /* v_std_delay_us */

/**
 * @brief 毫秒延时
 *
 * @param[in] u32_size - 大小
 */
vd v_std_delay_ms(u32 u32_size)
{
    if (0 == u32_size)
        return;

    if (E_DELAY_MS_MAX_SIZE < u32_size)
        return;

    v_std_delay_do_nothing();
} /* v_std_delay_ms */

/**
 * @brief 秒延时
 *
 * @param[in] u32_size - 大小
 */
vd v_std_delay_s(u32 u32_size)
{
    if (0 == u32_size)
        return;

    if (E_DELAY_S_MAX_SIZE < u32_size)
        return;

    v_std_delay_do_nothing();
} /* v_std_delay_ms */

/**
 * @brief 分钟延时
 *
 * @param[in] u32_size - 大小
 */
vd v_std_delay_min(u32 u32_size)
{
    if (0 == u32_size)
        return;

    if (E_DELAY_MIN_MAX_SIZE < u32_size)
        return;

    v_std_delay_do_nothing();
} /* v_std_delay_min */

/**
 * @brief 1微秒延时
 *
 */
vd v_std_delay_1us(vd)
{
    v_std_delay_us(1);
} /* v_std_delay_1us */

/**
 * @brief 10微秒延时
 *
 */
vd v_std_delay_10us(vd)
{
    v_std_delay_us(10);
} /* v_std_delay_10us */

/**
 * @brief 50微秒延时
 *
 */
vd v_std_delay_50us(vd)
{
    v_std_delay_us(50);
} /* v_std_delay_50us */

/**
 * @brief 100微秒延时
 *
 */
vd v_std_delay_100us(vd)
{
    v_std_delay_us(100);
} /* v_std_delay_100us */

/**
 * @brief 200微秒延时
 *
 */
vd v_std_delay_200us(vd)
{
    v_std_delay_us(200);
} /* v_std_delay_200us */

/**
 * @brief 500微秒延时
 *
 */
vd v_std_delay_500us(vd)
{
    v_std_delay_us(500);
} /* v_std_delay_500us */

/**
 * @brief 1毫秒延时
 *
 */
vd v_std_delay_1ms(vd)
{
    v_std_delay_ms(1);
} /* v_std_delay_1ms */

/**
 * @brief 10毫秒延时
 *
 */
vd v_std_delay_10ms(vd)
{
    v_std_delay_ms(10);
} /* v_std_delay_10ms */

/**
 * @brief 50毫秒延时
 *
 */
vd v_std_delay_50ms(vd)
{
    v_std_delay_ms(50);
} /* v_std_delay_50ms */

/**
 * @brief 100毫秒延时
 *
 */
vd v_std_delay_100ms(vd)
{
    v_std_delay_ms(100);
} /* v_std_delay_100ms */

/**
 * @brief 200毫秒延时
 *
 */
vd v_std_delay_200ms(vd)
{
    v_std_delay_ms(200);
} /* v_std_delay_200ms */

/**
 * @brief 500毫秒延时
 *
 */
vd v_std_delay_500ms(vd)
{
    v_std_delay_ms(500);
} /* v_std_delay_500ms */

/**
 * @brief 1秒延时
 *
 */
vd v_std_delay_1s(vd)
{
    v_std_delay_s(1);
} /* v_std_delay_1s */

/**
 * @brief 2秒延时
 *
 */
vd v_std_delay_2s(vd)
{
    v_std_delay_s(2);
} /* v_std_delay_2s */

/**
 * @brief 5秒延时
 *
 */
vd v_std_delay_5s(vd)
{
    v_std_delay_s(5);
} /* v_std_delay_5s */

/**
 * @brief 10秒延时
 *
 */
vd v_std_delay_10s(vd)
{
    v_std_delay_s(10);
} /* v_std_delay_10s */

/**
 * @brief 15秒延时
 *
 */
vd v_std_delay_15s(vd)
{
    v_std_delay_s(15);
} /* v_std_delay_15s */

/**
 * @brief 20秒延时
 *
 */
vd v_std_delay_20s(vd)
{
    v_std_delay_s(20);
} /* v_std_delay_20s */

/**
 * @brief 30秒延时
 *
 */
vd v_std_delay_30s(vd)
{
    v_std_delay_s(30);
} /* v_std_delay_30s */

/**
 * @brief 1分钟延时
 *
 */
vd v_std_delay_1min(vd)
{
    v_std_delay_min(1);
} /* v_std_delay_1min */
