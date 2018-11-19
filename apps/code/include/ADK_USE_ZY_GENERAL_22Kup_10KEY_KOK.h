

/*******************************************************************
*******************************************************************/
#define ADKEY_DECODE_SHORT		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    MSG_MIC_PRIORITY,\
/*03*/    MSG_MUSIC_PREV_FILE,\
/*04*/    MSG_MUSIC_NEXT_FILE,\
/*05*/	  MSG_MUSIC_EQ,\
/*06*/	  MSG_MUSIC_RPT,\
/*07*/	  MSG_ONE_KEY_START_REC,\
/*08*/	  MSG_CHANGE_WORKMODE,\
/*09*/	  MSG_MUSIC_PP

#define ADKEY_DECODE_LONG		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    MSG_VOL_DOWN,\
/*04*/    MSG_VOL_UP,\
/*05*/	 MSG_MIC_PRIORITY,\
/*06*/	 MSG_MUSIC_DEL_FILE,\
/*07*/	 NO_MSG,\
/*08*/	 MSG_REC_REPLAY,\
/*09*/	 MSG_ONE_KEY_START_REC

#define ADKEY_DECODE_HOLD		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    MSG_VOL_DOWN,\
/*04*/    MSG_VOL_UP,\
/*05*/	  NO_MSG,\
/*06*/	  NO_MSG,\
/*07*/	  NO_MSG,\
/*08*/	  NO_MSG,\
/*09*/	  NO_MSG


#define ADKEY_DECODE_LONG_UP	\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/    NO_MSG,\
/*06*/    NO_MSG,\
/*07*/    NO_MSG,\
/*08*/    NO_MSG,\
/*09*/    NO_MSG


/*******************************************************************
FM   AD������
*******************************************************************/
#define ADKEY_FM_SHORT		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    MSG_MIC_PRIORITY,\
/*03*/    MSG_FM_PREV_STATION,\
/*04*/    MSG_FM_NEXT_STATION,\
/*05*/	  NO_MSG,\
/*06*/	  NO_MSG,\
/*07*/	  MSG_REC_START,\
/*08*/	  MSG_CHANGE_WORKMODE,\
/*09*/	  MSG_FM_SCAN_ALL_INIT


#define ADKEY_FM_LONG		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    MSG_VOL_DOWN,\
/*04*/    MSG_VOL_UP,\
/*05*/	 MSG_MIC_PRIORITY,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 MSG_COM_REC_REPLAY,\
/*09*/	 MSG_REC_START

#define ADKEY_FM_HOLD		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    MSG_VOL_DOWN,\
/*04*/    MSG_VOL_UP,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

#define ADKEY_FM_LONG_UP	\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/    NO_MSG,\
/*06*/    NO_MSG,\
/*07*/    NO_MSG,\
/*08*/    NO_MSG,\
/*09*/    NO_MSG

/*******************************************************************
LINE    AD������
*******************************************************************/

#define ADKEY_AUX_SHORT		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    MSG_MIC_PRIORITY,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	  NO_MSG,\
/*06*/	  NO_MSG,\
/*07*/	  MSG_REC_START,\
/*08*/	  MSG_CHANGE_WORKMODE,\
/*09*/	  MSG_AUX_PAUSE


#define ADKEY_AUX_LONG		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    MSG_VOL_DOWN,\
/*04*/    MSG_VOL_UP,\
/*05*/	 MSG_MIC_PRIORITY,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 MSG_COM_REC_REPLAY,\
/*09*/	 MSG_REC_START


#define ADKEY_AUX_HOLD		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    MSG_VOL_DOWN,\
/*04*/    MSG_VOL_UP,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

#define ADKEY_AUX_LONG_UP	\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

/*******************************************************************
BT   AD������
*******************************************************************/

#define ADKEY_BT_SHORT		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    MSG_MIC_PRIORITY,\
/*03*/    MSG_BT_PREV_FILE,\
/*04*/    MSG_BT_NEXT_FILE,\
/*05*/	  NO_MSG,\
/*06*/	  NO_MSG,\
/*07*/	  NO_MSG,\
/*08*/	  MSG_CHANGE_WORKMODE,\
/*09*/	  MSG_BT_PP

#define ADKEY_BT_LONG		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    MSG_VOL_DOWN,\
/*04*/    MSG_VOL_UP,\
/*05*/	 MSG_MIC_PRIORITY,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG


#define ADKEY_BT_HOLD		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    MSG_VOL_DOWN,\
/*04*/    MSG_VOL_UP,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

#define ADKEY_BT_LONG_UP	\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    MSG_VOL_DOWN,\
/*04*/    MSG_VOL_UP,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG


/*******************************************************************
USB   AD������
*******************************************************************/
#define ADKEY_USB_SHORT		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

#define ADKEY_USB_LONG		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG


#define ADKEY_USB_HOLD		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

#define ADKEY_USB_LONG_UP	\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

// REC KEY  
#if REC_EN
#define ADKEY_ENC_SHORT		\
/*00*/	  NO_MSG,\
/*01*/	  NO_MSG,\
/*02*/	  NO_MSG,\
/*03*/	  NO_MSG,\
/*04*/	  NO_MSG,\
/*05*/	  NO_MSG,\
/*06*/	  NO_MSG,\
/*07*/	  MSG_COM_REC_REPLAY,\
/*08*/	  MSG_COM_REC_REPLAY,\
/*09*/	  MSG_COM_REC_REPLAY

#define ADKEY_ENC_LONG		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG


#define ADKEY_ENC_HOLD		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

#define ADKEY_ENC_LONG_UP	\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG
#endif

/*******************************************************************
main ������
*******************************************************************/
#define ADKEY_MAIN_SHORT		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

#define ADKEY_MAIN_LONG		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG


#define ADKEY_MAIN_HOLD		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

#define ADKEY_MAIN_LONG_UP	\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

/*******************************************************************
AD������
*******************************************************************/
#define ADKEY_IDLE_SHORT		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

#define ADKEY_IDLE_LONG		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG


#define ADKEY_IDLE_HOLD		\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG

#define ADKEY_IDLE_LONG_UP	\
/*00*/    NO_MSG,\
/*01*/    NO_MSG,\
/*02*/    NO_MSG,\
/*03*/    NO_MSG,\
/*04*/    NO_MSG,\
/*05*/	 NO_MSG,\
/*06*/	 NO_MSG,\
/*07*/	 NO_MSG,\
/*08*/	 NO_MSG,\
/*09*/	 NO_MSG
