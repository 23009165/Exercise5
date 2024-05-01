#include <iostream>
#include <iomanip>

using namespace std;

int main() {
double merchandiseCost, employeeSalaries, yearlyRent, electricityCost;
double desiredProfit = 0.10;
double saleDiscount = 0.15;
double totalExpenses = 0;
double markupPrice, markupPercentage = 0;

cout << "Enter the total cost of the merchandise: ";
cin >> merchandiseCost;
cout << "Enter the total salary of the employees: ";
cin >> employeeSalaries;
cout << "Enter the yearly rent of the store: ";
cin >> yearlyRent;
cout << "Enter the estimated electricity cost: ";
cin >> electricityCost;

totalExpenses = employeeSalaries + yearlyRent + electricityCost;
double netProfitNeeded = merchandiseCost * desiredProfit;
double totalIncomeNeeded = merchandiseCost + totalExpenses + netProfitNeeded;
double markedUpPriceBeforeSale = totalIncomeNeeded / (1 - saleDiscount);
markupPercentage = (markedUpPriceBeforeSale / merchandiseCost - 1) * 100;

cout << fixed << setprecision(2);
cout << "The merchandise should be marked up by " << markupPercentage << " to achieve the desired profit." << endl;

return 0;
}
