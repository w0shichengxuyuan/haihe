/**
 * @file std_swap_endian.c
 * @brief 标准字节序转换文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 12:29 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 10 2023 14:05 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 10 2023 12:29 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_swap_endian_public.h"
#include "std_swap_endian_private.h"

/**
 * @brief 获取字节序类型
 *
 * @return M_LIEELE_ENDIAN
 *         M_BIG_ENDIAN
 */
static endian_b b_get_endian_type(void)
{
    u16 u16_value = 0x1234;
    u8 *u8_p_temp = NULL;
    endian_b b_endian = M_BIG_ENDIAN;

    u8_p_temp = &u16_value;

    if (0x34 == *u8_p_temp)
        b_endian = LIEELE_ENDIAN;

    return (b_endian);
} /* b_get_endian_type */
