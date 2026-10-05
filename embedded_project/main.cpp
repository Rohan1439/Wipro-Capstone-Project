#include "device_driver.h"
#include <iostream>

int main() {
    std::cout << "========================================\n";
    std::cout << " [APP] Real-Time Embedded Simulation    \n";
    std::cout << "========================================\n";
    
    DeviceDriver driver;
    driver.initialize();

    int speed = 0;
    while (true) {
        std::cout << "\nEnter desired motor speed (0 to 100, or type -1 to exit): ";
        std::cin >> speed;

        if (speed == -1) {
            std::cout << "[APP] Shutting down simulation...\n";
            break;
        }

        driver.setMotorSpeed(speed);
        std::cout << "[APP] Hardware register updated successfully.\n";
    }

    std::cout << "[APP] Execution completed successfully!\n";
    return 0;
}
