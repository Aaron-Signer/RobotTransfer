#include <wiringPi.h>
#include <softPwm.h>
#include <cerrno>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	
	wiringPiSetup();
	//pinMode(26, OUTPUT);
	//digitalWrite(26, 1);
	softPwmCreate(26, 0, 100);
	pwmWrite(26, 50);
	
	perror;
	
	while(1)
	{
	
	}
}