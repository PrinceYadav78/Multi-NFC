<<<<<<< HEAD
#include "eink_uc8151.h"
#include "spi.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"

#define EINK_CS   13
#define EINK_DC   14
#define EINK_RST  22
#define EINK_BUSY 23

static void cmd(uint8_t c)
{
    nrf_gpio_pin_clear(EINK_DC);
    spi_write(c);
}

static void data(uint8_t d)
{
    nrf_gpio_pin_set(EINK_DC);
    spi_write(d);
}

void eink_init(void)
{
    nrf_gpio_cfg_output(EINK_CS);
    nrf_gpio_cfg_output(EINK_DC);
    nrf_gpio_cfg_output(EINK_RST);
    nrf_gpio_cfg_input(EINK_BUSY, NRF_GPIO_PIN_NOPULL);

    nrf_gpio_pin_clear(EINK_RST);
    nrf_delay_ms(10);
    nrf_gpio_pin_set(EINK_RST);

    cmd(0x01);
    data(0x03);
}

void eink_clear()
{
    cmd(0x24);

    for(int i=0;i<5000;i++)
        data(0xFF);
}

void eink_draw_text(char *text)
{
    cmd(0x24);

    while(*text)
    {
        data(*text++);
    }
}

void eink_refresh()
{
    cmd(0x22);
    data(0xC7);
    cmd(0x20);

    while(nrf_gpio_pin_read(EINK_BUSY)==1);
=======
#include "eink_uc8151.h"
#include "spi.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"

#define EINK_CS   13
#define EINK_DC   14
#define EINK_RST  22
#define EINK_BUSY 23

static void cmd(uint8_t c)
{
    nrf_gpio_pin_clear(EINK_DC);
    spi_write(c);
}

static void data(uint8_t d)
{
    nrf_gpio_pin_set(EINK_DC);
    spi_write(d);
}

void eink_init(void)
{
    nrf_gpio_cfg_output(EINK_CS);
    nrf_gpio_cfg_output(EINK_DC);
    nrf_gpio_cfg_output(EINK_RST);
    nrf_gpio_cfg_input(EINK_BUSY, NRF_GPIO_PIN_NOPULL);

    nrf_gpio_pin_clear(EINK_RST);
    nrf_delay_ms(10);
    nrf_gpio_pin_set(EINK_RST);

    cmd(0x01);
    data(0x03);
}

void eink_clear()
{
    cmd(0x24);

    for(int i=0;i<5000;i++)
        data(0xFF);
}

void eink_draw_text(char *text)
{
    cmd(0x24);

    while(*text)
    {
        data(*text++);
    }
}

void eink_refresh()
{
    cmd(0x22);
    data(0xC7);
    cmd(0x20);

    while(nrf_gpio_pin_read(EINK_BUSY)==1);
>>>>>>> 4e9d41379c514e75d4961de59179c99531e579d0
}