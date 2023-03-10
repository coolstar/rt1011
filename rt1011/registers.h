#ifndef _RT1011_REG_H_
#define _RT1011_REG_H_

#define RT1011_DEVICE_ID_NUM 0x1011

#define RT1011_RESET				0x0000
#define RT1011_CLK_1				0x0002
#define RT1011_CLK_2				0x0004
#define RT1011_CLK_3				0x0006
#define RT1011_CLK_4				0x0008
#define RT1011_PLL_1				0x000a
#define RT1011_PLL_2				0x000c
#define RT1011_SRC_1				0x000e
#define RT1011_SRC_2				0x0010
#define RT1011_SRC_3				0x0012
#define RT1011_CLK_DET				0x0020
#define RT1011_SIL_DET				0x0022
#define RT1011_PRIV_INDEX			0x006a
#define RT1011_PRIV_DATA			0x006c
#define RT1011_CUSTOMER_ID			0x0076
#define RT1011_FM_VER				0x0078
#define RT1011_VERSION_ID			0x007a
#define RT1011_VENDOR_ID			0x007c
#define RT1011_DEVICE_ID			0x007d
#define RT1011_DUM_RW_0				0x00f0
#define RT1011_DUM_YUN				0x00f2
#define RT1011_DUM_RW_1				0x00f3
#define RT1011_DUM_RO				0x00f4
#define RT1011_MAN_I2C_DEV			0x0100
#define RT1011_DAC_SET_1			0x0102
#define RT1011_DAC_SET_2			0x0104
#define RT1011_DAC_SET_3			0x0106
#define RT1011_ADC_SET				0x0107
#define RT1011_ADC_SET_1			0x0108
#define RT1011_ADC_SET_2			0x010a
#define RT1011_ADC_SET_3			0x010c
#define RT1011_ADC_SET_4			0x010e
#define RT1011_ADC_SET_5			0x0110
#define RT1011_TDM_TOTAL_SET		0x0111
#define RT1011_TDM1_SET_TCON		0x0112
#define RT1011_TDM1_SET_1			0x0114
#define RT1011_TDM1_SET_2			0x0116
#define RT1011_TDM1_SET_3			0x0118
#define RT1011_TDM1_SET_4			0x011a
#define RT1011_TDM1_SET_5			0x011c
#define RT1011_TDM2_SET_1			0x011e
#define RT1011_TDM2_SET_2			0x0120
#define RT1011_TDM2_SET_3			0x0122
#define RT1011_TDM2_SET_4			0x0124
#define RT1011_TDM2_SET_5			0x0126
#define RT1011_PWM_CAL				0x0200
#define RT1011_MIXER_1				0x0300
#define RT1011_MIXER_2				0x0302
#define RT1011_ADRC_LIMIT			0x0310
#define RT1011_A_PRO				0x0311
#define RT1011_A_TIMING_1			0x0313
#define RT1011_A_TIMING_2			0x0314
#define RT1011_A_TEMP_SEN			0x0316
#define RT1011_SPK_VOL_DET_1		0x0319
#define RT1011_SPK_VOL_DET_2		0x031a
#define RT1011_SPK_VOL_TEST_OUT		0x031b
#define RT1011_VBAT_VOL_DET_1		0x031c
#define RT1011_VBAT_VOL_DET_2		0x031d
#define RT1011_VBAT_TEST_OUT_1		0x031e
#define RT1011_VBAT_TEST_OUT_2		0x031f
#define RT1011_VBAT_PROTECTION			0x0320
#define RT1011_VBAT_DET				0x0321
#define RT1011_POWER_1				0x0322
#define RT1011_POWER_2				0x0324
#define RT1011_POWER_3				0x0326
#define RT1011_POWER_4				0x0328
#define RT1011_POWER_5				0x0329
#define RT1011_POWER_6				0x032a
#define RT1011_POWER_7				0x032b
#define RT1011_POWER_8				0x032c
#define RT1011_POWER_9				0x032d
#define RT1011_CLASS_D_POS			0x032e
#define RT1011_BOOST_CON_1			0x0330
#define RT1011_BOOST_CON_2			0x0332
#define RT1011_ANALOG_CTRL			0x0334
#define RT1011_POWER_SEQ			0x0340
#define RT1011_SHORT_CIRCUIT_DET_1	0x0508
#define RT1011_SHORT_CIRCUIT_DET_2	0x050a
#define RT1011_SPK_TEMP_PROTECT_0		0x050c
#define RT1011_SPK_TEMP_PROTECT_1		0x050d
#define RT1011_SPK_TEMP_PROTECT_2		0x050e
#define RT1011_SPK_TEMP_PROTECT_3		0x050f
#define RT1011_SPK_TEMP_PROTECT_4		0x0510
#define RT1011_SPK_TEMP_PROTECT_5		0x0511
#define RT1011_SPK_TEMP_PROTECT_6		0x0512
#define RT1011_SPK_TEMP_PROTECT_7		0x0516
#define RT1011_SPK_TEMP_PROTECT_8		0x0517
#define RT1011_SPK_TEMP_PROTECT_9		0x0518
#define RT1011_SPK_PRO_DC_DET_1		0x0519
#define RT1011_SPK_PRO_DC_DET_2		0x051a
#define RT1011_SPK_PRO_DC_DET_3		0x051b
#define RT1011_SPK_PRO_DC_DET_4		0x051c
#define RT1011_SPK_PRO_DC_DET_5		0x051d
#define RT1011_SPK_PRO_DC_DET_6		0x051e
#define RT1011_SPK_PRO_DC_DET_7		0x051f
#define RT1011_SPK_PRO_DC_DET_8		0x0520
#define RT1011_SPL_1				0x0521
#define RT1011_SPL_2				0x0522
#define RT1011_SPL_3				0x0524
#define RT1011_SPL_4				0x0526
#define RT1011_THER_FOLD_BACK_1		0x0528
#define RT1011_THER_FOLD_BACK_2		0x052a
#define RT1011_EXCUR_PROTECT_1			0x0530
#define RT1011_EXCUR_PROTECT_2			0x0532
#define RT1011_EXCUR_PROTECT_3			0x0534
#define RT1011_EXCUR_PROTECT_4			0x0535
#define RT1011_BAT_GAIN_1			0x0536
#define RT1011_BAT_GAIN_2			0x0538
#define RT1011_BAT_GAIN_3			0x053a
#define RT1011_BAT_GAIN_4			0x053c
#define RT1011_BAT_GAIN_5			0x053d
#define RT1011_BAT_GAIN_6			0x053e
#define RT1011_BAT_GAIN_7			0x053f
#define RT1011_BAT_GAIN_8			0x0540
#define RT1011_BAT_GAIN_9			0x0541
#define RT1011_BAT_GAIN_10			0x0542
#define RT1011_BAT_GAIN_11			0x0543
#define RT1011_BAT_RT_THMAX_1		0x0544
#define RT1011_BAT_RT_THMAX_2		0x0545
#define RT1011_BAT_RT_THMAX_3		0x0546
#define RT1011_BAT_RT_THMAX_4		0x0547
#define RT1011_BAT_RT_THMAX_5		0x0548
#define RT1011_BAT_RT_THMAX_6		0x0549
#define RT1011_BAT_RT_THMAX_7		0x054a
#define RT1011_BAT_RT_THMAX_8		0x054b
#define RT1011_BAT_RT_THMAX_9		0x054c
#define RT1011_BAT_RT_THMAX_10		0x054d
#define RT1011_BAT_RT_THMAX_11		0x054e
#define RT1011_BAT_RT_THMAX_12		0x054f
#define RT1011_SPREAD_SPECTURM		0x0568
#define RT1011_PRO_GAIN_MODE		0x056a
#define RT1011_RT_DRC_CROSS			0x0600
#define RT1011_RT_DRC_HB_1			0x0611
#define RT1011_RT_DRC_HB_2			0x0612
#define RT1011_RT_DRC_HB_3			0x0613
#define RT1011_RT_DRC_HB_4			0x0614
#define RT1011_RT_DRC_HB_5			0x0615
#define RT1011_RT_DRC_HB_6			0x0616
#define RT1011_RT_DRC_HB_7			0x0617
#define RT1011_RT_DRC_HB_8			0x0618
#define RT1011_RT_DRC_BB_1			0x0621
#define RT1011_RT_DRC_BB_2			0x0622
#define RT1011_RT_DRC_BB_3			0x0623
#define RT1011_RT_DRC_BB_4			0x0624
#define RT1011_RT_DRC_BB_5			0x0625
#define RT1011_RT_DRC_BB_6			0x0626
#define RT1011_RT_DRC_BB_7			0x0627
#define RT1011_RT_DRC_BB_8			0x0628
#define RT1011_RT_DRC_POS_1			0x0631
#define RT1011_RT_DRC_POS_2			0x0632
#define RT1011_RT_DRC_POS_3			0x0633
#define RT1011_RT_DRC_POS_4			0x0634
#define RT1011_RT_DRC_POS_5			0x0635
#define RT1011_RT_DRC_POS_6			0x0636
#define RT1011_RT_DRC_POS_7			0x0637
#define RT1011_RT_DRC_POS_8			0x0638
#define RT1011_CROSS_BQ_SET_1		0x0702
#define RT1011_CROSS_BQ_SET_2		0x0704
#define RT1011_BQ_SET_0				0x0706
#define RT1011_BQ_SET_1				0x0708
#define RT1011_BQ_SET_2				0x070a
#define RT1011_BQ_PRE_GAIN_28_16	0x0710
#define RT1011_BQ_PRE_GAIN_15_0		0x0711
#define RT1011_BQ_POST_GAIN_28_16	0x0712
#define RT1011_BQ_POST_GAIN_15_0	0x0713

#define RT1011_BQ_H0_28_16					0x0720
#define RT1011_BQ_A2_15_0						0x0729
#define RT1011_BQ_1_H0_28_16					0x0730
#define RT1011_BQ_1_A2_15_0					0x0739
#define RT1011_BQ_2_H0_28_16					0x0740
#define RT1011_BQ_2_A2_15_0					0x0749
#define RT1011_BQ_3_H0_28_16					0x0750
#define RT1011_BQ_3_A2_15_0					0x0759
#define RT1011_BQ_4_H0_28_16					0x0760
#define RT1011_BQ_4_A2_15_0					0x0769
#define RT1011_BQ_5_H0_28_16					0x0770
#define RT1011_BQ_5_A2_15_0					0x0779
#define RT1011_BQ_6_H0_28_16					0x0780
#define RT1011_BQ_6_A2_15_0					0x0789
#define RT1011_BQ_7_H0_28_16					0x0790
#define RT1011_BQ_7_A2_15_0					0x0799
#define RT1011_BQ_8_H0_28_16					0x07a0
#define RT1011_BQ_8_A2_15_0					0x07a9
#define RT1011_BQ_9_H0_28_16					0x07b0
#define RT1011_BQ_9_A2_15_0					0x07b9
#define RT1011_BQ_10_H0_28_16				0x07c0
#define RT1011_BQ_10_A2_15_0					0x07c9
#define RT1011_TEST_PAD_STATUS				0x1000
#define RT1011_SYSTEM_RESET_1				0x1007
#define RT1011_SYSTEM_RESET_2				0x1008
#define RT1011_SYSTEM_RESET_3				0x1009
#define RT1011_ADCDAT_OUT_SOURCE			0x100D
#define RT1011_PLL_INTERNAL_SET				0x1010
#define RT1011_TEST_OUT_1						0x1020
#define RT1011_TEST_OUT_3						0x1024
#define RT1011_DC_CALIB_CLASSD_1			0x1200
#define RT1011_DC_CALIB_CLASSD_2			0x1202
#define RT1011_DC_CALIB_CLASSD_3			0x1204
#define RT1011_DC_CALIB_CLASSD_5			0x1208
#define RT1011_DC_CALIB_CLASSD_6			0x120a
#define RT1011_DC_CALIB_CLASSD_7			0x120c
#define RT1011_DC_CALIB_CLASSD_8			0x120e
#define RT1011_DC_CALIB_CLASSD_10			0x1212
#define RT1011_CLASSD_INTERNAL_SET_1		0x1300
#define RT1011_CLASSD_INTERNAL_SET_3		0x1304
#define RT1011_CLASSD_INTERNAL_SET_8		0x130c
#define RT1011_VREF_LV_1						0x131a
#define RT1011_SMART_BOOST_TIMING_1		0x1322
#define RT1011_SMART_BOOST_TIMING_36		0x1349
#define RT1011_SINE_GEN_REG_1				0x1500
#define RT1011_SINE_GEN_REG_2				0x1502
#define RT1011_SINE_GEN_REG_3				0x1504
#define RT1011_STP_INITIAL_RS_TEMP			0x1510
#define RT1011_STP_CALIB_RS_TEMP			0x152a
#define RT1011_INIT_RECIPROCAL_REG_24_16				0x1538
#define RT1011_INIT_RECIPROCAL_REG_15_0				0x1539
#define RT1011_STP_INITIAL_RESISTANCE_TEMP				0x153c
#define RT1011_STP_ALPHA_RECIPROCAL_MSB				0x153e
#define RT1011_SPK_RESISTANCE_1				0x1544
#define RT1011_SPK_RESISTANCE_2				0x1546
#define RT1011_SPK_THERMAL					0x1548
#define RT1011_STP_OTP_TH						0x1552
#define RT1011_ALC_BK_GAIN_O					0x1554
#define RT1011_ALC_BK_GAIN_O_PRE			0x1556
#define RT1011_SPK_DC_O_23_16				0x155a
#define RT1011_SPK_DC_O_15_0					0x155c
#define RT1011_INIT_RECIPROCAL_SYN_24_16	0x1560
#define RT1011_INIT_RECIPROCAL_SYN_15_0	0x1562
#define RT1011_STP_BQ_1_A1_L_28_16			0x1570
#define RT1011_STP_BQ_1_H0_R_15_0			0x1583
#define RT1011_STP_BQ_2_A1_L_28_16			0x1590
#define RT1011_SPK_EXCURSION_23_16			0x15be
#define RT1011_SPK_EXCURSION_15_0			0x15bf
#define RT1011_SEP_MAIN_OUT_23_16			0x15c0
#define RT1011_SEP_MAIN_OUT_15_0			0x15c1
#define RT1011_SEP_RE_REG_15_0				0x15f9
#define RT1011_DRC_CF_PARAMS_1				0x1600
#define RT1011_DRC_CF_PARAMS_12				0x160b
#define RT1011_ALC_DRC_HB_INTERNAL_1		0x1611
#define RT1011_ALC_DRC_HB_INTERNAL_5		0x1615
#define RT1011_ALC_DRC_HB_INTERNAL_6		0x1616
#define RT1011_ALC_DRC_HB_INTERNAL_7		0x1617
#define RT1011_ALC_DRC_BB_INTERNAL_1		0x1621
#define RT1011_ALC_DRC_BB_INTERNAL_5		0x1625
#define RT1011_ALC_DRC_BB_INTERNAL_6		0x1626
#define RT1011_ALC_DRC_BB_INTERNAL_7		0x1627
#define RT1011_ALC_DRC_POS_INTERNAL_1		0x1631
#define RT1011_ALC_DRC_POS_INTERNAL_5		0x1635
#define RT1011_ALC_DRC_POS_INTERNAL_6		0x1636
#define RT1011_ALC_DRC_POS_INTERNAL_7		0x1637
#define RT1011_ALC_DRC_POS_INTERNAL_8		0x1638
#define RT1011_ALC_DRC_POS_INTERNAL_9		0x163a
#define RT1011_ALC_DRC_POS_INTERNAL_10	0x163c
#define RT1011_ALC_DRC_POS_INTERNAL_11	0x163e
#define RT1011_BQ_1_PARAMS_CHECK_5			0x1648
#define RT1011_BQ_2_PARAMS_CHECK_1			0x1650
#define RT1011_BQ_2_PARAMS_CHECK_5			0x1658
#define RT1011_BQ_3_PARAMS_CHECK_1			0x1660
#define RT1011_BQ_3_PARAMS_CHECK_5			0x1668
#define RT1011_BQ_4_PARAMS_CHECK_1			0x1670
#define RT1011_BQ_4_PARAMS_CHECK_5			0x1678
#define RT1011_BQ_5_PARAMS_CHECK_1			0x1680
#define RT1011_BQ_5_PARAMS_CHECK_5			0x1688
#define RT1011_BQ_6_PARAMS_CHECK_1			0x1690
#define RT1011_BQ_6_PARAMS_CHECK_5			0x1698
#define RT1011_BQ_7_PARAMS_CHECK_1			0x1700
#define RT1011_BQ_7_PARAMS_CHECK_5			0x1708
#define RT1011_BQ_8_PARAMS_CHECK_1			0x1710
#define RT1011_BQ_8_PARAMS_CHECK_5			0x1718
#define RT1011_BQ_9_PARAMS_CHECK_1			0x1720
#define RT1011_BQ_9_PARAMS_CHECK_5			0x1728
#define RT1011_BQ_10_PARAMS_CHECK_1		0x1730
#define RT1011_BQ_10_PARAMS_CHECK_5		0x1738
#define RT1011_IRQ_1							0x173a
#define RT1011_PART_NUMBER_EFUSE			0x173e
#define RT1011_EFUSE_CONTROL_1				0x17bb
#define RT1011_EFUSE_CONTROL_2				0x17bd
#define RT1011_EFUSE_MATCH_DONE				0x17cb
#define RT1011_EFUSE_ADC_OFFSET_18_16				0x17e5
#define RT1011_EFUSE_ADC_OFFSET_15_0				0x17e7
#define RT1011_EFUSE_DAC_OFFSET_G0_20_16				0x17e9
#define RT1011_EFUSE_DAC_OFFSET_G0_15_0				0x17eb
#define RT1011_EFUSE_DAC_OFFSET_G1_20_16				0x17ed
#define RT1011_EFUSE_DAC_OFFSET_G1_15_0				0x17ef
#define RT1011_EFUSE_READ_R0_3_15_0		0x1803
#define RT1011_MAX_REG				0x1803
#define RT1011_REG_DISP_LEN 23


/* CLOCK-2 (0x0004) */
#define RT1011_FS_SYS_PRE_MASK			(0x3 << 14)
#define RT1011_FS_SYS_PRE_SFT			14
#define RT1011_FS_SYS_PRE_MCLK			(0x0 << 14)
#define RT1011_FS_SYS_PRE_BCLK			(0x1 << 14)
#define RT1011_FS_SYS_PRE_PLL1			(0x2 << 14)
#define RT1011_FS_SYS_PRE_RCCLK			(0x3 << 14)
#define RT1011_PLL1_SRC_MASK			(0x1 << 13)
#define RT1011_PLL1_SRC_SFT			13
#define RT1011_PLL1_SRC_PLL2			(0x0 << 13)
#define RT1011_PLL1_SRC_BCLK			(0x1 << 13)
#define RT1011_PLL2_SRC_MASK			(0x1 << 12)
#define RT1011_PLL2_SRC_SFT			12
#define RT1011_PLL2_SRC_MCLK			(0x0 << 12)
#define RT1011_PLL2_SRC_RCCLK			(0x1 << 12)
#define RT1011_PLL2_SRC_DIV_MASK			(0x3 << 10)
#define RT1011_PLL2_SRC_DIV_SFT			10
#define RT1011_SRCIN_DIV_MASK			(0x3 << 8)
#define RT1011_SRCIN_DIV_SFT			8
#define RT1011_FS_SYS_DIV_MASK			(0x7 << 4)
#define RT1011_FS_SYS_DIV_SFT			4

/* PLL-1 (0x000a) */
#define RT1011_PLL1_QM_MASK			(0xf << 12)
#define RT1011_PLL1_QM_SFT			12
#define RT1011_PLL1_BPM_MASK			(0x1 << 11)
#define RT1011_PLL1_BPM_SFT			11
#define RT1011_PLL1_BPM			(0x1 << 11)
#define RT1011_PLL1_QN_MASK			(0x1ff << 0)
#define RT1011_PLL1_QN_SFT			0

/* PLL-2 (0x000c) */
#define RT1011_PLL2_BPK_MASK			(0x1 << 5)
#define RT1011_PLL2_BPK_SFT			5
#define RT1011_PLL2_BPK			(0x1 << 5)
#define RT1011_PLL2_QK_MASK			(0x1f << 0)
#define RT1011_PLL2_QK_SFT			0

/* Clock Detect (0x0020) */
#define RT1011_EN_MCLK_DET_MASK			(0x1 << 15)
#define RT1011_EN_MCLK_DET_SFT			15
#define RT1011_EN_MCLK_DET			(0x1 << 15)

/* DAC Setting-2 (0x0104) */
#define RT1011_EN_CKGEN_DAC_MASK			(0x1 << 13)
#define RT1011_EN_CKGEN_DAC_SFT			13
#define RT1011_EN_CKGEN_DAC			(0x1 << 13)

/* DAC Setting-3 (0x0106) */
#define RT1011_DA_MUTE_EN_MASK			(0x1 << 15)
#define RT1011_DA_MUTE_EN_SFT			15

/* ADC Setting-5 (0x0110) */
#define RT1011_AD_EN_CKGEN_ADC_MASK			(0x1 << 9)
#define RT1011_AD_EN_CKGEN_ADC_SFT			9
#define RT1011_AD_EN_CKGEN_ADC			(0x1 << 9)

/* TDM Total Setting (0x0111) */
#define RT1011_I2S_TDM_MS_MASK			(0x1 << 14)
#define RT1011_I2S_TDM_MS_SFT			14
#define RT1011_I2S_TDM_MS_S			(0x0 << 14)
#define RT1011_I2S_TDM_MS_M			(0x1 << 14)
#define RT1011_I2S_TX_DL_MASK			(0x7 << 8)
#define RT1011_I2S_TX_DL_SFT			8
#define RT1011_I2S_TX_DL_16B			(0x0 << 8)
#define RT1011_I2S_TX_DL_20B			(0x1 << 8)
#define RT1011_I2S_TX_DL_24B			(0x2 << 8)
#define RT1011_I2S_TX_DL_32B			(0x3 << 8)
#define RT1011_I2S_TX_DL_8B			(0x4 << 8)
#define RT1011_I2S_RX_DL_MASK			(0x7 << 5)
#define RT1011_I2S_RX_DL_SFT			5
#define RT1011_I2S_RX_DL_16B			(0x0 << 5)
#define RT1011_I2S_RX_DL_20B			(0x1 << 5)
#define RT1011_I2S_RX_DL_24B			(0x2 << 5)
#define RT1011_I2S_RX_DL_32B			(0x3 << 5)
#define RT1011_I2S_RX_DL_8B			(0x4 << 5)
#define RT1011_ADCDAT1_PIN_CONFIG			(0x1 << 4)
#define RT1011_ADCDAT1_OUTPUT			(0x0 << 4)
#define RT1011_ADCDAT1_INPUT			(0x1 << 4)
#define RT1011_ADCDAT2_PIN_CONFIG			(0x1 << 3)
#define RT1011_ADCDAT2_OUTPUT			(0x0 << 3)
#define RT1011_ADCDAT2_INPUT			(0x1 << 3)
#define RT1011_I2S_TDM_DF_MASK			(0x7 << 0)
#define RT1011_I2S_TDM_DF_SFT			0
#define RT1011_I2S_TDM_DF_I2S			(0x0)
#define RT1011_I2S_TDM_DF_LEFT			(0x1)
#define RT1011_I2S_TDM_DF_PCM_A			(0x2)
#define RT1011_I2S_TDM_DF_PCM_B			(0x3)
#define RT1011_I2S_TDM_DF_PCM_A_N			(0x6)
#define RT1011_I2S_TDM_DF_PCM_B_N			(0x7)

/* TDM_tcon Setting (0x0112) */
#define RT1011_TCON_DF_MASK			(0x7 << 13)
#define RT1011_TCON_DF_SFT			13
#define RT1011_TCON_DF_I2S			(0x0 << 13)
#define RT1011_TCON_DF_LEFT			(0x1 << 13)
#define RT1011_TCON_DF_PCM_A			(0x2 << 13)
#define RT1011_TCON_DF_PCM_B			(0x3 << 13)
#define RT1011_TCON_DF_PCM_A_N			(0x6 << 13)
#define RT1011_TCON_DF_PCM_B_N			(0x7 << 13)
#define RT1011_TCON_BCLK_SEL_MASK			(0x3 << 10)
#define RT1011_TCON_BCLK_SEL_SFT			10
#define RT1011_TCON_BCLK_SEL_32FS			(0x0 << 10)
#define RT1011_TCON_BCLK_SEL_64FS			(0x1 << 10)
#define RT1011_TCON_BCLK_SEL_128FS			(0x2 << 10)
#define RT1011_TCON_BCLK_SEL_256FS			(0x3 << 10)
#define RT1011_TCON_CH_LEN_MASK			(0x3 << 5)
#define RT1011_TCON_CH_LEN_SFT			5
#define RT1011_TCON_CH_LEN_16B			(0x0 << 5)
#define RT1011_TCON_CH_LEN_20B			(0x1 << 5)
#define RT1011_TCON_CH_LEN_24B			(0x2 << 5)
#define RT1011_TCON_CH_LEN_32B			(0x3 << 5)
#define RT1011_TCON_BCLK_MST_MASK			(0x1 << 4)
#define RT1011_TCON_BCLK_MST_SFT			4
#define RT1011_TCON_BCLK_MST_INV		(0x1 << 4)

/* TDM1 Setting-1 (0x0114) */
#define RT1011_TDM_INV_BCLK_MASK			(0x1 << 15)
#define RT1011_TDM_INV_BCLK_SFT			15
#define RT1011_TDM_INV_BCLK		(0x1 << 15)
#define RT1011_I2S_CH_TX_MASK			(0x3 << 10)
#define RT1011_I2S_CH_TX_SFT			10
#define RT1011_I2S_TX_2CH			(0x0 << 10)
#define RT1011_I2S_TX_4CH			(0x1 << 10)
#define RT1011_I2S_TX_6CH			(0x2 << 10)
#define RT1011_I2S_TX_8CH			(0x3 << 10)
#define RT1011_I2S_CH_RX_MASK			(0x3 << 8)
#define RT1011_I2S_CH_RX_SFT			8
#define RT1011_I2S_RX_2CH			(0x0 << 8)
#define RT1011_I2S_RX_4CH			(0x1 << 8)
#define RT1011_I2S_RX_6CH			(0x2 << 8)
#define RT1011_I2S_RX_8CH			(0x3 << 8)
#define RT1011_I2S_LR_CH_SEL_MASK			(0x1 << 7)
#define RT1011_I2S_LR_CH_SEL_SFT			7
#define RT1011_I2S_LEFT_CH_SEL			(0x0 << 7)
#define RT1011_I2S_RIGHT_CH_SEL			(0x1 << 7)
#define RT1011_I2S_CH_TX_LEN_MASK			(0x7 << 4)
#define RT1011_I2S_CH_TX_LEN_SFT			4
#define RT1011_I2S_CH_TX_LEN_16B			(0x0 << 4)
#define RT1011_I2S_CH_TX_LEN_20B			(0x1 << 4)
#define RT1011_I2S_CH_TX_LEN_24B			(0x2 << 4)
#define RT1011_I2S_CH_TX_LEN_32B			(0x3 << 4)
#define RT1011_I2S_CH_TX_LEN_8B			(0x4 << 4)
#define RT1011_I2S_CH_RX_LEN_MASK			(0x7 << 0)
#define RT1011_I2S_CH_RX_LEN_SFT			0
#define RT1011_I2S_CH_RX_LEN_16B			(0x0 << 0)
#define RT1011_I2S_CH_RX_LEN_20B			(0x1 << 0)
#define RT1011_I2S_CH_RX_LEN_24B			(0x2 << 0)
#define RT1011_I2S_CH_RX_LEN_32B			(0x3 << 0)
#define RT1011_I2S_CH_RX_LEN_8B			(0x4 << 0)

/* TDM1 Setting-2 (0x0116) */
#define RT1011_TDM_I2S_DOCK_ADCDAT_LEN_1_MASK			(0x7 << 13)
#define RT1011_TDM_I2S_DOCK_ADCDAT_2CH			(0x1 << 13)
#define RT1011_TDM_I2S_DOCK_ADCDAT_4CH			(0x3 << 13)
#define RT1011_TDM_I2S_DOCK_ADCDAT_6CH			(0x5 << 13)
#define RT1011_TDM_I2S_DOCK_ADCDAT_8CH			(0x7 << 13)
#define RT1011_TDM_I2S_DOCK_EN_1_MASK			(0x1 << 3)
#define RT1011_TDM_I2S_DOCK_EN_1_SFT			3
#define RT1011_TDM_I2S_DOCK_EN_1		(0x1 << 3)
#define RT1011_TDM_ADCDAT1_DATA_LOCATION			(0x7 << 0)

/* TDM1 Setting-3 (0x0118) */
#define RT1011_TDM_I2S_RX_ADC1_1_MASK			(0x3 << 6)
#define RT1011_TDM_I2S_RX_ADC2_1_MASK			(0x3 << 4)
#define RT1011_TDM_I2S_RX_ADC3_1_MASK			(0x3 << 2)
#define RT1011_TDM_I2S_RX_ADC4_1_MASK			(0x3 << 0)
#define RT1011_TDM_I2S_RX_ADC1_1_LL			(0x2 << 6)
#define RT1011_TDM_I2S_RX_ADC2_1_LL			(0x2 << 4)
#define RT1011_TDM_I2S_RX_ADC3_1_LL			(0x2 << 2)
#define RT1011_TDM_I2S_RX_ADC4_1_LL			(0x2 << 0)

/* TDM1 Setting-4 (0x011a) */
#define RT1011_TDM_I2S_TX_L_DAC1_1_MASK			(0x7 << 12)
#define RT1011_TDM_I2S_TX_R_DAC1_1_MASK			(0x7 << 8)
#define RT1011_TDM_I2S_TX_L_DAC1_1_SFT 12
#define RT1011_TDM_I2S_TX_R_DAC1_1_SFT 8

/* TDM2 Setting-2 (0x0120) */
#define RT1011_TDM_I2S_DOCK_ADCDAT_LEN_2_MASK			(0x7 << 13)
#define RT1011_TDM_I2S_DOCK_EN_2_MASK			(0x1 << 3)
#define RT1011_TDM_I2S_DOCK_EN_2_SFT			3
#define RT1011_TDM_I2S_DOCK_EN_2		(0x1 << 3)

/* MIXER 1 (0x0300) */
#define RT1011_MIXER_MUTE_MIX_I_MASK			(0x1 << 15)
#define RT1011_MIXER_MUTE_MIX_I_SFT			15
#define RT1011_MIXER_MUTE_MIX_I		(0x1 << 15)
#define RT1011_MIXER_MUTE_SUM_I_MASK			(0x1 << 14)
#define RT1011_MIXER_MUTE_SUM_I_SFT			14
#define RT1011_MIXER_MUTE_SUM_I		(0x1 << 14)
#define RT1011_MIXER_MUTE_MIX_V_MASK			(0x1 << 7)
#define RT1011_MIXER_MUTE_MIX_V_SFT			7
#define RT1011_MIXER_MUTE_MIX_V		(0x1 << 7)
#define RT1011_MIXER_MUTE_SUM_V_MASK			(0x1 << 6)
#define RT1011_MIXER_MUTE_SUM_V_SFT			6
#define RT1011_MIXER_MUTE_SUM_V		(0x1 << 6)

/* Analog Temperature Sensor (0x0316) */
#define RT1011_POW_TEMP_REG				(0x1 << 2)
#define RT1011_POW_TEMP_REG_BIT			2

/* POWER-1 (0x0322) */
#define RT1011_POW_LDO2				(0x1 << 15)
#define RT1011_POW_LDO2_BIT			15
#define RT1011_POW_DAC				(0x1 << 14)
#define RT1011_POW_DAC_BIT			14
#define RT1011_POW_CLK12M				(0x1 << 13)
#define RT1011_POW_CLK12M_BIT		13
#define RT1011_POW_TEMP				(0x1 << 12)
#define RT1011_POW_TEMP_BIT			12
#define RT1011_POW_ISENSE_SPK				(0x1 << 7)
#define RT1011_POW_ISENSE_SPK_BIT			7
#define RT1011_POW_LPF_SPK				(0x1 << 6)
#define RT1011_POW_LPF_SPK_BIT			6
#define RT1011_POW_VSENSE_SPK				(0x1 << 5)
#define RT1011_POW_VSENSE_SPK_BIT			5
#define RT1011_POW_TWO_BATTERY_SPK				(0x1 << 4)
#define RT1011_POW_TWO_BATTERY_SPK_BIT			4

/* POWER-2 (0x0324) */
#define RT1011_PLLEN				(0x1 << 2)
#define RT1011_PLLEN_BIT			2
#define RT1011_POW_BG				(0x1 << 1)
#define RT1011_POW_BG_BIT			1
#define RT1011_POW_BG_MBIAS_LV				(0x1 << 0)
#define RT1011_POW_BG_MBIAS_LV_BIT		0

/* POWER-3 (0x0326) */
#define RT1011_POW_DET_SPKVDD			(0x1 << 15)
#define RT1011_POW_DET_SPKVDD_BIT		15
#define RT1011_POW_DET_VBAT				(0x1 << 14)
#define RT1011_POW_DET_VBAT_BIT			14
#define RT1011_POW_FC						(0x1 << 13)
#define RT1011_POW_FC_BIT					13
#define RT1011_POW_MBIAS_LV				(0x1 << 12)
#define RT1011_POW_MBIAS_LV_BIT			12
#define RT1011_POW_ADC_I					(0x1 << 11)
#define RT1011_POW_ADC_I_BIT				11
#define RT1011_POW_ADC_V					(0x1 << 10)
#define RT1011_POW_ADC_V_BIT				10
#define RT1011_POW_ADC_T					(0x1 << 9)
#define RT1011_POW_ADC_T_BIT				9
#define RT1011_POWD_ADC_T					(0x1 << 8)
#define RT1011_POWD_ADC_T_BIT			8
#define RT1011_POW_MIX_I					(0x1 << 7)
#define RT1011_POW_MIX_I_BIT				7
#define RT1011_POW_MIX_V					(0x1 << 6)
#define RT1011_POW_MIX_V_BIT				6
#define RT1011_POW_SUM_I					(0x1 << 5)
#define RT1011_POW_SUM_I_BIT				5
#define RT1011_POW_SUM_V					(0x1 << 4)
#define RT1011_POW_SUM_V_BIT				4
#define RT1011_POW_MIX_T					(0x1 << 2)
#define RT1011_POW_MIX_T_BIT				2
#define RT1011_BYPASS_MIX_T				(0x1 << 1)
#define RT1011_BYPASS_MIX_T_BIT			1
#define RT1011_POW_VREF_LV				(0x1 << 0)
#define RT1011_POW_VREF_LV_BIT			0

/* POWER-4 (0x0328) */
#define RT1011_POW_EN_SWR			(0x1 << 12)
#define RT1011_POW_EN_SWR_BIT		12
#define RT1011_POW_EN_PASS_BGOK_SWR			(0x1 << 10)
#define RT1011_POW_EN_PASS_BGOK_SWR_BIT		10
#define RT1011_POW_EN_PASS_VPOK_SWR			(0x1 << 9)
#define RT1011_POW_EN_PASS_VPOK_SWR_BIT		9

/* POWER-9 (0x032d) */
#define RT1011_POW_SDB_REG_MASK			(0x1 << 9)
#define RT1011_POW_SDB_REG_BIT		9
#define RT1011_POW_SDB_REG		(0x1 << 9)
#define RT1011_POW_SEL_SDB_MODE_MASK			(0x1 << 6)
#define RT1011_POW_SEL_SDB_MODE_BIT		6
#define RT1011_POW_SEL_SDB_MODE		(0x1 << 6)
#define RT1011_POW_MNL_SDB_MASK			(0x1 << 5)
#define RT1011_POW_MNL_SDB_BIT		5
#define RT1011_POW_MNL_SDB		(0x1 << 5)

/* SPK Protection-Temperature Protection (0x050c) */
#define RT1011_STP_EN_MASK			(0x1 << 15)
#define RT1011_STP_EN_BIT		15
#define RT1011_STP_EN		(0x1 << 15)
#define RT1011_STP_RS_CLB_EN_MASK			(0x1 << 14)
#define RT1011_STP_RS_CLB_EN_BIT		14
#define RT1011_STP_RS_CLB_EN		(0x1 << 14)

/* SPK Protection-Temperature Protection-4 (0x0510) */
#define RT1011_STP_R0_SELECT_MASK			(0x3 << 6)
#define RT1011_STP_R0_SELECT_EFUSE			(0x0 << 6)
#define RT1011_STP_R0_SELECT_START_VAL	(0x1 << 6)
#define RT1011_STP_R0_SELECT_REG			(0x2 << 6)
#define RT1011_STP_R0_SELECT_FORCE_ZERO	(0x3 << 6)

/* SPK Protection-Temperature Protection-6 (0x0512) */
#define RT1011_STP_R0_EN_MASK			(0x1 << 7)
#define RT1011_STP_R0_EN_BIT		7
#define RT1011_STP_R0_EN		(0x1 << 7)
#define RT1011_STP_T0_EN_MASK			(0x1 << 6)
#define RT1011_STP_T0_EN_BIT		6
#define RT1011_STP_T0_EN		(0x1 << 6)

/* Cross Biquad Setting-1 (0x0702) */
#define RT1011_MONO_LR_SEL_MASK			(0x3 << 5)
#define RT1011_MONO_L_CHANNEL			(0x0 << 5)
#define RT1011_MONO_R_CHANNEL			(0x1 << 5)
#define RT1011_MONO_LR_MIX_CHANNEL			(0x2 << 5)

/* ClassD Internal Setting-1 (0x1300) */
#define RT1011_DRIVER_READY_SPK			(0x1 << 12)
#define RT1011_DRIVER_READY_SPK_BIT		12
#define RT1011_RECV_MODE_SPK_MASK			(0x1 << 5)
#define RT1011_SPK_MODE			(0x0 << 5)
#define RT1011_RECV_MODE			(0x1 << 5)
#define RT1011_RECV_MODE_SPK_BIT		5

/* ClassD Internal Setting-3 (0x1304) */
#define RT1011_REG_GAIN_CLASSD_RI_SPK_MASK			(0x7 << 12)
#define RT1011_REG_GAIN_CLASSD_RI_410K (0x0 << 12)
#define RT1011_REG_GAIN_CLASSD_RI_95K (0x1 << 12)
#define RT1011_REG_GAIN_CLASSD_RI_82P5K (0x2 << 12)
#define RT1011_REG_GAIN_CLASSD_RI_72P5K (0x3 << 12)
#define RT1011_REG_GAIN_CLASSD_RI_62P5K (0x4 << 12)

/* ClassD Internal Setting-8 (0x130c) */
#define RT1011_TM_PORPVDD_SPK		(0x1 << 1)
#define RT1011_TM_PORPVDD_SPK_BIT		1

/* SPK Protection-Temperature Protection-SINE_GEN_REG-1 (0x1500) */
#define RT1011_STP_SIN_GEN_EN_MASK (0x1 << 13)
#define RT1011_STP_SIN_GEN_EN		(0x1 << 13)
#define RT1011_STP_SIN_GEN_EN_BIT		13


/* System Clock Source */
enum {
	RT1011_FS_SYS_PRE_S_MCLK,
	RT1011_FS_SYS_PRE_S_BCLK,
	RT1011_FS_SYS_PRE_S_PLL1,
	RT1011_FS_SYS_PRE_S_RCCLK,	/* 12M Hz */
};

/* PLL Source 1/2 */
enum {
	RT1011_PLL1_S_BCLK,
	RT1011_PLL2_S_MCLK,
	RT1011_PLL2_S_RCCLK,	/* 12M Hz */
};

enum {
	RT1011_AIF1,
	RT1011_AIFS
};

enum {
	RT1011_I2S_REF_NONE,
	RT1011_I2S_REF_LEFT_CH,
	RT1011_I2S_REF_RIGHT_CH,
};

/* BiQual & DRC related settings */
#define RT1011_BQ_DRC_NUM 128
struct rt1011_bq_drc_params {
	unsigned short val;
	unsigned short reg;
#ifdef CONFIG_64BIT
	unsigned int reserved;
#endif
};
enum {
	RT1011_ADVMODE_INITIAL_SET,
	RT1011_ADVMODE_SEP_BQ_COEFF,
	RT1011_ADVMODE_EQ_BQ_COEFF,
	RT1011_ADVMODE_BQ_UI_COEFF,
	RT1011_ADVMODE_SMARTBOOST_COEFF,
	RT1011_ADVMODE_NUM,
};

#endif