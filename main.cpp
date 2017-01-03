#include <iostream>

#include "command.h"
#include "crc_8.h"
#include "crc_16.h"
#include "crc_32.h"



/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char** argv) {
	
	u8 data8[] = {0xFF, 0x25, 0x08, 0x00, 0x01, 0x89, 0x01};
	printf("---crc8---0x%x\n",GetCRC8(data8, 7));
	
	printf("---crc16---0x%x\n",GetCRC16(data8,7));
	
	printf("---crc32--0x%x\n",GetCRC32(data8,7));
	return 0;
}
