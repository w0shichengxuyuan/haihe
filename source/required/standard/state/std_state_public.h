/**
 * @file std_state_public.h
 * @brief 标准状态公有文件
 * @author opencode (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 00:09 +0800
 *
 * @authors opencode (openc0de@hotmail.com)
 * @date 2023-08-04 23:30 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by opencode, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 10 2023 00:09 +0800 |    opencode    | 初版
 * -----------------------------------------------------------------------------
 */

#ifndef __STD_STATE_PUBLIC_H__
#define __STD_STATE_PUBLIC_H__

/*header files******************************************************************/

    /*required******************************************************************/



        /*autosar***************************************************************/



            /*swc***************************************************************/



            /*rte***************************************************************/



            /*bsw***************************************************************/



        /*standard**************************************************************/



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



    /*structure*****************************************************************/



    /*enumeration***************************************************************/

    /**
     * @brief 标准状态
     *
     */
    typedef enum state_e
    {
        SUCCESS = 0x00, /**< 成功 */
        FAILURE = 0x01, /**< 失败 */
    } state_e;

    /*union*********************************************************************/



    /*function******************************************************************/



/*declarations******************************************************************/

    /*function******************************************************************/



#endif /* __STD_STATE_PUBLIC_H__ */
