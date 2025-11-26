#include <string.h>

#include "screens.h"
#include "images.h"
#include "fonts.h"
#include "actions.h"
#include "vars.h"
#include "styles.h"
#include "ui.h"

#include <string.h>

objects_t objects;
lv_obj_t *tick_value_change_obj;
uint32_t active_theme_index = 0;

void create_screen_main() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.main = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.obj0 = obj;
            lv_obj_set_pos(obj, 307, 224);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_color(obj, lv_color_hex(0xff1034e4), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Hello, world!");
        }
        {
            // Main00BtnNext
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.main00_btn_next = obj;
            lv_obj_set_pos(obj, 602, 385);
            lv_obj_set_size(obj, 182, 83);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_RELEASED, (void *)0);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Siguiente");
                }
            }
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 26, 27);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Inicio");
        }
    }
    
    tick_screen_main();
}

void tick_screen_main() {
}

void create_screen_screen00() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen00 = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Screen00BtnNext
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.screen00_btn_next = obj;
            lv_obj_set_pos(obj, 617, 388);
            lv_obj_set_size(obj, 170, 82);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_RELEASED, (void *)0);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Siguiente");
                }
            }
        }
        {
            // Screen00BtnBack
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.screen00_btn_back = obj;
            lv_obj_set_pos(obj, 10, 389);
            lv_obj_set_size(obj, 170, 82);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_RELEASED, (void *)0);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Atras");
                }
            }
        }
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 10, 9);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Pantalla 00");
        }
        {
            // Screen00BtnLed
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.screen00_btn_led = obj;
            lv_obj_set_pos(obj, 323, 199);
            lv_obj_set_size(obj, 154, 82);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_RELEASED, (void *)0);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "ON/OFF");
                }
            }
        }
    }
    
    tick_screen_screen00();
}

void tick_screen_screen00() {
}

void create_screen_screen01() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen01 = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 12, 10);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Pantalla 01");
        }
        {
            // Screen01BtnBack
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.screen01_btn_back = obj;
            lv_obj_set_pos(obj, 12, 391);
            lv_obj_set_size(obj, 170, 82);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_RELEASED, (void *)0);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Atras");
                }
            }
        }
        {
            // Screen01BtnNext
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.screen01_btn_next = obj;
            lv_obj_set_pos(obj, 618, 391);
            lv_obj_set_size(obj, 170, 82);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_RELEASED, (void *)0);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Siguiente");
                }
            }
        }
        {
            // Screen01ArcPwm
            lv_obj_t *obj = lv_arc_create(parent_obj);
            objects.screen01_arc_pwm = obj;
            lv_obj_set_pos(obj, 235, 75);
            lv_obj_set_size(obj, 330, 330);
            lv_arc_set_value(obj, 50);
            lv_arc_set_bg_start_angle(obj, 140);
            lv_arc_set_bg_end_angle(obj, 40);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_RELEASED, (void *)0);
            lv_obj_set_style_arc_width(obj, 12, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_arc_rounded(obj, true, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // Screen01LabelPwm
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.screen01_label_pwm = obj;
            lv_obj_set_pos(obj, 358, 298);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "100 %");
        }
    }
    
    tick_screen_screen01();
}

void tick_screen_screen01() {
}

void create_screen_screen02() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen02 = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    {
        lv_obj_t *parent_obj = obj;
        {
            lv_obj_t *obj = lv_label_create(parent_obj);
            lv_obj_set_pos(obj, 10, 9);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "Pantalla 02");
        }
        {
            // Screen02BtnBack
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.screen02_btn_back = obj;
            lv_obj_set_pos(obj, 11, 390);
            lv_obj_set_size(obj, 170, 82);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_RELEASED, (void *)0);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Atras");
                }
            }
        }
        {
            // Screen02BtnNext
            lv_obj_t *obj = lv_button_create(parent_obj);
            objects.screen02_btn_next = obj;
            lv_obj_set_pos(obj, 622, 391);
            lv_obj_set_size(obj, 170, 82);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_RELEASED, (void *)0);
            {
                lv_obj_t *parent_obj = obj;
                {
                    lv_obj_t *obj = lv_label_create(parent_obj);
                    lv_obj_set_pos(obj, 0, 0);
                    lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
                    lv_obj_set_style_align(obj, LV_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
                    lv_label_set_text(obj, "Siguiente");
                }
            }
        }
        {
            // Screen02BarHorizontal
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.screen02_bar_horizontal = obj;
            lv_obj_set_pos(obj, 11, 328);
            lv_obj_set_size(obj, 696, 40);
            lv_bar_set_range(obj, 0, 4095);
        }
        {
            // Screen02LabelHorizontal
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.screen02_label_horizontal = obj;
            lv_obj_set_pos(obj, 321, 282);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "4095");
        }
        {
            // Screen02BarVertical
            lv_obj_t *obj = lv_bar_create(parent_obj);
            objects.screen02_bar_vertical = obj;
            lv_obj_set_pos(obj, 739, 9);
            lv_obj_set_size(obj, 40, 350);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfff3c621), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_opa(obj, 51, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_bg_color(obj, lv_color_hex(0xfff3c204), LV_PART_INDICATOR | LV_STATE_DEFAULT);
        }
        {
            // Screen02LabelVertical
            lv_obj_t *obj = lv_label_create(parent_obj);
            objects.screen02_label_vertical = obj;
            lv_obj_set_pos(obj, 665, 168);
            lv_obj_set_size(obj, LV_SIZE_CONTENT, LV_SIZE_CONTENT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_label_set_text(obj, "100");
        }
    }
    
    tick_screen_screen02();
}

void tick_screen_screen02() {
}

void create_screen_screen03() {
    lv_obj_t *obj = lv_obj_create(0);
    objects.screen03 = obj;
    lv_obj_set_pos(obj, 0, 0);
    lv_obj_set_size(obj, 800, 480);
    {
        lv_obj_t *parent_obj = obj;
        {
            // Screen03TextareaKb
            lv_obj_t *obj = lv_textarea_create(parent_obj);
            objects.screen03_textarea_kb = obj;
            lv_obj_set_pos(obj, 0, 0);
            lv_obj_set_size(obj, 800, 130);
            lv_textarea_set_max_length(obj, 128);
            lv_textarea_set_one_line(obj, false);
            lv_textarea_set_password_mode(obj, true);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_VALUE_CHANGED, (void *)0);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
        {
            // Screen03Keyboard
            lv_obj_t *obj = lv_keyboard_create(parent_obj);
            objects.screen03_keyboard = obj;
            lv_obj_set_pos(obj, 0, 130);
            lv_obj_set_size(obj, 800, 350);
            lv_keyboard_set_mode(obj, LV_KEYBOARD_MODE_NUMBER);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_CANCEL, (void *)0);
            lv_obj_add_event_cb(obj, action_set_global_eez_event, LV_EVENT_READY, (void *)0);
            lv_obj_set_style_align(obj, LV_ALIGN_DEFAULT, LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_text_font(obj, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);
        }
    }
    lv_keyboard_set_textarea(objects.screen03_keyboard, objects.screen03_textarea_kb);
    
    tick_screen_screen03();
}

void tick_screen_screen03() {
}



typedef void (*tick_screen_func_t)();
tick_screen_func_t tick_screen_funcs[] = {
    tick_screen_main,
    tick_screen_screen00,
    tick_screen_screen01,
    tick_screen_screen02,
    tick_screen_screen03,
};
void tick_screen(int screen_index) {
    tick_screen_funcs[screen_index]();
}
void tick_screen_by_id(enum ScreensEnum screenId) {
    tick_screen_funcs[screenId - 1]();
}

void create_screens() {
    lv_disp_t *dispp = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED), false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    
    create_screen_main();
    create_screen_screen00();
    create_screen_screen01();
    create_screen_screen02();
    create_screen_screen03();
}
