/**
 * @file std_delay.c
 * @brief 标准延时文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 12:46 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Wed Jun 14 2023 21:46 +0800
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
void v_std_delay_do_nothing(void)
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
 * @param u32_size
 */
void v_std_delay_us(u32 u32_size)
{
    if (0 == u32_size)
        return;

    v_std_delay_do_nothing();
} /* v_std_delay_us */

/**
 * @brief 毫秒延时
 *
 * @param u32_size
 */
void v_std_delay_ms(u32 u32_size)
{
    if (0 == u32_size)
        return;

    v_std_delay_do_nothing();
} /* v_std_delay_ms */

void v_std_delay_s(u32 u32_size)
{
    if (0 == u32_size)
        return;

    v_std_delay_do_nothing();
} /* v_std_delay_ms */

/**
 * @brief 1微秒延时
 *
 */
void v_std_delay_1us(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_1us */

/**
 * @brief 10微秒延时
 *
 */
void v_std_delay_10us(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_10us */

/**
 * @brief 50微秒延时
 *
 */
void v_std_delay_50us(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_50us */

/**
 * @brief 100微秒延时
 *
 */
void v_std_delay_100us(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_100us */

/**
 * @brief 200微秒延时
 *
 */
void v_std_delay_200us(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_200us */

/**
 * @brief 500微秒延时
 *
 */
void v_std_delay_500us(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_500us */

/**
 * @brief 1毫秒延时
 *
 */
void v_std_delay_1ms(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_1ms */

/**
 * @brief 10毫秒延时
 *
 */
void v_std_delay_10ms(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_10ms */

/**
 * @brief 50毫秒延时
 *
 */
void v_std_delay_50ms(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_50ms */

/**
 * @brief 100毫秒延时
 *
 */
void v_std_delay_100ms(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_100ms */

/**
 * @brief 200毫秒延时
 *
 */
void v_std_delay_200ms(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_200ms */

/**
 * @brief 500毫秒延时
 *
 */
void v_std_delay_500ms(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_500ms */

/**
 * @brief 1秒延时
 *
 */
void v_std_delay_1s(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_1s */

/**
 * @brief 2秒延时
 *
 */
void v_std_delay_2s(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_2s */

/**
 * @brief 5秒延时
 *
 */
void v_std_delay_5s(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_5s */

/**
 * @brief 10秒延时
 *
 */
void v_std_delay_10s(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_10s */

/**
 * @brief 15秒延时
 *
 */
void v_std_delay_15s(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_15s */

/**
 * @brief 20秒延时
 *
 */
void v_std_delay_20s(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_20s */

/**
 * @brief 30秒延时
 *
 */
void v_std_delay_30s(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_30s */

/**
 * @brief 1分钟延时
 *
 */
void v_std_delay_1min(void)
{
    v_std_delay_do_nothing();
} /* v_std_delay_1min */
