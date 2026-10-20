#include<iostream>
using namespace std;
 

int a,b;
int compare(){
  cout<< " Enter the 2 Numbers: ";
  cin >> a >> b;
  cout<< boolalpha;
  cout << "Equal:"<<(a==b)<<endl;
  cout << "Not Equal:"<<(a!=b)<<endl;
  cout << "Greater:"<<(a>b)<<endl;
  cout << "Less:"<<(a<b)<<endl;
  cout << "Greater or Equal:"<<(a>=b)<<endl;
  cout << "Less or Equal:"<<(a<=b)<<endl;

return 0;
}

int main()
{
  compare();
  return 0;
}