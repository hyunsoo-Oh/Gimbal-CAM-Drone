/*
 * icm42688p_types.h
 *
 *  Created on: May 11, 2026
 *      Author: hyunsoo-Oh
 */

#ifndef SRC_IMU_ICM_42688_P_ICM_42688_P_REG_H_
#define SRC_IMU_ICM_42688_P_ICM_42688_P_REG_H_

typedef enum
{
    ICM42688P_OK = 0,
    ICM42688P_ERROR,
    ICM42688P_ERROR_COMM,
    ICM42688P_ERROR_ID,
} icm42688p_status_t;

typedef enum
{
    ICM42688P_ACCEL_FS_16G = 0,
    ICM42688P_ACCEL_FS_8G,
    ICM42688P_ACCEL_FS_4G,
    ICM42688P_ACCEL_FS_2G,
} icm42688p_accel_fs_t;

typedef enum
{
    ICM42688P_GYRO_FS_2000DPS = 0,
    ICM42688P_GYRO_FS_1000DPS,
    ICM42688P_GYRO_FS_500DPS,
    ICM42688P_GYRO_FS_250DPS,
    ICM42688P_GYRO_FS_125DPS,
    ICM42688P_GYRO_FS_62_5DPS,
    ICM42688P_GYRO_FS_31_25DPS,
    ICM42688P_GYRO_FS_15_625DPS,
} icm42688p_gyro_fs_t;

typedef struct
{
    int16_t temp_raw;		// 온도 데이터,  TEMP_DATA1, TEMP_DATA0

    int16_t accel_x_raw;	// X축 가속도 데이터, ACCEL_DATA_X1, ACCEL_DATA_X0
    int16_t accel_y_raw;	// Y축 가속도 데이터, ACCEL_DATA_Z1, ACCEL_DATA_Z0
    int16_t accel_z_raw;	// Z축 가속도 데이터, ACCEL_DATA_Y1, ACCEL_DATA_Y0

    int16_t gyro_x_raw;		// X축 자이로 데이터, GYRO_DATA_X1,  GYRO_DATA_X0
    int16_t gyro_y_raw;		// Y축 자이로 데이터, GYRO_DATA_Y1,  GYRO_DATA_Y0
    int16_t gyro_z_raw;		// Z축 자이로 데이터, GYRO_DATA_Z1, GYRO_DATA_Z0

} icm42688p_raw_data_t;

#endif /* SRC_IMU_ICM_42688_P_ICM_42688_P_REG_H_ */
