#include "spi.h"
#include "nrf_gpio.h"
#include "nrf_delay.h"

#define SPI_SCK   19
#define SPI_MOSI  20
#define SPI_MISO  21

void spi_init(void)
{
    NRF_SPI0->PSEL.SCK  = SPI_SCK;
    NRF_SPI0->PSEL.MOSI = SPI_MOSI;
    NRF_SPI0->PSEL.MISO = SPI_MISO;

    NRF_SPI0->FREQUENCY = SPI_FREQUENCY_FREQUENCY_M4;
    NRF_SPI0->CONFIG = 0;
    NRF_SPI0->ENABLE = SPI_ENABLE_ENABLE_Enabled << SPI_ENABLE_ENABLE_Pos;
}

void spi_write(uint8_t data)
{
    NRF_SPI0->TXD = data;
    while (!NRF_SPI0->EVENTS_READY);
    NRF_SPI0->EVENTS_READY = 0;
}

uint8_t spi_transfer(uint8_t data)
{
    NRF_SPI0->TXD = data;
    while (!NRF_SPI0->EVENTS_READY);
    NRF_SPI0->EVENTS_READY = 0;
    return NRF_SPI0->RXD;
}