

/*
*********************************************************************
                        DEBUG MACRO
*********************************************************************
*/

//  #define __DEBUG         ////<开启系统打印调试功能

// #define GW_020L_AC4601 // 20160418 

#ifdef __DEBUG

//#define DEV_MANAGE_DEBUG
#ifdef DEV_MANAGE_DEBUG
#define FILE_OP_DEBUG
#define LOGDEV_LIST_DEBUG
#define VFS_DEBUG
#define MBR_DEBUG
#define DRV_MANAGE_DEBUG
#endif

#endif

/*
*********************************************************************
                        COMMON MACRO
*********************************************************************
*/
#define EQ_FILTER_EN            0    ///<EQ滤波器开关
//#define PA_EN                   0    ///<功放mute控制
#define SYS_LVD_EN              1    ///<系统低电检测
#define S10_MODE                0    ///<0:普通SDK     1:S10样机程序
#define POWERUP_DEFAULT_MODE    1    ///<上电默认模式使能
#ifndef BT_TESTER
//#define LED_EN                  0    ///<LED指示使能
#define KEY_TONE_EN             0    ///<按键音使能
#else
#define LED_EN                  0    ///<LED指示使能
#define KEY_TONE_EN             0    ///<按键音使能
#endif

#if S10_MODE
#define KEY_DOUBLE_CLICK             ///<按键双击功能
#define DAC_SOUNDTRACK_COMPOUND 1    ///<DAC声道合成
#else
#define DAC_SOUNDTRACK_COMPOUND 0    ///<DAC声道合成
#endif/*S10_MODE*/

/*
*********************************************************************
                        REC MACRO
*********************************************************************
*/

#ifdef AC46_512K
    #define REC_EN         0         ///512K_SDK
#else
    #define REC_EN         1         ///标准SDK
    #if REC_EN
    #define SUPPORT_ONE_KEY_ENTER_START_REC  //music
    #define ENTER_INTO_REC_MODE_AUTO_START_REC //music
    #define MODE_CHANGE_SKIP_REC_CASE
    #define AFTER_RECORD_PLAY_LAST_RECORDED_FILE
    #define ACCESS_REC_FILE_BY_FOLDER_NAME
//    #define FM_AUX_BT_START_REC_KEY_SECOND_PRESS_STOP_REC
    #define SUPPORT_AUX_FM_BT_REPLAY_KEY
    #define SUPPORT_AUX_FM_BT_SHOW_REC_TIME
    #define SUPPORT_REC_DELETE_FILTER_NOT_REC_FILE
    #define SUPPORT_REPLAY_CANCEL_FOLDER_REPEAT_AND_PLAY_NOT_REC_FILES
    #define SUPPORT_PRESS_REC_KEY_AGAIN_STOP_AND_PLAY_LAST_REC_FILE
    //#define MODIFY_REC_FILE_NAME_FOR_ZY
    
   		 #ifdef AFTER_RECORD_PLAY_LAST_RECORDED_FILE
		 extern bool bIfRecordFolder;
		 #endif		 
 
    #ifdef modify_20151021
 		#define support_rec_play_first_mute_after_rec
    #define support_rec_recplay_notice
//    #define SUPPORT_REC_STOP_PLAY_REC_FILE
    #ifdef SUPPORT_REC_STOP_PLAY_REC_FILE
    extern u32 curr_dir_file_num;
    extern  bool  play_rec_last_file;   
    extern  bool  aux_fm_rec_sw;   
    #endif
    
    #endif
    #endif
#endif


/*
*********************************************************************
                        FM MACRO  RTC
*********************************************************************
*/
#ifdef AC46_512K
    #define FM_RADIO_EN         0       ///
#else
    #define FM_RADIO_EN         1
#endif	
/*
*********************************************************************
                        RTC MACRO
*********************************************************************
*/
#ifdef AC46_512K
    #define RTC_CLK_EN              0       ///<512K_SDK RTC时钟模式
    #define RTC_ALM_EN          	0       ///<512K_SDK RTC闹钟模式
#else

    #define RTC_CLK_EN              0       ///<标准SDK RTC时钟模式
    #if RTC_CLK_EN
        #define RTC_ALM_EN          1       ///<标准SDK RTC闹钟模式
    #endif

#endif

/*
*********************************************************************
                        BT MACRO
*********************************************************************
*/
//配置测试盒测试功能
#define NON_TEST         0       //没频偏和距离测试
#define FRE_OFFSET_TEST  BIT(0)  //频偏测试
#define DISTANCE_TEST    BIT(1)  //距离测试



#define NORMAL_MODE         0
#define TEST_INDEX_MODE     1     //指标性能测试(使用MT8852A仪器测试)
#define TEST_FCC_MODE       2     //测试fcc认证
#define TEST_FRE_OFF_MODE   3     //测试频偏(使用频谱分析仪-手提测试仪-中心频率默认2420M)
#define TEST_PERFOR_MODE    4    //指标性能测试(使用MT8852A仪器测试,测试芯片性能的时候使用)


#define BT_MODE        NORMAL_MODE
#ifndef BT_TESTER
#define BT_BACKMODE         0
#if !BT_BACKMODE
    #define BT_HID_INDEPENDENT_MODE  0    //HID拍照的独立模式只支持非后台
#endif
#else
#define BT_BACKMODE         0
#endif

#ifdef AC46_512K
    #define BT_PHONE_NUMBER     0          //来电报号
#else
    #define BT_PHONE_NUMBER     0          //来电报号
#endif
/*
*********************************************************************
                        UART MACRO
*********************************************************************
*/


#define UART0   0
#define UART1   1
#define UART2   2
#define UART_NO 0xFF

#ifdef __DEBUG
#if S10_MODE
#define S10_UART_DEBUG    0
#if S10_UART_DEBUG
#define DEBUG_UART   UART1
#else
#define DEBUG_UART   UART_NO
#endif/*S10_UART_DEBUG*/
#else
#ifdef BT_TESTER
#define DEBUG_UART   UART1  /*标准SDK打印口*/
#else
#define DEBUG_UART   UART0  /*标准SDK打印口*/
#endif
#endif/*S10_MODE*/

#else
#define DEBUG_UART UART_NO
#endif/*__DEBUG*/

/*
*********************************************************************
                        DAC MACRO
*********************************************************************
*/
#define DAC_EN          1
#if DAC_EN
#define DAC_FADE_EN     1
#else
#define DAC_FADE_EN     0
#endif

/*
*********************************************************************
                        DEVICE MACRO
*********************************************************************
*/
#ifdef BT_TESTER
    #define SDMMC0_EN       0    ///<SD0使能
    #define SDMMC1_EN       0    ///<SD1使能
#else
    #if S10_MODE
    #define SDMMC0_EN       1
    #define SDMMC1_EN       0
    #else
    #define SDMMC0_EN       1
    #define SDMMC1_EN       0   // 1
    #endif/*S10_MODE*/
#endif

#ifdef AC46_512K
    #define USB_DISK_EN     0    ///<512K 不添加 U盘 PC 功能
    #define USB_PC_EN       0    ///<512K 不添加 U盘 PC 功能
#else
    #if S10_MODE
        #define USB_DISK_EN     0    ///<U盘使能
        #define USB_PC_EN       0    ///<PC使能
    #else
        #define USB_DISK_EN     1
        #define USB_PC_EN       1
    #endif/*S10_MODE*/
#endif

#define SPI_FLASH_BLK_NUM   8
//#define POWERUP_DEV_IGNORE       ///<插着设备上电是否响应U盘或SD
//#define AUX_OUT_WITHOUT_CNT
/*
*********************************************************************
                        UI MACRO
*********************************************************************
*/

#define UI_ENABLE       1     ///>UI_显示

//LED    
#if 0//UI_ENABLE
#define support_LED7_USER_PA7PA8PA9PA10PA11PA14PA15
#define led_io_180_mirror
#define support_aux_led_disp_line     //屏上显示"LINE"
#define support_mute_led_all_flish    //MUTE 全屏闪烁
#define support_led_disp_pause
#define  support_yl_3520


//电池符号 
  #define   led_icon_disp_vat_volage
  #ifdef led_icon_disp_vat_volage
  #define  support_battery_mode_check    //电压状态显示 
  #endif 
  
#define   support_user_dsp_eq     //频谱显示
#define support_bt_waiting_conn_filsh_led   //等待连接 LED 闪闪
#endif 
#ifdef GW_020L_AC4601
#define no_use_panel
#endif
//****led screen setting******/
#define LED_SCREEN_EN
#ifdef LED_SCREEN_EN
//#define LED_ID_KF8845AB
//#define LED_ID_8848
//#define LED_ID_4018N_2
#define LED_ID_4018_72
//#define LED_ID_KF33T1
#define LED_7PIN_MODE
//#define LED_USE_7PIN_PA7__PA11PA14PA15
//#define LED_USE_7PIN_PB8PB7PB6PA15PA14PA10PA9
//#define LED_USE_7PIN_PA9__PA15PB6PA7
// #define LED_USE_7PIN_PA9__PA15PB6PB7
//#define LED_USE_7PIN_PA6PA7_PA9PA10PA11PA14PA15
 #define LED_USE_7PIN_PA15PA14PA4PA10PA9PA7PA6
//#define LED_7PIN_REVERSE
#define LED_COM_MAX 7
#define LED_8NUMS 4
#define LED_8GRIDS 7
#define LED_ICON_NUMS 10
#define SUPPORT_FLASH_ICON
#define SUPPORT_FLASH_CHAR

#define SUPPORT_REPEAT_ICON_OFF  // jsuo 20160405 add 

#ifdef SUPPORT_FLASH_CHAR
#define SUPPORT_LED_BLUE_STRING_FLASH
#define SUPPORT_MUTE_FLASH
//#define MUTE_FLASH_ZERO_VOL
#define MUTE_FLASH_ALL_SCREEN
#endif
#define LED_SHOW_DEVICE_PLUGIN
#define LED_SHOW_BT_EQ
#define LED_SHOW_MP3_PAUSE
#define LED_SHOW_POWER_OFF_STRING " OFF"
#define LED_SHOW_INTRO_STRING "SCAN"

#define LED_EXIT_MP3_NOT_SHOW_LOAD
#define MP3_NEXT_MODE_IS_AUX 0
#define EXIT_AUX_TASK_NOT_SHOW_LOAD
//#define LED_SWITCH_FM2AUX_SHOW_LINE
#define LED_FM_EXIT_NOT_SHOW_LOAD
#define EXIT_BT_NOT_SHOW_LOAD
#define LINEIN_INIT_SHOW_AUX_INTIME

#define support_aux_led_disp_line
#endif


//检测是否外接电源
//#define support_ic_chack_dc_in
//#define chack_dc_in_user_PB10   

//*****BAT DETECT *****//
#define SUPPORT_BAT_DETECT
#ifdef SUPPORT_BAT_DETECT
#define SUPPORT_BAT_DETECT_USE_IO
#define DETECT_EXTERNAL_BAT_USE_PA8
#define LED_SCREEN_SHOW_BAT_STATUS
// #define LOW_POWER_OFF_STEPS  31 //6v low power mode
#define LOW_POWER_DIRECT_INTO_IDLE_MODE
#define BEFORE_ENTER_IDLE_FLASH_AND_CLEAR_LED_SCREEN
#define support_low_power_stanby
#endif

//karaoke detect
#define EXTERN_KOK_DETECT_USE_IO_EN 1
#if EXTERN_KOK_DETECT_USE_IO_EN
#define KOK_DETECT_USE_IO_ADC_VALUE
//#define KOK_DETECT_USE_PA4
#define KOK_DETECT_USE_PA11
//#define support_kok_control_amp
//#define support_kok_plus_in_det
//#define kok_plus_in_use_pc15
//#define KOK_DETECT_USE_KEY
//#define SUPPORT_MIC_LED_SHOW_ONOFF
#endif
/**********************  MUZHE ADD **************************/

// adk  
#define KEY_IO_EN      0  ///<IO按键使能
#define KEY_AD_EN      1   ///<AD按键使能
#if KEY_IO_EN
    #define support_io_scan_key_user_PA0_PA4_PA6
    #define support_YHD328_io_scan_mode
#endif   
#if KEY_AD_EN
  #define support_adk_user_PA0
 // #define AD_INTERNAL_PULL_UP //10K
#endif 
//key msg 
//#define ADK_USE_10KEY_MODE
#define ADK_USE_11KEY_MODE
//#define ADK_USE_15KEY_MODE
//#define ADK_USE_GENERAL_10KEY_MSG
//#define AKD_USE_ZY_15KEY_MSG
//#define ADK_USE_ZY_10KEY_MSG
//#define ADK_USE_FS_GENERAL_10KEY
#define ADK_USE_GW_22Kup_48PIN_GENERAL_11KEY_kok
//#define  adk_user_6_key_mode_2   
//#define support_led_off_key 
//#define support_change_mode_on_led
#define AD_KEY_MAX 11
#define SUPPORT_ONE_KEY_TO_AUX
#define SUPPORT_ONE_KEY_TO_RADIO
#define SUPPORT_ONE_KEY_TO_MP3
#define SUPPORT_ONE_KEY_TO_USB
#define SUPPORT_ONE_KEY_TO_SD
#define SUPPORT_ONE_KEY_TO_BT

#ifdef ADK_USE_10KEY_MODE
#define PULL_UP_RESISTANCE 22   //上拉电阻22K
#define KEY9_RES 0   //PP
#define KEY8_RES 3.3 //MODE
#define KEY7_RES 7.5  //BT
#define KEY6_RES 10  //repeat
#define KEY5_RES 15  //eq
#define KEY4_RES 20  //next/v+ 
#define KEY3_RES 33  //prev/v-
#define KEY2_RES 56  //standby
#define KEY1_RES 100  //stop
#define KEY0_NOKEY_RES 220
#elif defined(ADK_USE_11KEY_MODE)
#define PULL_UP_RESISTANCE 22   //上拉电阻22K
#define KEYA_RES 0   //pp
#define KEY9_RES 3 //prev/v-
#define KEY8_RES 6.2  //next v+
#define KEY7_RES 9.1  //mode
#define KEY6_RES 15  //eq
#define KEY5_RES 24  //repeat
#define KEY4_RES 33  //rec play
#define KEY3_RES 51 //rec/RECPLAY
#define KEY2_RES 100 //mic-kok
#define KEY1_RES 220 //stop
#define KEY0_NOKEY_RES 330
#else
#define PULL_UP_RESISTANCE 10   //上拉电阻10K
#define KEYE_RES 0  //one key to aux
#define KEYD_RES 0.56 //stop
#define KEYC_RES 1.2  //pp
#define KEYB_RES 2.4  //usb/sd
#define KEYA_RES 3.3  //mode  
#define KEY9_RES 4.3 //vol-
#define KEY8_RES 5.6 //next/vol+  
#define KEY7_RES 16  //repeat
#define KEY6_RES 20  //eq
#define KEY5_RES 27  //one key to radio
#define KEY4_RES 47 //prev/vol-
#define KEY3_RES 91 //vol+
#define KEY2_RES 180
#define KEY1_RES 200
#define KEY0_NOKEY_RES 220
#endif

//IR
#define KEY_IR_EN       1   ///<红外遥控使能
#if KEY_IR_EN 
    #define   Ir_user_pa5
    //#define IR_USER_KPL_002    //IR_USER_KPL_001
    //#define IR_FF00_004_21KEY
    //#define ir_user_kpl_ty_msg
    // #define IR_TY_DOUBLE_00FF_807F_23KEY
    // #define IR_ZY_DOUBLE_GENERAL_YK2119_00FF_807F_22KEY
    //   #define IR_ZY_NEW_DOUBLE_GENERAL_00FF_807F_26KEY
     //#define IR_FS_BF00_009_18KEY
#endif 
 #define IR_GW_FF00_GENERAL_23KEY
 #define support_scan_key_as_usbsd
#define  ir_max_num 	23
#define IR_NUMS 1


#if KEY_TONE_EN
// #define support_all_KEY_TONE_EN   //任意按键都有按键音
// #define   support_vol_max_tone_en    //音量最大 按键音提示
#endif 



//line 
#define   line_user_PC13_PC12 
//line 检测
  //#define AUX_DETECT_EN      
#ifdef AUX_DETECT_EN
   #define  support_line_chack_user_PA5
   #define  support_line_unline_to_next_mode   //AUX 不在线到下一个模式
#endif 

// PP LED 
#define LED_EN                  0   ///<LED指示使能
//#define  PP_LED_USER_PB6 //PB7
//led light
#define NEW_LED_SHOW_METHOD
#ifdef NEW_LED_SHOW_METHOD
#define LED_NUMS 1
#define LED_SHOW_BT 1
#define LED_SHOW_MP3 1
#define LED_SHOW_AUX 1
#define LED_SHOW_FM 1
#define LED_SHOW_IDLE 1
#define LED_SHOW_POWER 1
//#define ALL_LED_CONTROL_TOGETHER
//#define USE_KEY_SWITCH_LED_MODE
//#define LED_SCREEN_SHOW_LED_MODE
#define FM_SCAN_STOP_LIGHT_ON
#endif

//AB/D
#define support_amP_ab_d
#define amp_ab_d_user_PB9
 #define ONLY_POWER_ON_MUTE	//amp low mute,power on delay 4s unmute

//MUTE IO 
    #define   PA_EN 1 
    #define   PA_ENABLE 
#ifdef PA_ENABLE
        #define   pa_mute_use_pin_PC11
        #define   mute_io_L_is_mute   //  低MUTE   不定义为高MUTE    
        #define support_vol_is_0_mute_amp    //音量到0 MUTE 功放
        #define support_pause_stop_mute_amp
        #define BT_MODE_ONLY_MUTE_DAC

//		#define BT_NOT_PLAY_IO_MUTE
	#define  support_aux_plus_in_power_on_mute_moment
		
	#define 	IO_MUTE_DELAY_ALL_STATE
	#define 	IO_MUTE_DELAY_VAL  10
	#ifdef IO_MUTE_DELAY_ALL_STATE
		extern u8 bMuteDelayCnt;
	#endif
//	#define support_change_in_aux_mute_amp  // 3s
#endif 


//开机 默认模式  
//  #define MP3_AUX_BT_FM
//   #define MP3_BT_FM_AUX
 //  #define MP3_BT_AUX_FM
 #define MP3_AUX_FM_BT
//  #define power_on_no_usb_sd_to_bt
 #define POWER_ON_NO_DEV_TO_AUX
 #define PLUG_OUT_DEV_TO_LINEIN_MODE



//默认音量  
#define SYS_DEFAULT_VOL_EN      1    ///<系统开机默认音量使能
#if SYS_DEFAULT_VOL_EN
#ifdef GW_020L_AC4601
#define SYS_DEFAULT_VOL         26  ///<系统启动默认音量值
#define SYS_VOL_MAX     26
#define LED_SHOW_VOL_MAX 30
#else
#define SYS_DEFAULT_VOL         30  ///<系统启动默认音量值
#endif
#endif




#define REMOVE_BT_MODE_NOTICE //关蓝牙模式提示音
#define support_SHORT_PPKEY_Twice_CALL_LAST_NO
#define  support_PP_CALL_ACTIVE_HANGUP_UP   //通话时按PP 挂断电话
#define support_line_pause    //显示PAUSE
#define support_mode_change_vol_min_to_min   10  // 转换模式时音量小于10  则等于10
#define SUPPORT_MUSIC_STOP
#define support_stanby_mod
#define BT_POWER_ON_USE_WAIT_VOICE
#define REPEAT_NOT_USE_RANDOM_AND_FOLDER
#define MULTIPLE_DEVICE_PLUGOUT_ONE_AUTO_CHANGE_TO_ANOTHER_DEVICE
#define support_mode_key_user_usb_sd
#define A2DP_AUTO_PLAY_EN 1
//#define APPLE_MOBILE_PAUSE_NOT_FLASH_LIGHT_INTIME
#define REPEAT_NOT_USE_RANDOM
#define LED_SHOW_EQ_WITH_NAME
#define EQ_SEQUENCE_ADJ_ANYWAY
//#define DURING_FM_EXITING_TASK_NOT_RESPOND_KEY_MSG //aux exit state press mode key fast and more times system die
#define POWER_ON_WITH_USB_AND_SD_PLAY_USB_FIRST
//#define IO_MUTE_DELAY_ALL_STATE 
//#define BT_NOT_PLAY_IO_MUTE
#define SUPPORT_MUSIC_INTRO_PLAY
#define SUPPORT_FM_PAUSE
#define support_vt_tone_delay  //回连延时报语音

#define support_off_aux_fm_notice

#define support_music_eq_default_jazz

// #define SUPPORT_MULTIPLE_MODE_IN_LINEIN_MODE //no device but want to under at mp3 mode
#ifdef SUPPORT_MULTIPLE_MODE_IN_LINEIN_MODE
enum{
  mode_mp3_nodevice=0,
  mode_aux,
  mode_linein_max,
  mode_cd,
  mode_dvd,
    mode_ac3,

}MODE_IN_LINEIN;
#define SUPPORT_MP3_IDEL_MODE_IN_LINEIN_MODE
#define MODE_KEY_MP3_PREV_MODE "BtStackTask"
#define MODE_KEY_MP3_NEXT_MODE "LineinTask"
#define support_mode_key_no_in_nop_mode
extern u8 bModeOfAuxContained;
#endif



