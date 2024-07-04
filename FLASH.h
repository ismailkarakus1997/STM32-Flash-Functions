/*
 * flash.h
 *
 *  Created on: Apr 26, 2024
 *      Author: ismail.karakus
 */

#ifndef INC_FLASH_H_
#define INC_FLASH_H_


#include "main.h"
#include "string.h"
#include "stdio.h"

	/*
	* Sector 0: 16kByte		0x0800 0000 - 0x08003FFF
	* Sector 1: 16kByte		0x0800 4000 - 0x08007FFF
	* Sector 2: 16kByte		0x0800 8000 - 0x0800BFFF
	* Sector 3: 16kByte		0x0800 C000 - 0x0800FFFF
	* Sector 4: 64kByte		0x0801 0000 - 0x0801FFFF
	* Sector 5: 128kByte	0x0802 0000 - 0x0803FFFF
	* Sector 6: 128kByte	0x0804 0000 - 0x0805FFFF
	* Sector 7: 128kByte	0x0806 0000 - 0x0807FFFF
	*/

typedef enum{
	Flash_SeriNo_Task=1,
	Flash_UretimSet_Task=2,
}Flash_Write_Enum_Typedef;

typedef struct{
	uint8_t Ready;
	uint8_t Write_Command;
	uint8_t flash_write_status;
}Flash_Write_Handle_Typedef;


void Flash_Read_Data (uint32_t StartSectorAddress, uint32_t *RxBuf, uint16_t numberofwords);
uint32_t Flash_Write_Data (uint32_t StartSectorAddress, uint32_t *Data, uint16_t numberofwords);
void convert_8to32(uint8_t *temp_array,uint32_t *write_array,uint8_t length);

#endif /* INC_FLASH_H_ */
