
#include <iostream>
#include <vector>
using namespace std;
// void fun(int n){
//     if (n == 0)return;
//     cout << "Hello Hariom " << endl; 
//     fun(n-1);
// }
// int main() {
    
//     fun(3);
// }

void greet(int n){
    if (n == 0)return;
    cout << "Good Morning" << endl;
    greet(n-1);
}

int main() {
    int x;
    cout << "Enter the a number as a input that time you have to Print Good Morning : ";
    cin >> x ;
    greet(x);
     
}
