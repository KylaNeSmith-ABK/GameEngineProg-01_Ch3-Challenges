// GameEngineProg-01_Ch3-Challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
#include <ctime>

#include "LeapYear.h"
#include "Factors.h"

void CurrentYearTest();
void ProvidedYearTest();
void FactorsTest();

int main()
{
    std::cout << "-- LEAP YEAR --" << std::endl;

    CurrentYearTest();

    std::cout << std::endl;

    
    ProvidedYearTest();

    std::cout << std::endl;
    std::cout << "-- FACTORS --" << std::endl;
    
    FactorsTest();
}

void CurrentYearTest()
{
    struct tm currentTime;
    std::time_t now = std::time(0);
    localtime_s(&currentTime, &now);
    int currentYear = 1900 + currentTime.tm_year;

    std::cout << "The current year is " << currentYear << std::endl;
    LeapYear::CheckIfLeapYear(currentYear);
}

void ProvidedYearTest()
{
    int currentYear = 1900;
    std::cout << "Please provide a year (e.g. 2024):" << std::endl;

    do
    {
        std::cin >> currentYear;
        if (std::cin.fail() || currentYear < 0)
        {
            std::cout << "Please provide a valid year" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            break;
        }
    } while (true);

    LeapYear::CheckIfLeapYear(currentYear);
}

void FactorsTest()
{
    int num = 0;

    std::cout << "Please provide a positive integer:" << std::endl;

    do
    {
        std::cin >> num;
        if (std::cin.fail() || num < 0)
        {
            std::cout << "Please provide a valid, positive integer" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            break;
        }
    } while (true);

    Factors::FactorsOf(num);
}
