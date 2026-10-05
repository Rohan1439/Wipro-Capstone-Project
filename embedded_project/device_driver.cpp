#include "device_driver.h"
#include <iostream>
#include <fstream>

void DeviceDriver::initialize() {
    std::cout << "[Driver] Initializing hardware registers...\n";
}

void DeviceDriver::setMotorSpeed(int speed) {
    if (speed < 0) speed = 0;
    if (speed > 100) speed = 100;

    std::cout << "[Driver] Setting motor speed to: " << speed << "%\n";
    
    std::ofstream regFile("hardware_register.txt");
    if (regFile.is_open()) {
        regFile << "MOTOR_ON_SPEED_" << speed;
        regFile.close();
    }
}
