/**
 * @file std_swap_endian_private.h
 * @brief 标准字节序转换私有文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 12:29 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 10 2023 14:18 +0800
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

        #include "std_type_public.h"
        #include "std_state_public.h"
        #include "std_lib_public.h"

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



    /*union*********************************************************************/

    typedef union endian_u
    {
        u64 u64_data;

        {
            u8 u8_byte0;
            u8 u8_byte1;
            u8 u8_byte2;
            u8 u8_byte3;
            u8 u8_byte4;
            u8 u8_byte5;
            u8 u8_byte6;
            u8 u8_byte7;
        }
    } endian_u;

    /*function******************************************************************/



/*declarations******************************************************************/

    /*variable******************************************************************/



    /*function******************************************************************/

    static endian_b b_get_endian(void);

#endif /* __STD_SWAP_ENDIAN_PRIVATE_H__ */
