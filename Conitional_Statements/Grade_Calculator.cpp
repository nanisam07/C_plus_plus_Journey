#include<iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    if (marks > 99 || marks < 0){
        cout << "Invalid Marks";
    } 
    else if(marks >=90){
        cout<< "A Grade";
    }
    else if (marks >=75){
        cout<< "B Grade";
    }
    else if (marks>= 60){
        cout<< "C Grade";
    }else if(marks>=40){
        cout<< "D Grade";
    }else {
        cout << "Fail";
    }
    
    return 0;
}