/**
 * @file std_delay.c
 * @brief 标准延时文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 12:46 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Wed Jun 14 2023 21:27 +0800
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

#include "std_delay_public.h"
#include "std_delay_private.h"

/**
 * @brief 标准延时
 *
 */
void v_std_delay_do_nothing(void)
{
    #if 0
        NOP();
    #endif
} /* v_std_delay_do_nothing */
