/**
 * @file std_swap_endian_private.h
 * @brief 标准字节序转换私有文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 12:29 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date 2023-07-27 22:52 +0800
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

#ifndef __STD_SWAP_ENDIAN_PRIVATE_H__
#define __STD_SWAP_ENDIAN_PRIVATE_H__

/*header files******************************************************************/

    /*required******************************************************************/



        /*autosar***************************************************************/



            /*swc***************************************************************/



            /*rte***************************************************************/



            /*bsw***************************************************************/



        /*standard**************************************************************/

        #include "std_state_public.h"
        #include "std_string_public.h"
        #include "std_type_public.h"

        /*system****************************************************************/



    /*optional******************************************************************/



        /*bsp*******************************************************************/



        /*open******************************************************************/



        /*os********************************************************************/



        /*sdk*******************************************************************/



        /*test******************************************************************/



/*types*************************************************************************/

    /*boolean*******************************************************************/

    typedef bool endian_b;

    /*char**********************************************************************/



    /*double********************************************************************/



    /*float*********************************************************************/



    /*integer*******************************************************************/



    /*void**********************************************************************/



    /*macro*********************************************************************/



    /*structure*****************************************************************/



    /*enumeration***************************************************************/

    typedef enum endian_e
    {
        E_LIEELE_ENDIAN = FALSE,
        E_BIG_ENDIAN    = TRUE,
    } endian_e;

    /*union*********************************************************************/

    typedef union data16_u
    {
        u16 u16_data;

        struct s_byte
        {
            u8 u8_byte0;
            u8 u8_byte1;
        } s_byte;
    } data16_u;

    typedef union data32_u
    {
        u32 u32_data;

        struct s_byte
        {
            u8 u8_byte0;
            u8 u8_byte1;
            u8 u8_byte2;
            u8 u8_byte3;
        } s_byte;
    } data32_u;

    typedef union data64_u
    {
        u64 u64_data;

        struct s_byte
        {
            u8 u8_byte0;
            u8 u8_byte1;
            u8 u8_byte2;
            u8 u8_byte3;
            u8 u8_byte4;
            u8 u8_byte5;
            u8 u8_byte6;
            u8 u8_byte7;
        } s_byte;
    } data64_u;

    /*function******************************************************************/



/*declarations******************************************************************/

    /*variable******************************************************************/



    /*function******************************************************************/

    static endian_b b_get_endian(void);

#endif /* __STD_SWAP_ENDIAN_PRIVATE_H__ */
