#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> income;
vector<vector<int>> expenses;

void createNew() {
    int input = 0;
    cout << "What would you like to create:" << endl << "1. Income \n2. Expense" << endl;
    cin >> input;
}

void createNewIncome(int amount, int frequency = 2) {
    /// Adds a new income using parameters for amount and frequency (1 = Daily, 2 = Monthly, 3 = Annually), frequency defaults to monthly if undefined.
    vector<int> temp = { amount, frequency };
    income.push_back(temp);
}

void createNewExpense(int amount, int frequency = 2) {
    /// Adds a new expense using parameters for amount and frequency (1 = Daily, 2 = Monthly, 3 = Annually), frequency defaults to monthly if undefined.
    vector<int> temp = { amount, frequency };
    expenses.push_back(temp);
}

int main()
{
    cout << "Hello World!\n";
}