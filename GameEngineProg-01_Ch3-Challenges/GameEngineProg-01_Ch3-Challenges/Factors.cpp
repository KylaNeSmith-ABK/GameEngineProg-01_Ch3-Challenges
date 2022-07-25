#include "Factors.h"

void Factors::FactorsOf(int num)
{
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
