all: app

app: main.cpp device_driver.cpp device_driver.h
	g++ -std=c++17 main.cpp device_driver.cpp -o app

clean:
	rm -f app hardware_register.txt
