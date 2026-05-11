/*
 * icm42688p_reg.h
 *
 *  Created on: May 11, 2026
 *      Author: hyunsoo-Oh
 */

#ifndef SRC_IMU_ICM_42688_P_ICM42688P_REG_H_
#define SRC_IMU_ICM_42688_P_ICM42688P_REG_H_

// =======================================================
// User Bank 0 Register Map
// =======================================================

typedef union
{
    struct
    {
        uint8_t soft_reset_config : 1;  // bit 0    : Soft Reset 설정 - 1로 설정하면 디바이스 소프트 리셋 수행
        uint8_t reserved0         : 3;  // bit 1~3  : Reserved
        uint8_t spi_mode          : 1;  // bit 4    : SPI Mode 설정
        uint8_t reserved1         : 3;  // bit 5~7  : Reserved
    } bits;
    uint8_t reg;
} Device_Config;

typedef union
{
    struct
    {
        uint8_t spi_slew_rate	  : 3;  // bit 0~2  :
        uint8_t i2c_slew_rate     : 3;  // bit 4~6  :
        uint8_t reserved          : 1;  // bit 7    : Reserved
    } bits;
    uint8_t reg;
} Drive_Config;

typedef union
{
    struct
    {
        uint8_t int1_polarity	  : 1;  // bit 0    :
        uint8_t int1_drive_circuit: 1;  // bit 1	:
        uint8_t int1_mode		  : 1;  // bit 2    :
        uint8_t int2_polority	  : 1;  // bit 3    :
        uint8_t int2_drive_circuit: 1;  // bit 4    :
        uint8_t int2_mode         : 1;  // bit 5    :
        uint8_t reserved          : 2;  // bit 6~7  : Reserved
    } bits;
    uint8_t reg;
} Int_Config;

typedef union
{
    struct
    {
        uint8_t reserved          : 6;  // bit 0~5  : Reserved
        uint8_t fifo_mode         : 2;  // bit 6~7  :
    } bits;
    uint8_t reg;
} Fifo_Config;


typedef struct
{
    int16_t temp_raw;       // 온도 데이터,  TEMP_DATA1, TEMP_DATA0
    int16_t accel_x_raw;    // X축 가속도 데이터, ACCEL_DATA_X1, ACCEL_DATA_X0
    int16_t accel_y_raw;    // Y축 가속도 데이터, ACCEL_DATA_Y1, ACCEL_DATA_Y0
    int16_t accel_z_raw;    // Z축 가속도 데이터, ACCEL_DATA_Z1, ACCEL_DATA_Z0
    int16_t gyro_x_raw;     // X축 자이로 데이터, GYRO_DATA_X1,  GYRO_DATA_X0
    int16_t gyro_y_raw;     // Y축 자이로 데이터, GYRO_DATA_Y1, GYRO_DATA_Y0
    int16_t gyro_z_raw;     // Z축 자이로 데이터, GYRO_DATA_Z1, GYRO_DATA_Z0
} Icm42688_RawData;

typedef union
{
    struct
    {
        uint8_t agc_rdy_int		  : 1;  // bit 0    :
        uint8_t fifo_full_int	  : 1;  // bit 1	:
        uint8_t fifo_ths_int	  : 1;  // bit 2    :
        uint8_t data_rdy_int	  : 1;  // bit 3    :
        uint8_t reset_done_int	  : 1;  // bit 4    :
        uint8_t pll_rdy_int		  : 1;  // bit 5    :
        uint8_t ui_fsync_int	  : 1;  // bit 6    :
        uint8_t reserved          : 1;  // bit 7    : Reserved
    } bits;
    uint8_t reg;
} Int_Status;

#endif /* SRC_IMU_ICM_42688_P_ICM42688P_REG_H_ */
