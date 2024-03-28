#include <iostream>
#include <iomanip>
#include <limits>
#include "functions.h"
#include "input_Validation.h"

using namespace std;

int main() {
    char choice;

    do {
        clearScreen();
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (toupper(choice)) {
            case 'V':
                displayVelocityMenu();
                calculateVelocity();
                break;
            case 'A':
                displayAccelerationMenu();
                calculateAcceleration();
                break;
            case 'M':
                displayMotionMenu();
                break;
            case 'N':
                displayNewtonMenu();
                calculateNewton();
                break;
            case 'W':
                displayWeightMenu();
                calculateWeight();
                break;
            case 'P':
                displayMomentumMenu();
                calculateMomentum();
                break;
            case 'C':
                clearScreen();
                break;
            case 'E':
                cout << "Exiting program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << "\nPress Enter to continue...";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.get();
    } while (true);

    return 0;
}
