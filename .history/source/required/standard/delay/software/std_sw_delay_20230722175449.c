/**
 * @file std_sw_delay.c
 * @brief 标准软件延时文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Thu Jun 15 2023 22:12 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jul 22 2023 17:54 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Thu Jun 15 2023 22:12 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_sw_delay_private.h"
#include "std_sw_delay_public.h"

/**
 * @brief 基本软件延时
 *
 */
void v_std_hw_delay_do_nothing(void)
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
} /* v_std_hw_delay_do_nothing */
