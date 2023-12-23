#include <iostream>
#include <iomanip>

using namespace std;

//Design a retirement plan calculator that allows a user to enter a number of working years remaining
//in the user's career and the annual amount of money the user can save.
//Assume that the user earns three percent simple interest on savings annually.
//The program output should show a schedule that list each year number in retirement starting with year 0 and the user savings  at the start of the year.
//Assume that the user spends 50,000 per year in retirement and then earns three percent interest on the remaining balance.
//End the list after 40 years, or when the user's balance is 0 or less, whichever comes first.

int main() {
    int workingYears;
    double annualSavings;
    double retirementSpending = 50000.0;
    double interestRate = 0.03;
    double savings;
    
    cout << "Enter the number of working years remaining: ";
    cin >> workingYears;
    
    cout << "Enter the annual amount of money you can save: ";
    cin >> annualSavings;
    
    savings = 0.0;
    cout << "------------------------------" << endl;    
    cout << "Skulling Financial Services" <<endl <<"Retirement Plan Scheme" <<endl;
    cout << "------------------------------" << endl;
    cout << setw(6) << "Year" << setw(20) << "Savings Balance" << endl;
    cout << "------------------------------" << endl;
    
    for (int year = 0; year <= 40; ++year) {
        if (year < workingYears) {
            savings += annualSavings;
        } else {
            double interest = savings * interestRate;
            savings += interest - retirementSpending;
            if (savings <= 0) {
                savings = 0;
            }
        }
        
        cout << setw(6) << year << setw(20) << fixed << setprecision(2) << savings << endl;
        
        if (savings <= 0) {
            break;
        }
    }
    
    return 0;
}