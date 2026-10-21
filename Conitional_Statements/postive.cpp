#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    if(num > 0){
        cout << "The Number is Positive" << endl;
    }
    else{
        cout << "Not a Postive Number" << endl;
    }
   return 0;
}