#include <wiringPi.h>
#include <wiringPiSPI.h>
#include <mcp3004.h>
#include <iostream>

#define BASE 100
#define SPI_CHAN 0

using namespace std;

int main(int argc, char *argv[])
{
	int a1 = 0;
	int a2 = 0;
	int a3 = 0;
	int a4 = 0;
	int a5 = 0;
	wiringPiSetup() ;
  	mcp3004Setup (BASE, SPI_CHAN) ; // 3004 and 3008 are the same 4/8 channels

  	while(1!=0)
	{
    		a1 = analogRead (BASE);
    		a2 = analogRead (101);
    		a3 = analogRead (102);
    		a4 = analogRead (103);
    		a5 = analogRead (104);
		cout << a1 << " " << a2 << " " << a3 << " " << a4 << " " << a5 << endl;
		delay(1000);
	}	
}