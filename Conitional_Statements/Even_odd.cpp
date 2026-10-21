#include<iostream>
using namespace std;

int main(){
    int num;
    cout << " Enter a Number; ";
    cin >> num;

    if (num %2==0){
        cout<< " Entered number is Even Number ";
    }
    else{
        cout<< " Entered number is Odd Number ";
    }
    return 0;
}
