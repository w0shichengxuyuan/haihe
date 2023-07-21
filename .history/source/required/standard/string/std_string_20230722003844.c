/**
 * @file std_string.c
 * @brief 标准字符文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Fri Jun 16 2023 23:38 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jul 22 2023 00:38 +0800
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
    v_std_min_invalid_assert(E_MIN_SIZE, u16_size);
    v_std_max_valid_assert(E_MAX_SIZE, u16_size);

    u8 *p = NULL;

    #ifdef __FREERTOS__
        p = vPortMalloc(u16_size);
    #else
        p = malloc(u16_size);
    #endif

    if (NULL == p)
    {
        *v_p2_data = NULL;
        return (FAILURE);
    }

    memset(p, 0, u16_size);
    *v_p2_data = (void *)p;

    return (SUCCESS);
} /* e_std_string_malloc */

/**
 * @brief 释放堆内存
 *
 * @param v_p2_data - 指针本身的地址
 *       *v_p2_data - 指针指向的地址
 *      **v_p2_data - 指针指向的地址上的值
 * @return SUCCESS  - 成功
 *         FAILURE  - 失败
 */
state_e e_std_string_free(void **v_p2_data)
{
    v_std_pointer_assert(v_p2_data);

    if (NULL == *v_p2_data)
        return (SUCCESS);

    #ifdef __FREERTOS__
        vPortFree(*v_p2_data);
    #else
        free(*v_p2_data);
    #endif

    *v_p2_data = NULL;

    return (SUCCESS);
} /* e_std_string_free */

/**
 * @brief 内存拷贝
 *
 * @param v_p_destination - 目的地址
 * @param v_p_source      - 源地址
 * @param u16_size        - 拷贝大小
 * @return SUCCESS  - 成功
 *         FAILURE  - 失败
 * @ref https://en.cppreference.com/w/c/string/byte/memcpy
 *      https://zh.cppreference.com/w/c/string/byte/memcpy
 */
state_e e_std_string_memcpy(void *v_p_destination, const void *v_p_source, u16 u16_size)
{
    v_std_pointer_assert(v_p_source);
    v_std_pointer_assert(v_p_destination);
    v_std_min_invalid_assert(E_MIN_SIZE, u16_size);
    v_std_max_valid_assert(E_MAX_SIZE, u16_size);

    u8 *p = NULL,
       *q = NULL;

    p = (u8 *)v_p_source;
    q = (u8 *)v_p_destination;

    for (u16 i = 0; u16_size > i; ++i)
    {
        *q++ = *p++;
    }

    return (SUCCESS);
} /* e_std_string_memcpy */

/**
 * @brief 内存初始化
 *
 * @param v_p_data - 数据地址
 * @param u16_size - 大小
 * @return SUCCESS  - 成功
 *         FAILURE  - 失败
 * @ref https://en.cppreference.com/w/c/string/byte/memset
 *      https://zh.cppreference.com/w/c/string/byte/memset
 */
state_e e_std_string_memset(void *v_p_data, u16 u16_size)
{
    v_std_pointer_assert(v_p_data);
    v_std_min_invalid_assert(E_MIN_SIZE, u16_size);
    v_std_max_valid_assert(E_MAX_SIZE, u16_size);

    u8 *p = NULL;

    p = (u8 *)v_p_data;

    for (u16 i = 0; u16_size > i; ++i)
    {
        *p++ = 0;
    }

    return (SUCCESS);
} /* e_std_string_memset */

/**
 * @brief 内存初始化(扩展)
 *
 * @param v_p_data - 数据地址
 * @param u16_size - 大小
 * @return SUCCESS  - 成功
 *         FAILURE  - 失败
 * @ref https://en.cppreference.com/w/c/string/byte/memset
 *      https://zh.cppreference.com/w/c/string/byte/memset
 */

/**
 * @brief 内存初始化(扩展)
 *
 * @param v_p_data - 数据地址
 * @param u16_size - 大小
 * @param u8_init  - 初始值
 * @return SUCCESS  - 成功
 *         FAILURE  - 失败
 * @ref https://en.cppreference.com/w/c/string/byte/memset
 *      https://zh.cppreference.com/w/c/string/byte/memset
 */
state_e e_std_string_memset_extension(void *v_p_data, u16 u16_size, u8 u8_init)
{
    v_std_pointer_assert(v_p_data);
    v_std_min_invalid_assert(E_MIN_SIZE, u16_size);
    v_std_max_valid_assert(E_MAX_SIZE, u16_size);

    u8 *p = NULL;

    p = (u8 *)v_p_data;

    for (u16 i = 0; u16_size > i; ++i)
    {
        *p++ = 0;
    }

    return (SUCCESS);
} /* e_std_string_memset */
