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

void assignment01Task02(){};
void assignment01Task03(){};
void assignment02Task01(){};
void assignment02Task02(){};
void assignment02Task03(){};
void assignment02Task04(){};
void assignment03Task01(){};
void assignment03Task02(){};
void assignment03Task03(){};

int main()
{

    // assignment01Task01();
    assignment01Task02();
    std::cout << "this is fouad here from viko university" << std::endl;

    return 0;
}
