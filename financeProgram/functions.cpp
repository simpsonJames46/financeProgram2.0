#include <iostream>
#include <vector>
#include "Windows.h"

using namespace std;

static vector<vector<double>> income;
static vector<vector<double>> expenses;

void topMenu();

static void createNewIncome(double amount, double frequency) {
    /// Adds a new income using parameters for amount and frequency (1 = Daily, 2 = Monthly, 3 = Annually), frequency defaults to monthly if undefined.
    vector<double> temp = { amount, frequency };
    income.push_back(temp);
    cout << "Income added, returning to main menu." << endl;
    Sleep(1000);
    topMenu();
}

static void createNewExpense(double amount, double frequency) {
    /// Adds a new expense using parameters for amount and frequency (1 = Daily, 2 = Monthly, 3 = Annually), frequency defaults to monthly if undefined.
    vector<double> temp = { amount, frequency };
    expenses.push_back(temp);
    cout << "Expense added, returning to main menu." << endl;
    Sleep(1000);
    topMenu();
}

static void createNew() {
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

static void topMenu() {
    int input;
    cout << "Welcome to the finance program, what would you like to do?" << endl << "1. View Income \n2. View Expenses \n3. Create New" << endl;
    cin >> input;
    if (input == 1) {
        cout << "This isn't implemented yet." << endl;
        Sleep(1000);
        topMenu();
    }
    else if (input == 2) {
        cout << "This isn't implemented yet." << endl;
        Sleep(1000);
        topMenu();
    }
    else if (input == 3) {
        createNew();
    }
}