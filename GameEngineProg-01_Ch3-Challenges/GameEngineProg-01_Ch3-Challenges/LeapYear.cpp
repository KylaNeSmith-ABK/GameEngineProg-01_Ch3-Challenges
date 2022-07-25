#include "LeapYear.h"

bool LeapYear::IsLeapYear(int year)
{
	return ((year % 4 == 0) && (!(year % 100 == 0) || (year % 400 == 0)));
}

void LeapYear::CheckIfLeapYear(int year)
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
