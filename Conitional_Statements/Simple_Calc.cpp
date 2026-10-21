#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char op;

    cout << "Enter two numbers";
    cin >> num1>>num2;

    cout << " Enter operator (+,-,*,/):";
    cin >> op;

    if ( num2 ==0 && op == '/'){
        cout <<" Error due to second number is 0 ";
    }
    else if ( op == '-'){
        cout << " Result : "<< num1-num2;
    }
    else if (op == '*'){
        cout << "Result : "<< num1*num2;
    }
    else if (op == '+'){
        cout << "Result : "<< num1+num2;
    }
    else if ( op =='/'){
        cout << " Resutl : "<< num1/num2;
        }
    else
    cout << "Invalid operator";

    
}