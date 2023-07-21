/**
 * @file std_string_public.h
 * @brief 标准字符公有文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Fri Jun 16 2023 23:38 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jul 22 2023 00:08 +0800
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

#ifndef __STD_STRING_PUBLIC_H__
#define __STD_STRING_PUBLIC_H__

/*header files******************************************************************/

    /*required******************************************************************/



        /*autosar***************************************************************/



            /*swc***************************************************************/



            /*rte***************************************************************/



            /*bsw***************************************************************/



        /*standard**************************************************************/

        #include "std_assert_public.h"
        #include "std_state_public.h"
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

    #define NULL    ((void *)0)

    /*structure*****************************************************************/



    /*enumeration***************************************************************/



    /*union*********************************************************************/



    /*function******************************************************************/



/*declarations******************************************************************/

    /*function******************************************************************/

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
    state_e e_std_string_malloc(void **v_p2_data, u16 u16_size);

    /**
     * @brief 释放堆内存
     *
     * @param v_p2_data - 指针本身的地址
     *       *v_p2_data - 指针指向的地址
     *      **v_p2_data - 指针指向的地址上的值
     * @return SUCCESS  - 成功
     *         FAILURE  - 失败
     */
    state_e e_std_string_free(void **v_p2_data);

#endif /* __STD_STRING_PUBLIC_H__ */
