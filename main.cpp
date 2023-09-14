#include <iostream>

void assignment01Task01()
{
    const double OUNCES_PER_METRIC_TON = 35273.92;

    double weightInOunces;

    std::cout << "Enter the weight of a box of cereal in ounces: ";
    std::cin >> weightInOunces;

    double weightInMetricTons = weightInOunces / OUNCES_PER_METRIC_TON;
    int boxesNeededForMetricTon = static_cast<int>(1.0 / weightInMetricTons);

    std::cout << "Weight in metric tons: " << weightInMetricTons << std::endl;
    std::cout << "Number of boxes needed for a metric ton: " << boxesNeededForMetricTon << std::endl;
}

void assignment01Task02()
{
    double weightInPound;
    std::cout << "Enter your weight in pounds: " << std::endl;
    std::cin >> weightInPound;

    int numberOfMETs;
    std::cout << "Enter MET" << std::endl;
    std::cin >> numberOfMETs;
    // convert pounds to kilograms
    double weightInKilograms = weightInPound / 2.2;

    int numberOfMinutes;
    std::cout << "Enter number of minutes spent in activity" << std::endl;
    std::cin >> numberOfMinutes;

    // calculate total calories burned in minutes
    double totalPerMinute = 0.0175 * numberOfMETs * weightInKilograms;
    int total = static_cast<int>(totalPerMinute * numberOfMinutes);
    std::cout << "Total calories expanded : " << total << " in " << numberOfMinutes << " Minutes" << std::endl;
};

void assignment01Task03()
{
    int seconds;
    std::cout << "Enter number of seconds: " << std::endl;
    std::cin >> seconds;

    int minutes = seconds / 60;
    int hours = minutes / 60;
    int days = hours / 24;

    std::cout << "Number of hours: " << hours << std::endl;
    std::cout << "Number of minutes: " << minutes << std::endl;
};

void assignment02Task01()
{
    int number;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> number;

    if (number > 0)
    {
        std::cout << "Positive number" << std::endl;
    }
    else if (number < 0)
    {
        std::cout << "Negative number" << std::endl;
    }
    else
    {
        std::cout << "Zero" << std::endl;
    }
}

void assignment02Task02(){};
void assignment02Task03(){};
void assignment02Task04(){};
void assignment03Task01(){};
void assignment03Task02(){};
void assignment03Task03(){};

int main()
{

    // assignment01Task01();
    // assignment01Task02();
    // assignment01Task03();
    assignment02Task01();
    std::cout << "this is fouad here from viko university" << std::endl;

    return 0;
}
