/**
 * @file std_type_public.h
 * @brief 标准类型公有文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Apr 29 2023 17:14 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jul 22 2023 23:55 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Apr 29 2023 17:14 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#ifndef __STD_TYPE_PUBLIC_H__
#define __STD_TYPE_PUBLIC_H__

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

    #ifdef __C99__
    typedef _Bool                 bool;
    #else
    typedef int                   bool;
    #endif /* __C99__ */

    /*char**********************************************************************/

    typedef signed char           i8;
    typedef unsigned char         u8;

    /*double********************************************************************/



    /*float*********************************************************************/



    /*integer*******************************************************************/

    typedef signed short          i16;
    typedef signed int            i32;
    typedef signed long long      i64;

    typedef unsigned short        u16;
    typedef unsigned int          u32;
    typedef unsigned long long    u64;

    /*void**********************************************************************/



    /*macro*********************************************************************/

    #define FALSE                 (0)
    #define TRUE                  (1)

    /*structure*****************************************************************/



    /*enumeration***************************************************************/

    /**
     * @brief 标准类型最大值
     *
     */
    typedef enum std_type_max_value_e
    {
        M_STD_U8_MAX_VALUE  = 0xff,               /**> u8最大值  */
        M_STD_U16_MAX_VALUE = 0xffff,             /**> u16最大值 */
        M_STD_U32_MAX_VALUE = 0xffffffff,         /**> u32最大值 */
        M_STD_U64_MAX_VALUE = 0xffffffffffffffff, /**> u64最大值 */
    } std_type_max_value_e;

    /*union*********************************************************************/



    /*function******************************************************************/



/*declarations******************************************************************/

    /*function******************************************************************/



#endif /* __STD_TYPE_PUBLIC_H__ */
