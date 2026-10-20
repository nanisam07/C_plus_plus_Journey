#include<iostream>
using namespace std;


int a,b;
int calculate(){
  cout<<" Enter the 2 numbers:";
  cin >> a >> b;
  cout << "Sum : "<<a+b<<endl;
  cout << "Difference : "<<a-b<<endl;
  cout << "Product : "<<a*b<<endl;
  cout << "Quotient : "<<a/b<<endl;
  cout << "Remainder: "<<a%b<<endl;
  return 0;
}

int main(){
    calculate();
    return 0;
}