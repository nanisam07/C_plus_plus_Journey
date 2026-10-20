#include<iostream>
using namespace std;

int a,b,c;
float avg;
int average(){
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    avg = (a + b + c) / 3;
    cout<< "Average"<<avg<<endl;
    return 0;
}

int main(){
    average();
    return 0;
}