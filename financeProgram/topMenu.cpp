#include <iostream>
#include "createNew.cpp"

using namespace std;

void topMenu() {
    int input;
    cout << "Welcome to the finance program, what would you like to do?" << endl << "1. View Income \n2. View Expenses \n3. Create New" << endl;
    cin >> input;
    switch (input) {
    case 1:
        cout << "This isn't implemented yet." << endl;
    case 2:
        cout << "This isn't implemented yet." << endl;
    case 3:
        createNew();
    }
    
}