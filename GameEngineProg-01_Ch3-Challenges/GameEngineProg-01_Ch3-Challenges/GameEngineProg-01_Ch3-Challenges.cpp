// GameEngineProg-01_Ch3-Challenges.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>
#include <ctime>

bool IsLeapYear(int year);
void CheckIfLeapYear(int year);

int main()
{
    std::cout << "-- LEAP YEAR --" << std::endl;

    struct tm currentTime;
    std::time_t now = std::time(0);
    localtime_s(&currentTime, &now);
    int currentYear = 1900 + currentTime.tm_year;

    std::cout << "The current year is " << currentYear << std::endl;
    CheckIfLeapYear(currentYear);

    std::cout << std::endl;

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

    CheckIfLeapYear(currentYear);
    

    std::cout << std::endl;
    std::cout << "-- FACTORS --" << std::endl;
    
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

    std::cout << "The factors of " << num << " are ";
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            std::cout << i;
            if (i < num)
            {
                std::cout << ", ";
            }
        }
    }
}

bool IsLeapYear(int year)
{
    return ((year % 4 == 0) && (!(year % 100 == 0) || (year % 400 == 0)));
}

void CheckIfLeapYear(int year)
{
    if (IsLeapYear(year))
    {
        std::cout << year << " is a leap year!" << std::endl;
    }
    else
    {
        std::cout << year << " is NOT a leap year" << std::endl;
    }
}
