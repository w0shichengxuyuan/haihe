/**
 * @file std_swap_endian.c
 * @brief 标准字节序转换文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 12:29 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 10 2023 15:15 +0800
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

// state_e e_std_swap_endian_big(std_swap_endian_data_type_e e_type, void *v_p_data)
// {
//     if (NULL == v_p_data)
//         return (FAILURE);

//     if (BIG_ENDIAN == b_get_endian())
//         return (SUCCESS);

//     state_e e_state = SUCCESS;

//     switch (e_type)
//     {
//         case E_SWAP_ENDIAN_DATA_TYPE_U16:
//             data_u u_data =
//             {
//                 .u16_data = *((u16 *)(v_p_data))
//             };
//             u16 u16_byte0 = u_data.s_byte.u8_byte0,
//                 u16_byte1 = u_data.s_byte.u8_byte1;

//             *v_p_data = (u16_byte1 << 8) | u16_byte0;
//             break;

//         case E_SWAP_ENDIAN_DATA_TYPE_U32:
//             break;

//         case E_SWAP_ENDIAN_DATA_TYPE_U64:
//             break;

//         default:
//             e_state = FAILURE;
//             break;
//     }

//     return (e_state);
// } /* e_std_swap_endian_big */

state_e e_std_swap_endian_big(std_swap_endian_data_type_e e_type, void *v_p_data)
{
    if (NULL == v_p_data)
        return (FAILURE);

    if (BIG_ENDIAN == b_get_endian())
        return (SUCCESS);

    state_e e_state = SUCCESS;

    switch (e_type)
    {
        case E_SWAP_ENDIAN_DATA_TYPE_U16:
            data_u u_data =
            {
                .u16_data = *((u16 *)(v_p_data))
            };
            u16 u16_byte0 = u_data.s_byte.u8_byte0,
                u16_byte1 = u_data.s_byte.u8_byte1;

            *v_p_data = (u16_byte1 << 8) | u16_byte0;
            break;

        case E_SWAP_ENDIAN_DATA_TYPE_U32:
            break;

        case E_SWAP_ENDIAN_DATA_TYPE_U64:
            break;

        default:
            e_state = FAILURE;
            break;
    }

    return (e_state);
} /* e_std_swap_endian_big */

/**
 * @brief 获取字节序类型
 *
 * @return LIEELE_ENDIAN
 *         BIG_ENDIAN
 */
static endian_b b_get_endian(void)
{
    u16 u16_value = 0x1234;
    u8 *u8_p_temp = NULL;
    endian_b b_endian = BIG_ENDIAN;

    u8_p_temp = &u16_value;

    if (0x34 == *u8_p_temp)
        b_endian = LIEELE_ENDIAN;

    return (b_endian);
} /* b_get_endian */
