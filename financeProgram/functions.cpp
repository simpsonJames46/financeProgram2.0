#include <iostream>
#include <vector>
#include "Windows.h"
#include "functions.h"

using namespace std;

static vector<vector<double>> income;
static vector<vector<double>> expenses;

void createNewIncome(double amount, double frequency) {
    /// Adds a new income using parameters for amount and frequency (1 = Daily, 2 = Monthly, 3 = Annually), frequency defaults to monthly if undefined.
    vector<double> temp = { amount, frequency };
    income.push_back(temp);
    cout << "Income added, returning to main menu." << endl;
    Sleep(1000);
    topMenu();
}

void createNewExpense(double amount, double frequency) {
    /// Adds a new expense using parameters for amount and frequency (1 = Daily, 2 = Monthly, 3 = Annually), frequency defaults to monthly if undefined.
    vector<double> temp = { amount, frequency };
    expenses.push_back(temp);
    cout << "Expense added, returning to main menu." << endl;
    Sleep(1000);
    topMenu();
}

void createNew() {
    int type = 0;
    double amount = 0;
    int frequency = 0;

    cout << "What would you like to create:" << endl << "1. Income \n2. Expense" << endl;
    cin >> type;
    cout << "Please give an amount:" << endl;
    cin >> amount;
    cout << "Please define a frequency:" << endl << "1. Daily \n2. Monthly \n3. Annually" << endl;
    cin >> frequency;

    if (type == 1) {
        createNewIncome(amount, frequency);
    }
    else if (type == 2) {
        createNewExpense(amount, frequency);
    }
}

void topMenu() {
    int input;
    cout << "Welcome to the finance program, what would you like to do?" << endl << "1. View Income \n2. View Expenses \n3. Create New" << endl;
    cin >> input;
    if (input == 1) {
        printVector(1);
    }
    else if (input == 2) {
        printVector(2);
    }
    else if (input == 3) {
        createNew();
    }
}

void printVector(int vector) {
    if (vector == 1) {
        for (int i = 0; i < size(income); i++) {
            for (int j = 0; j < 1; j++) {
                cout << "£" << income[i][0];
                if (income[i][1] == 1) {
                    cout << " - Daily" << endl;
                }
                else if (income[i][1] == 2) {
                    cout << " - Monthly" << endl;
                }
                else if (income[i][1] == 3) {
                    cout << " - Annually" << endl;
                }
            }
        }
    }
    else if (vector == 2) {
        for (int i = 0; i < size(expenses); i++) {
            for (int j = 0; j < 1; j++) {
                cout << "£" << expenses[i][0];
                if (expenses[i][1] == 1) {
                    cout << " - Daily" << endl;
                }
                else if (expenses[i][1] == 2) {
                    cout << " - Monthly" << endl;
                }
                else if (expenses[i][1] == 3) {
                    cout << " - Annually" << endl;
                }
            }
        }
    }
}