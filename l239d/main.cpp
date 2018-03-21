#include <wiringPi.h>
#include <iostream>

using namespace std;


int main(int argc, const char* argv[])
{
	//std::cout << "Hello " << HIGH;
	wiringPiSetup();
	pinMode(1, OUTPUT);
	//pinMode(4, INPUT);
	//pinMode(5, OUTPUT);
	digitalWrite(1, HIGH);
	pullUpDnControl(4, PUD_DOWN);
	//for(int i = 0; i < 1000; i++)
	//{
	while(1!=0)
	{
		//if(digitalRead(4) == 1)
		//{
			//digitalWrite(1, HIGH);
			//delay(500);
		//}
		//else
		//digitalWrite(1, LOW);
		//cout << digitalRead(4);;
	}

	return 0;
}