/**
 * @file std_swap_endian.c
 * @brief 标准字节序转换文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 12:29 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date 2023-07-27 22:58 +0800
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

#include "std_swap_endian_private.h"
#include "std_swap_endian_public.h"

/**
 * @brief 小端u16
 *
 * @param[in] u16_p_data - 数据
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_endian_little16(u16 *u16_p_data)
{
    if (NULL == u16_p_data)
        return (FAILURE);

    if (M_LIEELE_ENDIAN == e_get_endian())
        return (SUCCESS);

    data16_u u_data16 =
    {
        .u16_data = *u16_p_data
    };

    *u16_p_data = (((u16)u_data16.s_byte.u8_byte1) << 8) |
                  (((u16)u_data16.s_byte.u8_byte0)     ) ;

    return (SUCCESS);
} /* e_std_swap_endian_little16 */

/**
 * @brief 小端u32
 *
 * @param[in] u32_p_data - 数据
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_endian_little32(u32 *u32_p_data)
{
    if (NULL == u32_p_data)
        return (FAILURE);

    if (M_LIEELE_ENDIAN == e_get_endian())
        return (SUCCESS);

    data32_u u_data32 =
    {
        .u32_data = *u32_p_data
    };

    *u32_p_data = (((u32)u_data32.s_byte.u8_byte3) << 24) |
                  (((u32)u_data32.s_byte.u8_byte2) << 16) |
                  (((u32)u_data32.s_byte.u8_byte1) <<  8) |
                  (((u32)u_data32.s_byte.u8_byte0)      ) ;

    return (SUCCESS);
} /* e_std_swap_endian_little32 */

/**
 * @brief 小端u64
 *
 * @param[in] u64_p_data - 数据
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_endian_little64(u64 *u64_p_data)
{
    if (NULL == u64_p_data)
        return (FAILURE);

    if (M_LIEELE_ENDIAN == e_get_endian())
        return (SUCCESS);

    data64_u u_data64 =
    {
        .u64_data = *u64_p_data
    };

    *u64_p_data = (((u64)u_data64.s_byte.u8_byte7) << 56) |
                  (((u64)u_data64.s_byte.u8_byte6) << 48) |
                  (((u64)u_data64.s_byte.u8_byte5) << 40) |
                  (((u64)u_data64.s_byte.u8_byte4) << 32) |
                  (((u64)u_data64.s_byte.u8_byte3) << 24) |
                  (((u64)u_data64.s_byte.u8_byte2) << 16) |
                  (((u64)u_data64.s_byte.u8_byte1) <<  8) |
                  (((u64)u_data64.s_byte.u8_byte0)      ) ;

    return (SUCCESS);
} /* e_std_swap_endian_little64 */

/**
 * @brief 大端u16
 *
 * @param[in] u16_p_data - 数据
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_endian_big16(u16 *u16_p_data)
{
    if (NULL == u16_p_data)
        return (FAILURE);

    if (M_BIG_ENDIAN == e_get_endian())
        return (SUCCESS);

    data16_u u_data16 =
    {
        .u16_data = *u16_p_data
    };

    *u16_p_data = (((u16)u_data16.s_byte.u8_byte0) << 8) |
                  (((u16)u_data16.s_byte.u8_byte1)     ) ;

    return (SUCCESS);
} /* e_std_swap_endian_big16 */

/**
 * @brief 大端u32
 *
 * @param[in] u32_p_data - 数据
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_endian_big32(u32 *u32_p_data)
{
    if (NULL == u32_p_data)
        return (FAILURE);

    if (M_BIG_ENDIAN == e_get_endian())
        return (SUCCESS);

    data32_u u_data32 =
    {
        .u32_data = *u32_p_data
    };

    *u32_p_data = (((u32)u_data32.s_byte.u8_byte0) << 24) |
                  (((u32)u_data32.s_byte.u8_byte1) << 16) |
                  (((u32)u_data32.s_byte.u8_byte2) <<  8) |
                  (((u32)u_data32.s_byte.u8_byte3)      ) ;

    return (SUCCESS);
} /* e_std_swap_endian_big32 */

/**
 * @brief 大端u64
 *
 * @param[in] u64_p_data - 数据
 * @return SUCCESS
 *         FAILURE
 */
state_e e_std_swap_endian_big64(u64 *u64_p_data)
{
    if (NULL == u64_p_data)
        return (FAILURE);

    if (M_BIG_ENDIAN == e_get_endian())
        return (SUCCESS);

    data64_u u_data64 =
    {
        .u64_data = *u64_p_data
    };

    *u64_p_data = (((u64)u_data64.s_byte.u8_byte0) << 56) |
                  (((u64)u_data64.s_byte.u8_byte1) << 48) |
                  (((u64)u_data64.s_byte.u8_byte2) << 40) |
                  (((u64)u_data64.s_byte.u8_byte3) << 32) |
                  (((u64)u_data64.s_byte.u8_byte4) << 24) |
                  (((u64)u_data64.s_byte.u8_byte5) << 16) |
                  (((u64)u_data64.s_byte.u8_byte6) <<  8) |
                  (((u64)u_data64.s_byte.u8_byte7)      ) ;

    return (SUCCESS);
} /* e_std_swap_endian_big64 */

/**
 * @brief 获取字节序类型
 *
 * @return E_LIEELE_ENDIAN - 小端
 *         E_BIG_ENDIAN    - 大端
 *
 * @ref https://blog.csdn.net/wwwlyj123321/article/details/100066463
 */
static endian_e e_get_endian(void)
{
    u16 u16_value = 0x1234;
    u8 *u8_p_temp = NULL;
    endian_e e_endian = E_BIG_ENDIAN;

    u8_p_temp = &u16_value;

    if (0x34 == *u8_p_temp)
        e_endian = E_LIEELE_ENDIAN;

    return (e_endian);
} /* b_get_endian */
