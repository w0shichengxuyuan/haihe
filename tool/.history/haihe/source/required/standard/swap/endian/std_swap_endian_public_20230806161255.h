/**
 * @file std_swap_endian_public.h
 * @brief 标准字节序转换公有文件
 * @author org.opencode (org.opencode@outlook.com)
 * @since 2023-08-06 13:03 +0800
 *
 * @authors woshichengxuyuan (woshichengxuyuan@hotmail.com)
 * @date 2023-08-06 16:12 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by org.opencode, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |           date         |       by       |       comments
 * ------------ | ---------------------- | -------------- | --------------------
 *   0.00.001   | 2023-08-06 16:12 +0800 |    opencode    | 初版
 * -----------------------------------------------------------------------------
 */

#ifndef __STD_SWAP_ENDIAN_PUBLIC_H__
#define __STD_SWAP_ENDIAN_PUBLIC_H__

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
     * @brief 小端u16
     *
     * @param[in] u16_p_data - 数据
     * @return SUCCESS - 成功
     *         FAILURE - 失败
     */
    state_e e_std_swap_endian_little16(u16 *u16_p_data);

    /**
     * @brief 小端u32
     *
     * @param[in] u32_p_data - 数据
     * @return SUCCESS - 成功
     *         FAILURE - 失败
     */
    state_e e_std_swap_endian_little32(u32 *u32_p_data);

    /**
     * @brief 小端u64
     *
     * @param[in] u64_p_data - 数据
     * @return SUCCESS - 成功
     *         FAILURE - 失败
     */
    state_e e_std_swap_endian_little64(u64 *u64_p_data);

    /**
     * @brief 大端u16
     *
     * @param[in] u16_p_data - 数据
     * @return SUCCESS - 成功
     *         FAILURE - 失败
     */
    state_e e_std_swap_endian_big16(u16 *u16_p_data);

    /**
     * @brief 大端u32
     *
     * @param[in] u32_p_data - 数据
     * @return SUCCESS - 成功
     *         FAILURE - 失败
     */
    state_e e_std_swap_endian_big32(u32 *u32_p_data);

    /**
     * @brief 大端u64
     *
     * @param[in] u64_p_data - 数据
     * @return SUCCESS - 成功
     *         FAILURE - 失败
     */
    state_e e_std_swap_endian_big64(u64 *u64_p_data);

#endif /* __STD_SWAP_ENDIAN_PUBLIC_H__ */
