#ifndef _RECORDCONFPAGE_H_
#define _RECORDCONFPAGE_H_

#include "ui.h"

#define IDC_STATIC_RECORDCONF_DATE					IDD_DIALOG_RECORDCONF+1
#define IDC_COMBO_RECORDCONF_DATE					IDD_DIALOG_RECORDCONF+2

#define IDC_STATIC_RECORDCONF_WHOLEDAY				IDD_DIALOG_RECORDCONF+3
#define IDC_CHECK_RECORDCONF_WHOLEDAY				IDD_DIALOG_RECORDCONF+4

#define IDC_STATIC_RECORDCONF_RECORDTYPE			IDD_DIALOG_RECORDCONF+5
#define IDC_COMBO_RECORDCONF_RECORDTYPE				IDD_DIALOG_RECORDCONF+6

#define IDC_STATIC_RECORDCONF_STARTTIME				IDD_DIALOG_RECORDCONF+7
#define IDC_STATIC_RECORDCONF_ENDTIME				IDD_DIALOG_RECORDCONF+8
#define IDC_STATIC_RECORDCONF_RECORDTYPE2			IDD_DIALOG_RECORDCONF+9

#define IDC_STATIC_RECORDCONF_TIMESECTION1			IDD_DIALOG_RECORDCONF+10
#define IDC_EDIT_RECORDCONF_STARTTIME1				IDD_DIALOG_RECORDCONF+11
#define IDC_EDIT_RECORDCONF_ENDTIME1				IDD_DIALOG_RECORDCONF+12
#define IDC_COMBO_RECORDCONF_TYPE1					IDD_DIALOG_RECORDCONF+13

#define IDC_STATIC_RECORDCONF_TIMESECTION2			IDD_DIALOG_RECORDCONF+14
#define IDC_EDIT_RECORDCONF_STARTTIME2				IDD_DIALOG_RECORDCONF+15
#define IDC_EDIT_RECORDCONF_ENDTIME2				IDD_DIALOG_RECORDCONF+16
#define IDC_COMBO_RECORDCONF_TYPE2					IDD_DIALOG_RECORDCONF+17

#define IDC_STATIC_RECORDCONF_TIMESECTION3			IDD_DIALOG_RECORDCONF+18
#define IDC_EDIT_RECORDCONF_STARTTIME3				IDD_DIALOG_RECORDCONF+19
#define IDC_EDIT_RECORDCONF_ENDTIME3				IDD_DIALOG_RECORDCONF+20
#define IDC_COMBO_RECORDCONF_TYPE3					IDD_DIALOG_RECORDCONF+21

#define IDC_STATIC_RECORDCONF_TIMESECTION4			IDD_DIALOG_RECORDCONF+22
#define IDC_EDIT_RECORDCONF_STARTTIME4				IDD_DIALOG_RECORDCONF+23
#define IDC_EDIT_RECORDCONF_ENDTIME4				IDD_DIALOG_RECORDCONF+24
#define IDC_COMBO_RECORDCONF_TYPE4					IDD_DIALOG_RECORDCONF+25

#define IDC_STATIC_RECORDCONF_COPY					IDD_DIALOG_RECORDCONF+26
#define IDC_COMBO_RECORDCONF_COPY					IDD_DIALOG_RECORDCONF+27
#define IDC_BUTTON_RECORDCONF_COPY					IDD_DIALOG_RECORDCONF+28

#define IDC_BUTTON_RECORDCONF_OK					IDD_DIALOG_RECORDCONF+29
#define IDC_BUTTON_RECORDCONF_CANCEL				IDD_DIALOG_RECORDCONF+30

#define IDC_COMBO_RECORDCONF_TIMETYPE				IDD_DIALOG_RECORDCONF+31
#define IDC_CHECK_RECORDCONF_TIMESECTION1			IDD_DIALOG_RECORDCONF+32
#define IDC_DATETIME_RECORDCONF_STARTTIME1			IDD_DIALOG_RECORDCONF+33
#define IDC_DATETIME_RECORDCONF_ENDTIME1			IDD_DIALOG_RECORDCONF+34
#define IDC_CHECK_RECORDCONF_TIMESECTION2			IDD_DIALOG_RECORDCONF+35
#define IDC_DATETIME_RECORDCONF_STARTTIME2			IDD_DIALOG_RECORDCONF+36
#define IDC_DATETIME_RECORDCONF_ENDTIME2			IDD_DIALOG_RECORDCONF+37
#define IDC_CHECK_RECORDCONF_TIMESECTION3			IDD_DIALOG_RECORDCONF+38
#define IDC_DATETIME_RECORDCONF_STARTTIME3			IDD_DIALOG_RECORDCONF+39
#define IDC_DATETIME_RECORDCONF_ENDTIME3			IDD_DIALOG_RECORDCONF+40
#define IDC_CHECK_RECORDCONF_TIMESECTION4			IDD_DIALOG_RECORDCONF+41
#define IDC_DATETIME_RECORDCONF_STARTTIME4			IDD_DIALOG_RECORDCONF+42
#define IDC_DATETIME_RECORDCONF_ENDTIME4			IDD_DIALOG_RECORDCONF+43

#define IDC_CHECK_RECORDCONF_COPY0					IDD_DIALOG_RECORDCONF+44
#define IDC_CHECK_RECORDCONF_COPY1					IDD_DIALOG_RECORDCONF+45
#define IDC_CHECK_RECORDCONF_COPY2					IDD_DIALOG_RECORDCONF+46
#define IDC_CHECK_RECORDCONF_COPY3					IDD_DIALOG_RECORDCONF+47
#define IDC_CHECK_RECORDCONF_COPY4					IDD_DIALOG_RECORDCONF+48
#define IDC_CHECK_RECORDCONF_COPY5					IDD_DIALOG_RECORDCONF+49
#define IDC_CHECK_RECORDCONF_COPY6					IDD_DIALOG_RECORDCONF+50

#define IDC_CHECK_RECORDCONF_COPYOTHER				IDD_DIALOG_RECORDCONF+51
#define IDC_INPUTBOX_RECORDCONF_DENO				IDD_DIALOG_RECORDCONF+52
BOOL CreateRecordConfPage();
BOOL ShowRecordConfPage();

void SetConfChn(u8 chn);
u8 GetConfChn();

#endif
