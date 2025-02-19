// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.5.0
// LVGL version: 8.3.11
// Project name: demo

#ifndef _DEMO_UI_H
#define _DEMO_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "ui_helpers.h"
#include "ui_events.h"


// SCREEN: ui_mainScreen
void ui_mainScreen_screen_init(void);
extern lv_obj_t * ui_mainScreen;
void ui_event_qrutton(lv_event_t * e);
extern lv_obj_t * ui_qrutton;
extern lv_obj_t * ui_qrButtonLabel;
extern lv_obj_t * ui_Label1;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Image5;
// CUSTOM VARIABLES

// SCREEN: ui_qrScreen
void ui_qrScreen_screen_init(void);
extern lv_obj_t * ui_qrScreen;
void ui_event_backButton(lv_event_t * e);
extern lv_obj_t * ui_backButton;
extern lv_obj_t * ui_backButtonLabel1;
extern lv_obj_t * ui_Label5;
void ui_event_creaQRBTN(lv_event_t * e);
extern lv_obj_t * ui_creaQRBTN;
extern lv_obj_t * ui_backButtonLabel3;
// CUSTOM VARIABLES

// SCREEN: ui_homeScreen
void ui_homeScreen_screen_init(void);
extern lv_obj_t * ui_homeScreen;
extern lv_obj_t * ui_homTabV;
extern lv_obj_t * ui_profileTabV;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_tenImage;
extern lv_obj_t * ui_dataName;
extern lv_obj_t * ui_mailImage;
extern lv_obj_t * ui_dataEmail;
extern lv_obj_t * ui_idImage;
extern lv_obj_t * ui_dataID;
void ui_event_outBtn(lv_event_t * e);
extern lv_obj_t * ui_outBtn;
extern lv_obj_t * ui_outName;
extern lv_obj_t * ui_Image10;
extern lv_obj_t * ui_shopTabV;
extern lv_obj_t * ui_Viewall;
extern lv_obj_t * ui_wetHome;
extern lv_obj_t * ui_wetImage;
extern lv_obj_t * ui_wetName;
extern lv_obj_t * ui_wetGia;
extern lv_obj_t * ui_chocoHome;
extern lv_obj_t * ui_chocoImage;
extern lv_obj_t * ui_chocoName;
extern lv_obj_t * ui_chocoGia;
extern lv_obj_t * ui_cocaHome;
extern lv_obj_t * ui_cocaImage;
extern lv_obj_t * ui_cocaName;
extern lv_obj_t * ui_cocaGia;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Cart;
extern lv_obj_t * ui_cartName;
extern lv_obj_t * ui_totalName;
void ui_event_paymentBtn(lv_event_t * e);
extern lv_obj_t * ui_paymentBtn;
extern lv_obj_t * ui_payName;
extern lv_obj_t * ui_paygach;
extern lv_obj_t * ui_gia;
extern lv_obj_t * ui_paygach1;
extern lv_obj_t * ui_totalName1;
extern lv_obj_t * ui_totalName2;
extern lv_obj_t * ui_sluong;
extern lv_obj_t * ui_price;
extern lv_obj_t * ui_totalName5;
extern lv_obj_t * ui_nhan;
extern lv_obj_t * ui_nhan1;
extern lv_obj_t * ui_nhan2;
extern lv_obj_t * ui_totalName3;
extern lv_obj_t * ui_totalName4;
extern lv_obj_t * ui_totalName6;
extern lv_obj_t * ui_sldata;
extern lv_obj_t * ui_sldata1;
extern lv_obj_t * ui_sldata2;
extern lv_obj_t *ui_errorMessage;
// CUSTOM VARIABLES

// EVENTS

extern lv_obj_t * ui____initial_actions0;

// IMAGES AND IMAGE SETS
LV_IMG_DECLARE(
    ui_img_1799328165);    // assets/image-removebg-preview-(4)_optimized_optimized_optimized-(2)_optimized.png
LV_IMG_DECLARE(ui_img_personal_png);    // assets/personal.png
LV_IMG_DECLARE(ui_img_mail_png);    // assets/mail.png
LV_IMG_DECLARE(ui_img_id_png);    // assets/id.png
LV_IMG_DECLARE(ui_img_khangiay_png);    // assets/khangiay.png
LV_IMG_DECLARE(ui_img_socula_png);    // assets/socula.png
LV_IMG_DECLARE(ui_img_cocacola_png);    // assets/cocacola.png

// UI INIT
void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
