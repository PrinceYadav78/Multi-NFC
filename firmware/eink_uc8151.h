#ifndef EINK_H
#define EINK_H

void eink_init(void);
void eink_clear(void);
void eink_draw_text(char *text);
void eink_refresh(void);

#endif