#include<iostream>
using namespace std;

int a, b,c;

int assignment(){
    cout << "Enter the two number:";
    cin >> a>>b;
    c=a;
    a+=b;
    cout << "Addition assignment:" << a << endl;
    a=c;
    a-=b;
    cout << "Subtraction assignment:" << a << endl;
    a=c;
    a*=b;
    cout << "Multiplication assignment:" << a << endl;
    a=c;
    a/=b;
    cout << "Division assignment:" << a << endl;
    a=c;
    cout << "Modulus assignment:" << (a%=b) << endl;

return 0;

}

int main(){
    assignment();
    return 0;
}