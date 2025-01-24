#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    // //PROBLEM 1
    // string name;
    // int age;
    // cout << "`Enter your name: ";
    // cin >> name;
    // cout << "so your name is: " <<name<< endl;
    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "so your name is " <<name<< ", and your age is " << age << endl;
 // //problem 2
 //    cout<<setw(5)<<"1"<<endl;
 //    cout<<setw(5)<<"2"<<endl;
 //    cout<<setw(5)<<"3"<<endl;
 //    cout<<setw(5)<<"4"<<endl;
 //    cout<<setw(5)<<"5"<<endl;

//     //Problem 3
//     int number1, number2;
// cout << "Enter the first number: ";
//     cin >> number1;
//     cout << "Enter the second number: ";
//     cin >> number2;
//     int temp = number1;
//     number1=number2;
//     number2=temp;
//     cout << number1 << " " << number2 << endl;

//    //Problem 4
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
// cout<<"\nNumber"<<setw(10)<<"Square"<<endl;
//    for (int i = 1; i<=n; i++) {
//        cout<<setw(6)<<i<<setw(10)<<i*i<<endl;
//     }
#include <string>
    string input;
    cout << "Please enter a string" << endl;
    cin >> input;
    int m = (50-input.length()/2);
cout << "|"<<setw(m)<< input << setw(m)<< "|"<<endl;
    return 0;

}
