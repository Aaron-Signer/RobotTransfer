run_main: main
	./main

main: main.o motor_hat.o
	g++ -Wall main.o motor_hat.o -o main -lwiringPi

nim.o: nim.cpp nim.h
	g++ -Wall nim.cpp -c

motor_hat.o: motor_hat.cpp motor_hat.h
	g++ -Wall motor_hat.cpp -c
	
main.o: main.cpp 
	g++ -Wall main.cpp -c



