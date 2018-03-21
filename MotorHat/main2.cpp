#include "motor_hat.h"
#include <wiringPiSPI.h>
#include <mcp3004.h>
#include <iostream>

#define BASE 100
#define SPI_CHAN 0

//using namespace motor_hat;

int main(int argc, char *argv[])
{
	//int count = 0;
	int x = 130;
	int stop = 0;
	//wiringPiSetup() ;
  	//mcp3004Setup (BASE, SPI_CHAN) ; // 3004 and 3008 are the same 4/8 channels
	
	delay(10000);

	motor_hat::motor_hat mh;
	mh.set_speed(0, 0, 1);
	mh.set_speed(1,0, 1);
	mh.set_speed(2, x, -1);
	mh.set_speed(3, x, 1);

	delay(5000);
	
	mh.set_speed(0, stop, 1);
	mh.set_speed(1,stop, 1);
	mh.set_speed(2, stop, 1);
	mh.set_speed(3, stop, 1);
	
	delay(100);
	
	mh.set_speed(0, x, -1);
	mh.set_speed(1,x, 1);
	mh.set_speed(2, 0, -1);
	mh.set_speed(3, 0, 1);

	delay(5000);
	mh.set_speed(0, stop, 1);
	mh.set_speed(1,stop, 1);
	mh.set_speed(2, stop, 1);
	mh.set_speed(3, stop, 1);
	
	mh.set_speed(0, 0, 1);
	mh.set_speed(1,0, 1);
	mh.set_speed(2, x, 1);
	mh.set_speed(3, x, -1);

	delay(5000);
	
	mh.set_speed(0, stop, 1);
	mh.set_speed(1,stop, 1);
	mh.set_speed(2, stop, 1);
	mh.set_speed(3, stop, 1);
	
	delay(100);
	
	mh.set_speed(0, x, 1);
	mh.set_speed(1,x, -1);
	mh.set_speed(2, 0, -1);
	mh.set_speed(3, 0, 1);

	delay(5000);
	mh.set_speed(0, stop, 1);
	mh.set_speed(1,stop, 1);
	mh.set_speed(2, stop, 1);
	mh.set_speed(3, stop, 1);
	
}