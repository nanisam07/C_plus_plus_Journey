#include<iostream>
using namespace std;

int a;
int inc(){
    cout<<" Enter a number: ";
    cin >> a;
    cout<<"Original : "<<a<<endl;
    a++;
    cout<<"After increment : "<<a<<endl;
    a--;
    cout<< "After decrement : "<<a<<endl;
    return 0;
}

int main(){
    inc();
    return 0;
}
