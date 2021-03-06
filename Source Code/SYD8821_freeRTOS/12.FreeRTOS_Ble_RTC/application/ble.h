#ifndef _BLE_H_
#define _BLE_H_

#include "ARMCM0.h"


enum CCCD_STATUS
{
	DISABLE = 0x00,
	ENABLE = 0x01
};


struct queue_att_write_data {
	uint16_t uuid;
	uint8_t	sz;
	uint8_t	data[20];
};

extern uint8_t per_device_system;
extern uint8_t  connect_flag;
extern void ble_init(void);
extern void ble_task(void);
extern uint8_t BLE_SendData(uint8_t *buf, uint8_t len);
extern void BLSetConnectionUpdate(uint8_t target);

#endif

