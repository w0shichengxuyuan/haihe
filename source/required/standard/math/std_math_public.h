/**
 * @file std_math_public.h
 * @brief 标准算术公有文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Fri Jun 16 2023 21:57 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jul 22 2023 23:48 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Fri Jun 16 2023 21:57 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#ifndef __STD_MATH_PUBLIC_H__
#define __STD_MATH_PUBLIC_H__

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
     * @brief 标准类型最大值
     *
     */
    typedef enum std_type_max_value_e
    {
        M_STD_U8_MAX_VALUE  = 0xff,       /**> u8最大值  */
        M_STD_U16_MAX_VALUE = 0xffff,     /**> u16最大值 */
        M_STD_U32_MAX_VALUE = 0xffffffff, /**> u32最大值 */
    } std_type_max_value_e;

    /*union*********************************************************************/



    /*function******************************************************************/



/*declarations******************************************************************/

    /*function******************************************************************/

    /**
     * @brief 加法运算
     *
     * @param[in] u32_augend - 被加数
     * @param[in] u32_addend - 加数
     * @return [0x00000000, 0xffffffff]
     *
     * @ref https://zhuanlan.zhihu.com/p/136367900
     */
    u32 u32_std_math_addition(u32 u32_augend, u32 u32_addend);

    /**
     * @brief 减法运算
     *
     * @param[in] u32_minuend    - 被减数
     * @param[in] u32_subtrahend - 减数
     * @return [0x00000000, 0xffffffff]
     *
     * @ref https://zhuanlan.zhihu.com/p/136367900
     */
    u32 u32_std_math_subtraction(u32 u32_minuend, u32 u32_subtrahend);

    /**
     * @brief 乘法运算
     *
     * @param[in] u32_multiplier   - 乘数
     * @param[in] u32_multiplicand - 被乘数
     * @return [0x00000000, 0xffffffff]
     *
     * @ref https://zhuanlan.zhihu.com/p/136367900
     */
    u32 u32_std_math_multiplication(u32 u32_multiplicand, u32 u32_multiplier);

    /**
     * @brief 除法求商运算
     *
     * @param[in] u32_dividend - 被除数
     * @param[in] u32_divisor  - 除数
     * @return [0x00000000, 0xffffffff]
     *
     * @ref https://zhuanlan.zhihu.com/p/136367900
     */
    u32 u32_std_math_division_quotient(u32 u32_dividend, u32 u32_divisor);

    /**
     * @brief 除法取余运算
     *
     * @param[in] u32_dividend - 被除数
     * @param[in] u32_divisor  - 除数
     * @return [0x00000000, 0xffffffff]
     *
     * @ref https://zhuanlan.zhihu.com/p/136367900
     */
    u32 u32_std_math_division_remainder(u32 u32_dividend, u32 u32_divisor);

#endif /* __STD_MATH_PUBLIC_H__ */
