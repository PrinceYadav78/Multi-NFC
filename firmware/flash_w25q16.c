<<<<<<< HEAD
#include "flash_w25q16.h"
#include "spi.h"
#include "nrf_gpio.h"

#define FLASH_CS 17

void flash_init()
{
    nrf_gpio_cfg_output(FLASH_CS);
    nrf_gpio_pin_set(FLASH_CS);
}

uint8_t flash_read_id()
{
    uint8_t id;

    nrf_gpio_pin_clear(FLASH_CS);
    spi_write(0x9F);
    id = spi_transfer(0x00);
    nrf_gpio_pin_set(FLASH_CS);

    return id;
=======
#include "flash_w25q16.h"
#include "spi.h"
#include "nrf_gpio.h"

#define FLASH_CS 17

void flash_init()
{
    nrf_gpio_cfg_output(FLASH_CS);
    nrf_gpio_pin_set(FLASH_CS);
}

uint8_t flash_read_id()
{
    uint8_t id;

    nrf_gpio_pin_clear(FLASH_CS);
    spi_write(0x9F);
    id = spi_transfer(0x00);
    nrf_gpio_pin_set(FLASH_CS);

    return id;
>>>>>>> 4e9d41379c514e75d4961de59179c99531e579d0
}