#include <iostream>
#include <cmath>
double x,y,m;
int selection;

void usr_input() { //Function for instant user input of two numbers.
    std::cout << "Input two numbers:\n";
    std::cin >> x;
    std::cin >> y;
}
void addition() { 
    usr_input();
    m=x+y;
    std::cout << m;
}
void subtraction() {
    usr_input();
    m=x-y;
    std::cout << m;
}

void multiplication() {
    usr_input();
    m=x*y;
    std::cout << m;
}

void division() {
    usr_input();
    m=x/y;
    std::cout << m; 
}

void power(){
    usr_input();
    std::cout << pow(x,y);
}

int main() {
    std::cout << "Select function: \n"
    << "[1] ADDITION/DODAWANIE\n"
    << "[2] SUBTRACTION/ODEJMOWANIE\n"
    << "[3] MULTIPLICATION/MNOZENIE\n"
    << "[4] DIVISION/DZIELENIE\n"
    << "[5] POWER/POTEGA\n";
    std::cin >> selection;
    if (selection == 1) {
        addition();
    } else if (selection == 2) {
        subtraction();
    } else if (selection == 3) {
        multiplication();
    } else if (selection == 4) {
        division();
    } else if (selection == 5) {
        power();
    } else {
        std::cout << "Not a correct entry. Restart program.";
    }
    return 0;
}