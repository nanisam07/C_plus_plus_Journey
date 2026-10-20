#include<iostream>
using namespace std;

int x,y,z;
int swap(){
    cout<<" Enter the 2 numbers:";
    cin >> x >> y;
    z=x;
    x=y;
    y=z;
    cout << "Before" <<z<< " " << x << endl;
    cout << "After" << x << " " << y << endl;
    return 0;

}
int main(){
    swap();
    return 0;
}

