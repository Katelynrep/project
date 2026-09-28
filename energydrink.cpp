// This program estimates energy drink purchasing preferences from survey data

#include <iostream>
using namespace std;

int main()
{
    const int TOTAL_CUSTOMERS = 16500;
    const double ENERGY_DRINK_PERCENT = 0.15;
    const double CITRUS_PERCENT = 0.58;

    double energyDrinkCustomers;
    double citrusCustomers;

    energyDrinkCustomers = TOTAL_CUSTOMERS * ENERGY_DRINK_PERCENT;
    citrusCustomers = energyDrinkCustomers * CITRUS_PERCENT;

    cout << "Customers who purchase energy drinks weekly: "
         << energyDrinkCustomers << endl;

    cout << "Customers who prefer citrus energy drinks: "
         << citrusCustomers << endl;

    return 0;
}

