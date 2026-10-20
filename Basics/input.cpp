#include<iostream>
#include<string>
using namespace std; //standard namespace

int main() {
    string name;

    cout << "What is your name?";
    getline(cin, name); //to take input with space in between the name
    cout << "Hello,"<< name ; //output statement endl used if i gave space in between the name it will print the name after space as well
    return 0;
}