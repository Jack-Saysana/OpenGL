#ifndef __ENGINE_UI_COMPONENT_H__
#define __ENGINE_UI_COMPONENT_H__

#include "./ui_component_str.h"
#include "./font_str.h"

int init_ui();
int free_ui();

int import_font(char *, char *, F_GLYPH);

UI_COMP *add_ui_comp(UI_COMP *, vec3, float, float, int);
int render_ui();

void set_ui_pos(UI_COMP *, vec2);
void set_manual_layer(UI_COMP *, float);
void disable_manual_layer(UI_COMP *);
void set_ui_pivot(UI_COMP *, int);
void set_ui_display(UI_COMP *, int);
void set_ui_text(UI_COMP *, char *, float, F_GLYPH *, vec3);
void set_ui_text_col(UI_COMP *, vec3);
void set_ui_texture(UI_COMP *, char *);
void set_ui_enabled(UI_COMP *, int);
void set_ui_on_click(UI_COMP *, void (*)(UI_COMP *, void *), void *);
void set_ui_on_release(UI_COMP *, void (*)(UI_COMP *, void *), void *);
void set_ui_on_hover(UI_COMP *, void (*)(UI_COMP *, void *), void *);
void set_ui_no_hover(UI_COMP *, void (*)(UI_COMP *, void *), void *);

#endif
