#include "../include/analog.h"
#include "hal/adc_types.h"

// create adc unit handle under normal oneshot mode form channel 1
adc_oneshot_unit_handle_t adc1_handle;
adc_oneshot_unit_init_cfg_t init_config1 = {
  .unit_id = ADC_UNIT_1,
  .ulp_mode = ADC_ULP_MODE_DISABLE
};
ESP_ERROR_CHECK(adc_oneshot_new_unit(&init_config1, &adc1_handle));

// configure ADC IOs to measure analog signal
adc_oneshot_chan_cfg_t config = {
  .bitwidth = ADC_BITWIDTH_DEFAULT,
  .atten = ADC_ATTEN_DB_12
};
ESP_ERROR_CHECK(adc_oneshot_config_channel(adc1_handle, EXAMPLE_ADC_CHAN0, &config));

// read raw result

// recycle the adc unit when no longer required
ESP_ERROR_CHECK(adc_oneshot_del_unit(adc1_handle));
