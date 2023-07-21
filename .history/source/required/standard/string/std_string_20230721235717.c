/**
 * @file std_string.c
 * @brief 标准字符文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Fri Jun 16 2023 23:38 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Fri Jul 21 2023 23:57 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Fri Jun 16 2023 23:38 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_string_private.h"
#include "std_string_public.h"

/**
 * @brief 申请堆内存
 *
 * @param v_p2_data - 指针本身的地址
 *       *v_p2_data - 指针指向的地址
 *      **v_p2_data - 指针指向的地址上的值
 * @param u16_size  - 申请大小
 * @return SUCCESS  - 成功
 *         FAILURE  - 失败
 */
state_e e_std_string_malloc(void **v_p2_data, u16 u16_size)
{
    v_std_pointer_assert(v_p2_data);
    v_std_pointer_assert(*v_p2_data);
    return (SUCCESS);
} /* e_std_string_malloc */