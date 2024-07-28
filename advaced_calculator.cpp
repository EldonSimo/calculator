# include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>
#include <conio.h>

using namespace std;

int main() {

string input;
char operation;
  
float num1, num2;

  cout << "Enter operation: ";
  
  cin >> input;
  
  size_t pos;
  
  if ((pos=input.find('+'))!= string::npos) { //it search for the operator
      operation = '+';
  }else if ((pos=input.find('-'))!= string::npos) {
      operation = '-';
  }else if ((pos=input.find('*'))!= string::npos) {
      operation = '*';
  }else if ((pos=input.find('/'))!= string::npos) {
      operation = '/';
  }else if ((pos=input.find('^'))!= string::npos) {
      operation = '^';
      
  }else {
        cout << "invalid characters! ";
        return 1;
    }


    string num1_str = input.substr(0, pos);//it calculate the strings before the operator
    string num2_str = input.substr(pos + 1);//it calculate the strings after the operator
    
    num1 = stof(num1_str);//it convert string => float
    num2 = stof(num2_str);
  

  switch(operation) {

    case '+':
      cout << "\n================ " << num1 << " + " << num2 << " = " << num1 + num2<< " ================\n";
      break;

    case '-':
      cout << "\n================ " << num1 << " - " << num2 << " = " << num1 - num2<< " ================\n";
      break;

    case '*':
      cout << "\n================ " << num1 << " * " << num2 << " = " << num1 * num2<< " ================\n";
      break;

    case '/':
     if (num2 == 0){
         cout << "sry rak gha katkhwr khrj t9wd";
      break;}
     
     else (num2!=0);{
         
     }cout << "\n================ " << num1 << " / " << num2 << " = " << num1 / num2<< " ================\n";
     break;
    case '^':
    
    cout << "\n================ " << num1 << " ^ " << num2<< " = " << pow(num1,num2)<< " ================\n";
          break;
    
    
    
}
  
char enterKey = '\n';
    cout << "\nPress any key to exit..." << endl;
    _getch();
  return 0;
}

