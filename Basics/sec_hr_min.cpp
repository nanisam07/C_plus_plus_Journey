#include<iostream>
using namespace std;

int main(){
    int sec;
    cout<< " Enter total seconds: ";
    cin>>sec;
    cout<<"Hours; "<<sec/3600<<endl;
    cout<<"Minutes; "<<(sec%3600)/60<<endl;
    cout<<"Seconds; "<<sec%60<<endl;
    return 0;

}