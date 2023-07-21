/**
 * @file std_swap_type_public.h
 * @brief 标准类型转换公有文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 10 2023 22:22 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 10 2023 23:42 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 10 2023 22:22 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#ifndef __STD_SWAP_TYPE_PUBLIC_H__
#define __STD_SWAP_TYPE_PUBLIC_H__

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
     * @brief u8数组转u16数组
     *
     * @param u8_p_in      - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u16_p_out    - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u8_to_u16(const u8  *u8_p_in,   u8  u8_in_len,
                                            u16 *u16_p_out, u8 *u8_p_out_len);

    /**
     * @brief u8数组转u32数组
     *
     * @param u8_p_in      - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u16_p_out    - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u8_to_u32(const u8  *u8_p_in,   u8  u8_in_len,
                                            u32 *u32_p_out, u8 *u8_p_out_len);

    /**
     * @brief u8数组转u64数组
     *
     * @param u8_p_in      - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u16_p_out    - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u8_to_u64(const u8  *u8_p_in,   u8  u8_in_len,
                                            u64 *u64_p_out, u8 *u8_p_out_len);

    /**
     * @brief u16数组转u8数组
     *
     * @param u16_p_in     - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u8_p_out     - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u16_to_u8(const u16 *u16_p_in, u8  u8_in_len,
                                            u8  *u8_p_out, u8 *u8_p_out_len);

    /**
     * @brief u16数组转u32数组
     *
     * @param u16_p_in     - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u32_p_out    - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u16_to_u32(const u16 *u16_p_in,  u8  u8_in_len,
                                             u32 *u32_p_out, u8 *u8_p_out_len);

    /**
     * @brief u16数组转u64数组
     *
     * @param u16_p_in     - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u64_p_out    - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u16_to_u64(const u16 *u16_p_in,  u8  u8_in_len,
                                             u64 *u64_p_out, u8 *u8_p_out_len);

    /**
     * @brief u32数组转u8数组
     *
     * @param u32_p_in     - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u8_p_out     - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u32_to_u8(const u32 *u32_p_in, u8  u8_in_len,
                                            u8  *u8_p_out, u8 *u8_p_out_len);

    /**
     * @brief u32数组转u16数组
     *
     * @param u32_p_in     - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u16_p_out    - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u32_to_u16(const u32 *u32_p_in,  u8  u8_in_len,
                                            u16 *u16_p_out, u8 *u8_p_out_len);

    /**
     * @brief u32数组转u64数组
     *
     * @param u32_p_in     - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u64_p_out    - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u32_to_u64(const u32 *u32_p_in,  u8  u8_in_len,
                                            u64 *u64_p_out, u8 *u8_p_out_len);

    /**
     * @brief u64数组转u8数组
     *
     * @param u64_p_in     - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u8_p_out     - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u64_to_u8(const u64 *u64_p_in, u8  u8_in_len,
                                            u8  *u8_p_out, u8 *u8_p_out_len);

    /**
     * @brief u64数组转u16数组
     *
     * @param u64_p_in     - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u16_p_out    - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u64_to_u16(const u64 *u64_p_in,  u8  u8_in_len,
                                            u16 *u16_p_out, u8 *u8_p_out_len);

    /**
     * @brief u64数组转u32数组
     *
     * @param u64_p_in     - 输入数据
     * @param u8_in_len    - 输入长度
     * @param u32_p_out    - 输出数据
     * @param u8_p_out_len - 输出长度
     * @return SUCCESS
     *         FAILURE
     */
    state_e e_std_swap_type_u64_to_u32(const u64 *u64_p_in,  u8  u8_in_len,
                                            u32 *u32_p_out, u8 *u8_p_out_len);

#endif /* __STD_SWAP_TYPE_PUBLIC_H__ */
