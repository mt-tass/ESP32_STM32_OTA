idf_component_register(SRCS "esp32.c" "wifi.c" "web_server.c" "spi_master.c" "esp_stm_ota.c"
                    INCLUDE_DIRS "."
                    EMBED_TXTFILES "../web/index.html" "../web/script.js" "../web/style.css")
