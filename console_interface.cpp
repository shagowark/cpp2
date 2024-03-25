#include "console_interface.h"
#include <iostream>

void ConsoleInterface::start() {
    printField();
    getInputOption();
}

void ConsoleInterface::printField() {
    std::cout << "==========Field==========\n";
    std::cout << field.toString() + "\n";
}

void ConsoleInterface::printOptions() {
    std::cout << "==========Options==========\n";
    std::cout << "1) Set oil volume\n";
    std::cout << "2) Set gas volume\n";
    std::cout << "3) Set water volume\n";
    std::cout << "4) Add an oil well\n";
    std::cout << "5) Add a gas well\n";
    std::cout << "6) Add a water well\n";
    std::cout << "7) Delete a well\n";
    std::cout << "8) Edit a well\n";
    std::cout << "9) Turn a well on/off\n";
    std::cout << "10) Simulate one tick of work\n";
    std::cout << "11) Show field\n";
    std::cout << "0) Exit\n";

}

void ConsoleInterface::getInputOption() {
    int option = 1;
    while (option != 0) {
        printOptions();

        std::cin >> option;

        switch (option) {
            case 1:
                setOilVolume();
                break;
            case 2:
                setGasVolume();
                break;
            case 3:
                setWaterVolume();
                break;
            case 4:
                addOilWell();
                break;
            case 5:
                addGasWell();
                break;
            case 6:
                addWaterWell();
                break;
            case 7:
                deleteWell();
                break;
            case 8:
                editWell();
                break;
            case 9:
                turnOnOffWell();
                break;
            case 10:
                simulateWork();
                break;
            case 11:
                printField();
                break;
            case 0:
                delete &field;
                std::cout << "Shutting down...";
                break;
            default:
                std::cout << "Incorrect output. Please print a number from  1 to 8.\n";
                break;
        }
    }
}

void ConsoleInterface::setGasVolume() {
    std::cout << "Enter new value: ";
    int value;
    std::cin >> value;
    field.setGasVolume(value);
}

void ConsoleInterface::setOilVolume() {
    std::cout << "Enter new value: ";
    int value;
    std::cin >> value;
    field.setOilVolume(value);
}

void ConsoleInterface::setWaterVolume() {
    std::cout << "Enter new value: ";
    int value;
    std::cin >> value;
    field.setWaterVolume(value);
}

void ConsoleInterface::addOilWell() {
    field.addOilWell();
}

void ConsoleInterface::addGasWell() {
    field.addGasWell();
}

void ConsoleInterface::addWaterWell() {
    field.addWaterWell();
}

void ConsoleInterface::deleteWell() {
    std::cout << "Enter number: ";
    int n;
    std::cin >> n;
    field.deleteWell(n - 1);
}

void ConsoleInterface::editWell() {
    int n, status, volume;
    std::cout << "Enter well number: ";
    std::cin >> n;
    std::cout << "Enter status (0 - off, 1 - on): ";
    std::cin >> status;
    std::cout << "Enter volume: ";
    std::cin >> volume;
    field.editWell(n - 1, status, volume);
}

void ConsoleInterface::turnOnOffWell() {
    std::cout << "Enter number: ";
    int n;
    std::cin >> n;
    field.turnWellOnOff(n - 1);
}

void ConsoleInterface::simulateWork() {
    field.simulateWork();
}



