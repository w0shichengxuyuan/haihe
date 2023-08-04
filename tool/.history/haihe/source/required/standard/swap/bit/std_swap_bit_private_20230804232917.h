/**
 * @file std_swap_bit_private.h
 * @brief 标准位转换私有文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 21:14 +0800
 *
 * @authors opencode (openc0de@hotmail.com)
 * @date 2023-08-04 23:29 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 10 2023 21:14 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#ifndef __STD_SWAP_BIT_PRIVATE_H__
#define __STD_SWAP_BIT_PRIVATE_H__

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



    /*char**********************************************************************/



    /*double********************************************************************/



    /*float*********************************************************************/



    /*integer*******************************************************************/



    /*void**********************************************************************/



    /*macro*********************************************************************/

    #ifdef __32BIT__
        #define M_MAX_BIT_NUMBER    (31)
    #elif __64BIT__
        #define M_MAX_BIT_NUMBER    (63)
    #else
        #define M_MAX_BIT_NUMBER     (0)
    #endif

    /*structure*****************************************************************/



    /*enumeration***************************************************************/



    /*union*********************************************************************/



    /*function******************************************************************/



/*declarations******************************************************************/

    /*variable******************************************************************/



    /*function******************************************************************/



#endif /* __STD_SWAP_BIT_PRIVATE_H__ */
