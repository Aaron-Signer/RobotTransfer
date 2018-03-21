#include <wiringPi.h>
#include <wiringPiI2C.h>

using namespace std;

int main(int argc, char *argv[])
{
	int x;
	x = wiringPiI2CSetup (0x60);

	
	wiringPiI2CWriteReg8 (x, 0x2a, 0xff) ;
	wiringPiI2CWriteReg8 (x, 0x2b, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x2c, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x2d, 0x00) ;
	
	wiringPiI2CWriteReg8 (x, 0x2e, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x2f, 0x00) ;
	wiringPiI2CWriteReg8 (x, 0x30, 0xff) ;
	wiringPiI2CWriteReg8 (x, 0x31, 0x00) ;
	
	delay(10000);

}