#include <iostream>
#include <cmath>
#include <conio.h>
#include <sstream>

using namespace std;

int main() {
    string input;
    
    float num1, num2;

    cout << "Enter operation: ";
    getline(cin,input);

    size_t pos;
    
    if ((pos = input.find("sqrt")) != string::npos){
    string num2_str = input.substr(pos + 4 );
    try{
        num2 = stof (num2_str);
        cout << "\n================ " << "sqrt(" << num2<< ") = "<< sqrt(num2)<< " ================\n";
        }catch (const invalid_argument &e) {
            cout << "Invalid characters!" << endl;
        } 
        
        char enterKey = '\n';
    cout << "Press any key to exit..." << endl;
    _getch();
        return 0;  
       
           
       }

    char operation = '\0';
    if ((pos = input.find('+')) != string::npos) {
        operation = '+';
    } else if ((pos = input.find('-')) != string::npos) {
        operation = '-';
    } else if ((pos = input.find('*')) != string::npos) {
        operation = '*';
    } else if ((pos = input.find('/')) != string::npos) {
        operation = '/';
    } else if ((pos = input.find('^')) != string::npos) {
        operation = '^';
    }  else {
        cout << "Invalid characters!"<< endl;
        return 1;
    }
    
    
    string num1_str = input.substr(0, pos); // Extract the strings before the operator
    string num2_str = input.substr(pos + 1); // Extract the strings after the operator

    try {
        num1 = stof(num1_str); // Convert string to float
        num2 = stof(num2_str);

        switch (operation) {
            case '+':
                cout << "\n================ " << num1 << " + " << num2 << " = " << num1 + num2 << " ================\n";
                break;
            case '-':
                cout << "\n================ " << num1 << " - " << num2 << " = " << num1 - num2 << " ================\n";
                break;
            case '*':
                cout << "\n================ " << num1 << " * " << num2 << " = " << num1 * num2 << " ================\n";
                break;
            case '/':
                if (num2 == 0) {
                    cout << "sry akatkhwer khrj t9wd" << endl;
                } else {
                    cout << "\n================ " << num1 << " / " << num2 << " = " << num1 / num2 << " ================\n";
                }
                break;
            case '^':
                cout << "\n================ " << num1 << " ^ " << num2 << " = " << pow(num1, num2) << " ================\n";
                break;
           
        }
    } catch (const invalid_argument &e) {
        cout << "Invalid characters!" << endl;
    } 
char enterKey = '\n';
    cout << "Press any key to exit..." << endl;
    _getch();
   
    return 0;
}
