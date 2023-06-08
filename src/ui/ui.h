// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.2.0
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"
void openScrnSel_Animation(lv_obj_t * TargetObject, int delay);
void closeScrnSel_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_scrnMain
void ui_scrnMain_screen_init(void);
extern lv_obj_t * ui_scrnMain;
extern lv_obj_t * ui_pnlCtrl;
extern lv_obj_t * ui_lblOutput;
void ui_event_btnOutput(lv_event_t * e);
extern lv_obj_t * ui_btnOutput;
extern lv_obj_t * ui_lblBtnOut;
extern lv_obj_t * ui_pnlOutputData;
extern lv_obj_t * ui_lblOpData;
extern lv_obj_t * ui_pnlScrnSelMain;
void ui_event_btnToManual(lv_event_t * e);
extern lv_obj_t * ui_btnToManual;
extern lv_obj_t * ui_lblToManual;
void ui_event_btnToFaults(lv_event_t * e);
extern lv_obj_t * ui_btnToFaults;
extern lv_obj_t * ui_lblToFaults;
extern lv_obj_t * ui_pnlHdr;
extern lv_obj_t * ui_lblHdr;
void ui_event_ddNode(lv_event_t * e);
extern lv_obj_t * ui_ddNode;
void ui_event_btnWifi(lv_event_t * e);
extern lv_obj_t * ui_btnWifi;
void ui_event_btnCanbus(lv_event_t * e);
extern lv_obj_t * ui_btnCanbus;
void ui_event_swchScrnSel(lv_event_t * e);
extern lv_obj_t * ui_swchScrnSel;
extern lv_obj_t * ui_pnlRc;
extern lv_obj_t * ui_pnlRcHdr;
extern lv_obj_t * ui_lblSre;
extern lv_obj_t * ui_lblRc1;
extern lv_obj_t * ui_lblRc2;
extern lv_obj_t * ui_lblRc3;
extern lv_obj_t * ui_lblRc4;
extern lv_obj_t * ui_lblRc1D;
extern lv_obj_t * ui_lblRc2D;
extern lv_obj_t * ui_lblRc3D;
extern lv_obj_t * ui_lblRc4D;
extern lv_obj_t * ui_pnlRcBrdr1;
extern lv_obj_t * ui_pnlRcBrdr2;
extern lv_obj_t * ui_pnlCm;
extern lv_obj_t * ui_pnlCmHdr;
extern lv_obj_t * ui_lblCm;
extern lv_obj_t * ui_lblCm1;
extern lv_obj_t * ui_lblCm2;
extern lv_obj_t * ui_lblCm3;
extern lv_obj_t * ui_lblCm4;
extern lv_obj_t * ui_lblCm5;
extern lv_obj_t * ui_lblCm6;
extern lv_obj_t * ui_lblCmD1;
extern lv_obj_t * ui_lblCmD2;
extern lv_obj_t * ui_lblCmD3;
extern lv_obj_t * ui_lblCmD4;
extern lv_obj_t * ui_lblCmD5;
extern lv_obj_t * ui_lblCmD6;
extern lv_obj_t * ui_pnlCmBrdr2;
extern lv_obj_t * ui_pnlFlt;
extern lv_obj_t * ui_lblFlt;
extern lv_obj_t * ui_pnlFltD;
extern lv_obj_t * ui_lblFltD;
extern lv_obj_t * ui_pnlFtr;
extern lv_obj_t * ui_lblFtr;
extern lv_obj_t * ui_pnlWifi;
extern lv_obj_t * ui_ddWifi;
void ui_event_txtaPass(lv_event_t * e);
extern lv_obj_t * ui_txtaPass;
void ui_event_btnWifiConnect(lv_event_t * e);
extern lv_obj_t * ui_btnWifiConnect;
extern lv_obj_t * ui_lblConnect;
void ui_event_btnWifiCancel(lv_event_t * e);
extern lv_obj_t * ui_btnWifiCancel;
extern lv_obj_t * ui_lblWifiCancel;
void ui_event_kbWifi(lv_event_t * e);
extern lv_obj_t * ui_kbWifi;
void ui_event_btnKbSubmit(lv_event_t * e);
extern lv_obj_t * ui_btnKbSubmit;
void ui_event_btnKbClose(lv_event_t * e);
extern lv_obj_t * ui_btnKbClose;
// SCREEN: ui_scrnManu
void ui_scrnManu_screen_init(void);
extern lv_obj_t * ui_scrnManu;
extern lv_obj_t * ui_pnlMsp;
extern lv_obj_t * ui_pnlMspHdr;
extern lv_obj_t * ui_lblMspHdr;
extern lv_obj_t * ui_pnlMspVolts;
extern lv_obj_t * ui_lblMspTxtUp;
void ui_event_txtMspUpper(lv_event_t * e);
extern lv_obj_t * ui_txtMspUpper;
extern lv_obj_t * ui_pnlMspAmps;
extern lv_obj_t * ui_lblMspTxtLower;
void ui_event_txtMspLower(lv_event_t * e);
extern lv_obj_t * ui_txtMspLower;
extern lv_obj_t * ui_lblMspAuto;
void ui_event_btnMspWrite(lv_event_t * e);
extern lv_obj_t * ui_btnMspWrite;
extern lv_obj_t * ui_lblMspWriteBtn;
void ui_event_btnMspManual(lv_event_t * e);
extern lv_obj_t * ui_btnMspManual;
void ui_event_btnMspAuto(lv_event_t * e);
extern lv_obj_t * ui_btnMspAuto;
extern lv_obj_t * ui_lblMspManualbtn;
extern lv_obj_t * ui_lblMspAutobtn;
extern lv_obj_t * ui_pnlScrnSelManu;
void ui_event_btnToMainManu(lv_event_t * e);
extern lv_obj_t * ui_btnToMainManu;
extern lv_obj_t * ui_lblToMainManu;
void ui_event_btnToFault(lv_event_t * e);
extern lv_obj_t * ui_btnToFault;
extern lv_obj_t * ui_lblToFault;
extern lv_obj_t * ui_pnlHdrManual;
extern lv_obj_t * ui_lblHdr1;
void ui_event_ddNode1(lv_event_t * e);
extern lv_obj_t * ui_ddNode1;
void ui_event_swchScrnSel2(lv_event_t * e);
extern lv_obj_t * ui_swchScrnSel2;
extern lv_obj_t * ui_pnlRcManual;
extern lv_obj_t * ui_pnlRcManualHdr;
extern lv_obj_t * ui_lblRcManualHdr;
extern lv_obj_t * ui_lblRcm1;
extern lv_obj_t * ui_lblRcm2;
extern lv_obj_t * ui_lblRcm3;
extern lv_obj_t * ui_lblRcm4;
extern lv_obj_t * ui_lblRcm5;
extern lv_obj_t * ui_lblRcm6;
extern lv_obj_t * ui_lblRcmD1;
extern lv_obj_t * ui_lblRcmD2;
extern lv_obj_t * ui_lblRcmD3;
extern lv_obj_t * ui_lblRcmD4;
extern lv_obj_t * ui_lblRcmD5;
extern lv_obj_t * ui_lblRcmD6;
extern lv_obj_t * ui_pnlRcMBrdr1;
extern lv_obj_t * ui_pnlRcMBrdr2;
extern lv_obj_t * ui_pnlRcMBrdr3;
extern lv_obj_t * ui_pnlRec;
extern lv_obj_t * ui_lblRecHdr;
extern lv_obj_t * ui_lblMspHdr1;
void ui_event_chkRC1(lv_event_t * e);
extern lv_obj_t * ui_chkRC1;
void ui_event_chkRC2(lv_event_t * e);
extern lv_obj_t * ui_chkRC2;
void ui_event_chkRC3(lv_event_t * e);
extern lv_obj_t * ui_chkRC3;
void ui_event_chkRC3Shaft(lv_event_t * e);
extern lv_obj_t * ui_chkRC3Shaft;
void ui_event_chkRC4Shaft(lv_event_t * e);
extern lv_obj_t * ui_chkRC4Shaft;
void ui_event_chkRC4(lv_event_t * e);
extern lv_obj_t * ui_chkRC4;
void ui_event_kbManu(lv_event_t * e);
extern lv_obj_t * ui_kbManu;
void ui_event_btnKbSubmit1(lv_event_t * e);
extern lv_obj_t * ui_btnKbSubmit1;
void ui_event_btnKbClose1(lv_event_t * e);
extern lv_obj_t * ui_btnKbClose1;
// SCREEN: ui_scrnFaults
void ui_scrnFaults_screen_init(void);
extern lv_obj_t * ui_scrnFaults;
extern lv_obj_t * ui_pnlScrnSelFlt;
void ui_event_btnToMainFlt(lv_event_t * e);
extern lv_obj_t * ui_btnToMainFlt;
extern lv_obj_t * ui_lblToMainFlt;
void ui_event_btnToManuFlt(lv_event_t * e);
extern lv_obj_t * ui_btnToManuFlt;
extern lv_obj_t * ui_lblToManuFlt;
extern lv_obj_t * ui_pnlHdrFlt;
extern lv_obj_t * ui_lblHdrFlt;
void ui_event_swchScrnFlt(lv_event_t * e);
extern lv_obj_t * ui_swchScrnFlt;
void ui_event_btnClearFlt(lv_event_t * e);
extern lv_obj_t * ui_btnClearFlt;
extern lv_obj_t * ui_lblClrFlts;
extern lv_obj_t * ui_pnlSysFaults;
extern lv_obj_t * ui_pnlSysFaultsHdr;
extern lv_obj_t * ui_lblSysFltHdr;
extern lv_obj_t * ui_pnlSysFaultsBody;
extern lv_obj_t * ui____initial_actions0;
extern lv_obj_t * ui_tblFlt;

LV_IMG_DECLARE(ui_img_wificon_png);    // assets\Wificon.png
LV_IMG_DECLARE(ui_img_canbus_png);    // assets\canbus.png
LV_IMG_DECLARE(ui_img_hamburger_png);    // assets\Hamburger.png

LV_FONT_DECLARE(ui_font_seg7Big);
LV_FONT_DECLARE(ui_font_seg7_18);
LV_FONT_DECLARE(ui_font_seg7_22pt);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
