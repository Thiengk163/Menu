#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <iomanip>

using namespace std;

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
void printResult(double result, string units);

#endif // FUNCTIONS_H
