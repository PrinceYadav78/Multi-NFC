<<<<<<< HEAD
#include <stdbool.h>
#include <stdint.h>
#include "nrf.h"
#include "nrf_delay.h"
#include "spi.h"
#include "eink_uc8151.h"
#include "flash_w25q16.h"
#include "nfc_handler.h"

#define BUTTON_PIN 11

void gpio_init()
{
    nrf_gpio_cfg_input(BUTTON_PIN, NRF_GPIO_PIN_PULLUP);
}

int main(void)
{
    spi_init();
    gpio_init();
    eink_init();
    flash_init();
    nfc_init();

    eink_clear();

    eink_draw_text("Hello NFC Card!");

    eink_refresh();

    while (1)
    {
        if (!nrf_gpio_pin_read(BUTTON_PIN))
        {
            eink_draw_text("Button Pressed");
            eink_refresh();
            nrf_delay_ms(500);
        }
    }
=======
#include <stdbool.h>
#include <stdint.h>
#include "nrf.h"
#include "nrf_delay.h"
#include "spi.h"
#include "eink_uc8151.h"
#include "flash_w25q16.h"
#include "nfc_handler.h"

#define BUTTON_PIN 11

void gpio_init()
{
    nrf_gpio_cfg_input(BUTTON_PIN, NRF_GPIO_PIN_PULLUP);
}

int main(void)
{
    spi_init();
    gpio_init();
    eink_init();
    flash_init();
    nfc_init();

    eink_clear();

    eink_draw_text("Hello NFC Card!");

    eink_refresh();

    while (1)
    {
        if (!nrf_gpio_pin_read(BUTTON_PIN))
        {
            eink_draw_text("Button Pressed");
            eink_refresh();
            nrf_delay_ms(500);
        }
    }
>>>>>>> 4e9d41379c514e75d4961de59179c99531e579d0
}