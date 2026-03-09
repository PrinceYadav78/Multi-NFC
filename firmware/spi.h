#ifndef SPI_H
#define SPI_H

void spi_init(void);
void spi_write(uint8_t data);
uint8_t spi_transfer(uint8_t data);

#endif