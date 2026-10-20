#include<iostream>
#include<string>
using namespace std; 
int main() {
    string name;
    int age;
    cout << "What is your name?";
    getline(cin,name);
    cout << "What is your age?";

    cin>> age;
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    return 0;
}

int main() {
    string student_name;
    int roll_number;
    double CGPA;

    cout << "What is your name?";
    getline(cin, student_name); 
    cout << "What is your roll number?";
    cin >> roll_number;
    cout << "What is your CGPA?";
    cin >>  CGPA;

    cout << "Student Name:"<<student_name<<endl;
    cout << "Roll Number:"<<roll_number<<endl;
    cout << "CGPA:"<<CGPA<<endl;
    return 0;
    
}

int main(){
    int num1,num2;
    cout<<"Enter first number:";
    cin>>num1;
    cout<<"Enter second number:";
    cin>>num2;
    cout << " first number:"<<num1<<endl;
    cout << " second number:"<<num2<<endl;
}

int main(){
    string name,place,language;
    cout<< " enter you name :";
    getline(cin,name);
    cout<< " enter your place :";
    getline(cin,place);
    cout<< " enter your  Programming language :";
    getline(cin,language);

    cout << " My name is "<< name <<"."<<endl;
    cout << " I live in " << place <<"."<<endl;
    cout << " My favorite  programming language is " << language <<"."<<endl;
}

int main (){
    string product_name;
    double product_price;
    int quantity;

    cout<<" Enter the product :";
    cin>>product_name;
    cout<<" Enter the price of product :";
    cin>>product_price;
    cout<<" Enter the quantity of product :";
    cin>>quantity;

    cout<<"Prodcut:"<<product_name<<endl;
    cout<<"Price:"<<product_price<<endl;
    cout<<"Quantity:"<<quantity<<endl;
    return 0;

}

int main(){
    int length,breadth;
    cout<<"Enter the length of rectangle :";
    cin>>length;
    cout<<"Enter the breadth of rectangle :";
    cin>>breadth;

    cout<< " Length:"<<length<<endl;
    cout<< " Breadth:"<<breadth<<endl;
    return 0;
}

int main(){
    string sentence;
    char c;
    cout<<"Enter a character :";
    cin>> c;
    cout<<"Enter a sentence :";
    cin.ignore(); // to ignore the newline character left in the input buffer
    getline(cin,sentence);

    cout<<"Character:"<<c<<endl;
    cout<<"Sentence:"<<sentence<<endl;

}

int inputss(){
    int num;
    float decimal;
    char S;

    cout<<"Enter an integer :";
    cin>>num;
    cout<<"Enter a decimal number :";
    cin>>decimal;
    cout<<"Enter a character :";
    cin>>S;

    cout<<"Integer:"<<num<<endl;
    cout<<"Decimal:"<<decimal<<endl;
    cout<<"Character:"<<S<<endl;
    return 0;
}
int main(){
    inputss();
    return 0;
}
string first,middle,last;
int input_handling(){
    cout<<"Enter your first name :";
    cin>>first;
    cout<<"Enter your middle name :";
    cin>>middle;
    cout<<"Enter your last name :";
    cin>>last;
    return 0;

}
int main(){
    input_handling();
    cout<<"Full name : "<<first<<" "<<middle<<" "<<last<<endl;
    return 0;
}
string college,course,branch,year;
int college_details(){
    
    cout << "Enter your college name :";
    getline(cin,college);
    cout << "Enter your degree :";
    getline(cin,course);
    cout << "Enter your branch name :";
    getline(cin,branch);
    cout << "Enter your year of study :";
    getline(cin,year);
    return 0;
}

int main (){
    college_details();
    cout<<"College name :"<<college<<endl;
    cout<<"Degree :"<<course<<endl;
    cout<<"Branch :"<<branch<<endl;
    cout<<"Year :"<<year<<endl;
}