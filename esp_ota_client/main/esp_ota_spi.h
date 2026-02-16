#ifndef OTA_SPI_H
#define OTA_SPI_H

#include "driver/spi_master.h"
#include "driver/gpio.h"
#include "ota_protocol.h"


#define PIN_NUM_MISO 19
#define PIN_NUM_MOSI 23
#define PIN_NUM_CLK 18
#define PIN_NUM_CS 5
#define PIN_STM32_BOOT0 4
#define PIN_STM32_RESET 2


esp_err_t ota_spi_init(void);
esp_err_t ota_spi_send_packet(uint8_t cmd, uint16_t seq, const uint8_t *data, uint16_t len);
esp_err_t ota_spi_wait_response(uint8_t expected_response, uint32_t timeout_ms);
void ota_stm32_enter_bootloader(void);
void ota_stm32_exit_bootloader(void);

#endif