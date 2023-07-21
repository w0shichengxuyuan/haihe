/**
 * @file std_hw_delay_public.h
 * @brief 标准硬件延时公有文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Thu Jun 15 2023 22:16 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Tue Jun 27 2023 23:36 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Thu Jun 15 2023 22:16 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#ifndef __STD_HW_DELAY_PUBLIC_H__
#define __STD_HW_DELAY_PUBLIC_H__

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



    /*union*********************************************************************/



    /*function******************************************************************/



/*declarations******************************************************************/

    /*function******************************************************************/

    /**
     * @brief 基本硬件延时
     *
     */
    void v_std_hw_delay_do_nothing(void);

    /**
     * @brief 微秒硬件延时
     *
     * @param[in] u32_size - 大小
     */
    void v_std_hw_delay_us(u32 u32_size);

    /**
     * @brief 毫秒硬件延时
     *
     * @param[in] u32_size - 大小
     */
    void v_std_hw_delay_ms(u32 u32_size);

    /**
     * @brief 秒硬件延时
     *
     * @param[in] u32_size - 大小
     */
    void v_std_hw_delay_s(u32 u32_size);

    /**
     * @brief 分钟硬件延时
     *
     * @param[in] u32_size - 大小
     */
    void v_std_hw_delay_min(u32 u32_size);

    /**
     * @brief 1微秒硬件延时
     *
     */
    void v_std_hw_delay_1us(void);

    /**
     * @brief 10微秒硬件延时
     *
     */
    void v_std_hw_delay_10us(void);

    /**
     * @brief 50微秒硬件延时
     *
     */
    void v_std_hw_delay_50us(void);

    /**
     * @brief 100微秒硬件延时
     *
     */
    void v_std_hw_delay_100us(void);

    /**
     * @brief 200微秒硬件延时
     *
     */
    void v_std_hw_delay_200us(void);

    /**
     * @brief 500微秒硬件延时
     *
     */
    void v_std_hw_delay_500us(void);

    /**
     * @brief 1毫秒硬件延时
     *
     */
    void v_std_hw_delay_1ms(void);

    /**
     * @brief 10毫秒硬件延时
     *
     */
    void v_std_hw_delay_10ms(void);

    /**
     * @brief 50毫秒硬件延时
     *
     */
    void v_std_hw_delay_50ms(void);

    /**
     * @brief 100毫秒硬件延时
     *
     */
    void v_std_hw_delay_100ms(void);

    /**
     * @brief 200毫秒硬件延时
     *
     */
    void v_std_hw_delay_200ms(void);

    /**
     * @brief 500毫秒硬件延时
     *
     */
    void v_std_hw_delay_500ms(void);

    /**
     * @brief 1秒硬件延时
     *
     */
    void v_std_hw_delay_1s(void);

    /**
     * @brief 2秒硬件延时
     *
     */
    void v_std_hw_delay_2s(void);

    /**
     * @brief 5秒硬件延时
     *
     */
    void v_std_hw_delay_5s(void);

    /**
     * @brief 10秒硬件延时
     *
     */
    void v_std_hw_delay_10s(void);

    /**
     * @brief 15秒硬件延时
     *
     */
    void v_std_hw_delay_15s(void);

    /**
     * @brief 20秒硬件延时
     *
     */
    void v_std_hw_delay_20s(void);

    /**
     * @brief 30秒硬件延时
     *
     */
    void v_std_hw_delay_30s(void);

    /**
     * @brief 1分钟硬件延时
     *
     */
    void v_std_hw_delay_1min(void);

#endif /* __STD_HW_DELAY_PUBLIC_H__ */
