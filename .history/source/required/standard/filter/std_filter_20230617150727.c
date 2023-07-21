/**
 * @file std_filter.c
 * @brief 标准滤波文件
 * @author openc0de (openc0de@hotmail.com)
 * @since Sat Jun 17 2023 14:58 +0800
 *
 * @name openc0de (openc0de@hotmail.com)
 * @date Sat Jun 17 2023 15:07 +0800
 * @version 0.00.001
 *
 * @copyright copyright ©2023 by openc0de, all rights reserved.
 *
 * @details
 * -----------------------------------------------------------------------------
 *    version   |             date            |       by       |    comments
 * ------------ | --------------------------- | -------------- | ---------------
 *   0.00.001   | Sat Jun 17 2023 14:58 +0800 |    openc0de    | 初版
 * -----------------------------------------------------------------------------
 */

#include "std_filter_private.h"
#include "std_filter_public.h"

// 限幅滤波法
// filter_tb - 频率滤波器的基数，Hz。  filter_tb = 2π * fc / fs。
// filter_tb_inv - 1 / filter_tb.  filter_tb_inv = 2π * fc / fs.
// filter_ta - 周期，s。  filter_ta = 2π * fc / (fs * L)。  filter_ta
//     = 2π * fc / (fs * 50)。  filter_ta = 2π * fc / fs.  filter_ta
//     = 0.2 s.  L = 50.  L = 0.2 s.  filter_ta = 0.2 s.
// filter_ta_inv - 1 / filter_ta.  filter_ta_inv = 2π * fc / (fs * 50)。
// filter_tb_inv * filter_ta_inv = 2π * fc / (fs * L)。  filter_ta_inv
