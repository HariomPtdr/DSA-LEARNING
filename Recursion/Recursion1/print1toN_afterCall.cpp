#include <iostream>
using namespace std;

void print(int n){
    if(n == 0)return; // base case 
    print (n-1); // recursive call
    cout << n << endl; // kaam 
}
int main() {
    print (5); // calling of the function
return 0;
}