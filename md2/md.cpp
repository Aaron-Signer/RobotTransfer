#include <wiringPi.h>
#include <wiringPiI2C.h>

using namespace std;

int main(int argc, char *argv[])
{
	int model = 0;
	int oldMode = 0;
	int newMode = 0;

	int x;
	x = wiringPiI2CSetup (0x60);
	
	wiringPiI2CWriteReg8 (x, 0xFA, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0xFB, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0xFC, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0xFD, 0x00) ;
	
	wiringPiI2CWriteReg8 (x, 0x01, 0x04) ;
	wiringPiI2CWriteReg8 (x, 0x00, 0x01) ;
	
	delay(.005);
	
	model = wiringPiI2CReadReg8(x, 0x00) ;
	model = model & (~0x10);
	
	delay(.005);
	
	oldMode = wiringPiI2CReadReg8 (x, 0x00) ;
	newMode = (oldMode & 0x7F) | 0x10;
	wiringPiI2CWriteReg8 (x, 0x00, newMode) ;
	wiringPiI2CWriteReg8 (x, 0x00, model) ;
	wiringPiI2CWriteReg8 (x, 0xFE, 3) ;
	wiringPiI2CWriteReg8 (x, 0x00, oldMode) ;
	
	delay(.005);
	
	wiringPiI2CWriteReg8 (x, 0x00, (oldMode | 0x80)) ;
	
	wiringPiI2CWriteReg8 (x, 0x0E, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x0F, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x10, 0xF0) ;
	wiringPiI2CWriteReg8 (x, 0x11, 0x0F) ;
	
	wiringPiI2CWriteReg8 (x, 0x26, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x27, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x28, 0xF0) ;
	wiringPiI2CWriteReg8 (x, 0x29, 0x0F) ;
	
	
	wiringPiI2CWriteReg8 (x, 0x12, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x13, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x14, 0x10) ;
	wiringPiI2CWriteReg8 (x, 0x15, 0x00) ;
	
	wiringPiI2CWriteReg8 (x, 0x16, 0x10) ;
	wiringPiI2CWriteReg8 (x, 0x17, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x18, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x19, 0x00) ;
	
	//delay(1000);
	
	wiringPiI2CWriteReg8 (x, 0x2a, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x2b, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x2c, 0x10) ;
	wiringPiI2CWriteReg8 (x, 0x2d, 0x00) ;
	
	wiringPiI2CWriteReg8 (x, 0x2e, 0x10) ;
	wiringPiI2CWriteReg8 (x, 0x2f, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x30, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x31, 0x00) ;
	
	delay(500);
	

	
	wiringPiI2CWriteReg8 (x, 0x12, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x13, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x14, 0x10) ;
	wiringPiI2CWriteReg8 (x, 0x15, 0x00) ;
	
	wiringPiI2CWriteReg8 (x, 0x16, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x17, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x18, 0x10) ;
	wiringPiI2CWriteReg8 (x, 0x19, 0x00) ;
	
	//delay(1000);
	
	wiringPiI2CWriteReg8 (x, 0x2a, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x2b, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x2c, 0x10) ;
	wiringPiI2CWriteReg8 (x, 0x2d, 0x00) ;
	
	wiringPiI2CWriteReg8 (x, 0x2e, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x2f, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x30, 0x10) ;
	wiringPiI2CWriteReg8 (x, 0x31, 0x00) ;
	
}