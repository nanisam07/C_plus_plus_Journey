#include<iostream>
using namespace  std;

int main(){
    int num;
    cout << " Enter a Number: ";
    cin >> num;
    if(num > 0){
        cout<< " Entered number is Positive Number ";
    }
    else if(num<0){
        cout<< " Entered number is Negative Number ";
    }
    else{
        cout<< " Entered number is Zero ";
    }
    return 0;

}