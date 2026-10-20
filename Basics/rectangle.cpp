#include<iostream>
using namespace std;

int length, breadth;
int rectangle(){
    cout<<" Enter the length and breadth of rectangle:";
    cin >> length >> breadth;
    cout << "Area : "<<length*breadth<<endl;
    cout << "Perimeter : "<<2*(length+breadth)<<endl;
    return 0;

}

int main(){
    rectangle();
    return 0;
}