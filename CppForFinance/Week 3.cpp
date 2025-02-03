#include <iostream>
#include "problems.h"
#include <cmath>

int four_problem_1()
{
    int NumberOfFinger = 0;

    std::cout << "Input Number: ";
    std::cin >> NumberOfFinger;

    switch (NumberOfFinger)
    {
        case 1:
            std::cout << "\Thumb\n";
            break;
        case 2:
            std::cout << "\Pointer Finger\n";
            break;
        case 3:
            std::cout << "\Middle Finger\n";
            break;
        case 4:
            std::cout << "\Ring Finger\n";
            break;
        case 5:
            std::cout << "\Pinky Finger\n";
            break;
        default:
            std::cout << "\No Such Finger\n";
            break;
    }
            
    return 0;
}

int four_problem_2()
{
    int DayNumber;

    std::cout << "Input Number of Week: ";
    std::cin >> DayNumber;

    switch (DayNumber)
    {
    case 1:
        std::cout << "\Monday Stuff\n";
        break;
    case 2:
        std::cout << "\Tuesday Stuff\n";
        break;
    case 3:
        std::cout << "\Wednesday Stuff\n";
        break;
    case 4:
        std::cout << "\Thursday Stuff\n";
        break;
    case 5:
        std::cout << "\Friday Stuff\n";
        break;
    case 6:
        std::cout << "\Saturday Stuff\n";
        break;
    case 7:
        std::cout << "\Sunday Stuff\n";
        break;
    default:
        std::cout << "\No Such Day\n" << std::endl;
        break;
    }

    return 0;
}

int four_problem_3()
{
    int number = 0;
    char exit;

    for (;;)
    {
        std::cout << "Enter a number you want to square: ";
        std::cin >> number;

        std::cout << "Square of " << number << " is " << number * number;

        std::cout << "\nContinue input? (Y to continue or N to exit) ";
        std::cin >> exit;
        
        if (exit != 'y' && exit != 'Y')
        {
            break;
        }
    }

    return 0;
}

int four_problem_4()
{
    int start = 0;
    int end = 0;
    int sum = 0;

    std::cout << "Enter beginning of summation: ";
    std::cin >> start;

    std::cout << "Enter end of summation: ";
    std::cin >> end;

    for (int i = start; i < end + 1; i++)
    {
        if (i % 2 != 0)
        {
            std::cout << i << std::endl;
            sum += i;
        }
    }

    return sum;
}
