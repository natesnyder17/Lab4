//--------------------------------------------------------------------------------------
//
// Author- Nathaniel Snyder
// Lab 4
// Date- Feb 8 2023
// Purpose- Takes input of persons expeted weekly sales and outputs the expected wages paid
//
//--------------------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//Constants
const double Plan1comrate = 0.10; // Comission for Plan 1
const double Plan1hourly = 5.5*40; // Total hourly wages for plan 1
const double Plan2comrate = 0.15; // Comission rate for plan 2
//Variables 
double weeklysale = 0; // weekly sales input 
double plan1total = 0; // Total income for plan1
double plan2total = 0; // Total income for plan2

int main()
{
    cout << "Enter the weekly sales amount > ";
    cin >> weeklysale;
    plan1total = Plan1hourly + (weeklysale*Plan1comrate);
    plan2total= Plan2comrate*weeklysale;
    cout << endl << endl << "Amount of Sales  $" << weeklysale;
    cout << endl << "Plan 1 pays $" << fixed << setprecision(2) << plan1total;
    cout << endl << "Plan 2 pays $" << fixed << setprecision(2) << plan2total;
    if(plan1total > plan2total)
    {
        cout << endl << "Plan 1 is better" << endl;
    }
    else 
    {
        cout << endl << "Plan 2 is better" << endl;
    }
    return (0);
}