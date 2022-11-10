/*
 *   Pin definitions for some common ESP-CAM modules
 *
 */
#if defined(CAMERA_MODEL_AI_THINKER)
  //
  // AI Thinker
  // https://github.com/SeeedDocument/forum_doc/raw/master/reg/ESP32_CAM_V1.6.pdf
  //
  #define PWDN_GPIO_NUM     32
  #define RESET_GPIO_NUM    -1
  #define XCLK_GPIO_NUM      0
  #define SIOD_GPIO_NUM     26
  #define SIOC_GPIO_NUM     27
  #define Y9_GPIO_NUM       35
  #define Y8_GPIO_NUM       34
  #define Y7_GPIO_NUM       39
  #define Y6_GPIO_NUM       36
  #define Y5_GPIO_NUM       21
  #define Y4_GPIO_NUM       19
  #define Y3_GPIO_NUM       18
  #define Y2_GPIO_NUM        5
  #define VSYNC_GPIO_NUM    25
  #define HREF_GPIO_NUM     23
  #define PCLK_GPIO_NUM     22
  #define LED_PIN           33 // Status led
  #define LED_ON           LOW // - Pin is inverted.
  #define LED_OFF         HIGH //
  #define LAMP_PIN           4 // LED FloodLamp.
  
#elif defined(CAMERA_MODEL_WROVER_KIT)
  //
  // ESP WROVER
  // https://dl.espressif.com/dl/schematics/ESP-WROVER-KIT_SCH-2.pdf
  //
  #define PWDN_GPIO_NUM    -1
  #define RESET_GPIO_NUM   -1
  #define XCLK_GPIO_NUM    21
  #define SIOD_GPIO_NUM    26
  #define SIOC_GPIO_NUM    27
  #define Y9_GPIO_NUM      35
  #define Y8_GPIO_NUM      34
  #define Y7_GPIO_NUM      39
  #define Y6_GPIO_NUM      36
  #define Y5_GPIO_NUM      19
  #define Y4_GPIO_NUM      18
  #define Y3_GPIO_NUM       5
  #define Y2_GPIO_NUM       4
  #define VSYNC_GPIO_NUM   25
  #define HREF_GPIO_NUM    23
  #define PCLK_GPIO_NUM    22
  #define LED_PIN           2 // A status led on the RGB; could also use pin 0 or 4
  #define LED_ON         HIGH //
  #define LED_OFF         LOW //
  // #define LAMP_PIN          x // No LED FloodLamp.
#else
  // Well.
  // that went badly...
  Serial.println(defined)
  #error "Camera model not selected, did you forget to uncomment it in myconfig?"
#endif
