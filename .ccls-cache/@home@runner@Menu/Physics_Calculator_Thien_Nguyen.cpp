#include <iostream>
#include <iomanip>
#include <limits> // Needed for numeric_limits
#include <cstdlib> // Needed for exit()

using namespace std;

// Function prototypes
void clearScreen();
void displayMainMenu();
void displayVelocityMenu();
void calculateVelocity();
void displayAccelerationMenu();
void calculateAcceleration();
void displayMotionMenu();
void calculateMotion(int option);
void displayNewtonMenu();
void calculateNewton();
void displayWeightMenu();
void calculateWeight();
void displayMomentumMenu();
void calculateMomentum();
void validateInput(double& input);
void validateInput(int& input);
void printResult(double result, string units);

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

// Function to clear the screen
void clearScreen() {
    // Print 100 newline characters to simulate clearing the screen
    for (int i = 0; i < 100; ++i) {
        cout << endl;
    }
}

// Function to display the main menu
void displayMainMenu() {
    cout << "Physics Calculator Menu" << endl;
    cout << "-----------------------" << endl;
    cout << "Velocity (V)" << endl;
    cout << "Acceleration (A)" << endl;
    cout << "Motion (M)" << endl;
    cout << "Newton's Second Law (N)" << endl;
    cout << "Weight (W)" << endl;
    cout << "Momentum (P)" << endl;
    cout << "Clear Screen (C)" << endl;
    cout << "Exit (E)" << endl;
}

// Function to display the velocity menu
void displayVelocityMenu() {
    cout << "Velocity Menu" << endl;
    cout << "--------------" << endl;
    cout << "1. Calculate velocity (v = ds/dt)" << endl;
    cout << "2. Calculate average velocity (v̅ = Δs/Δt)" << endl;
}

// Function to perform velocity calculations
void calculateVelocity() {
    double ds, dt;
    string dsUnits, dtUnits;

    cout << "Enter displacement (ds): ";
    validateInput(ds);
    cout << "Enter time (dt): ";
    validateInput(dt);
    cout << "Enter units for displacement: ";
    cin >> ws; // Discard whitespace characters
    getline(cin, dsUnits);
    cout << "Enter units for time: ";
    getline(cin, dtUnits);

    double v = ds / dt;
    printResult(v, dsUnits + "/" + dtUnits);
}

// Function to display the acceleration menu
void displayAccelerationMenu() {
    cout << "Acceleration Menu" << endl;
    cout << "-----------------" << endl;
    cout << "1. Calculate acceleration (a = dv/dt)" << endl;
    cout << "2. Calculate average acceleration (a̅ = Δv/Δt)" << endl;
}

// Function to perform acceleration calculations
void calculateAcceleration() {
    double dv, dt;
    string dvUnits, dtUnits;

    cout << "Enter change in velocity (dv): ";
    validateInput(dv);
    cout << "Enter time (dt): ";
    validateInput(dt);
    cout << "Enter units for change in velocity: ";
    cin >> ws; // Discard whitespace characters
    getline(cin, dvUnits);
    cout << "Enter units for time: ";
    getline(cin, dtUnits);

    double a = dv / dt;
    printResult(a, dvUnits + "/" + dtUnits);
}

// Function to display the motion menu
void displayMotionMenu() {
    int option;
    cout << "Motion Menu" << endl;
    cout << "-----------" << endl;
    cout << "1. Solve for velocity (v)" << endl;
    cout << "2. Solve for displacement (s)" << endl;
    cout << "3. Solve for v^2" << endl;
    cout << "4. Solve for average velocity (v̅)" << endl;
    cout << "Enter your choice: ";
    cin >> option;
    calculateMotion(option);
}

// Function to perform motion calculations
void calculateMotion(int option) {
    // Implementation for motion equations
    // ...
}

// Function to display the Newton's Second Law menu
void displayNewtonMenu() {
    cout << "Newton's Second Law Menu" << endl;
    cout << "------------------------" << endl;
    cout << "1. Solve for force (N)" << endl;
}

// Function to perform Newton's Second Law calculations
void calculateNewton() {
    double m, a;
    string mUnits, aUnits;

    cout << "Enter mass (m): ";
    validateInput(m);
    cout << "Enter acceleration (a): ";
    validateInput(a);
    cout << "Enter units for mass: ";
    cin >> ws; // Discard whitespace characters
    getline(cin, mUnits);
    cout << "Enter units for acceleration: ";
    getline(cin, aUnits);

    double N = m * a;
    printResult(N, mUnits + " " + aUnits);
}

// Function to display the weight menu
void displayWeightMenu() {
    cout << "Weight Menu" << endl;
    cout << "-----------" << endl;
    cout << "1. Solve for weight (W)" << endl;
}

// Function to perform weight calculations
void calculateWeight() {
    double m, g;
    string outputUnits;

    cout << "Enter mass (m): ";
    validateInput(m);
    cout << "Enter acceleration due to gravity (g): ";
    validateInput(g);
    cout << "Enter units for weight output: ";
    cin >> ws; // Discard whitespace characters
    getline(cin, outputUnits);

    double W = m * g;
    printResult(W, outputUnits);
}

// Function to display the momentum menu
void displayMomentumMenu() {
    cout << "Momentum Menu" << endl;
    cout << "-------------" << endl;
    cout << "1. Solve for momentum (P)" << endl;
}

// Function to perform momentum calculations
void calculateMomentum() {
    double m, v;
    string outputUnits;

    cout << "Enter mass (m): ";
    validateInput(m);
    cout << "Enter velocity (v): ";
    validateInput(v);
    cout << "Enter units for momentum output: ";
    cin >> ws; // Discard whitespace characters
    getline(cin, outputUnits);

    double P = m * v;
    printResult(P, outputUnits);
}

// Function to validate input (double)
void validateInput(double& input) {
    while (!(cin >> input)) {
        cout << "Invalid input. Please enter a numeric value: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// Function to validate input (int)
void validateInput(int& input) {
    while (!(cin >> input)) {
        cout << "Invalid input. Please enter an integer value: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

// Function to print the result with units
void printResult(double result, string units) {
    cout << "Result: " << fixed << setprecision(4) << result << " " << units << endl;
}
