#include <iostream>
using namespace std;

void print(int i, int n){ // here one extra parimeter that is for comparision 
    if(i > n)return; // base case & comparision
    cout << i << endl; // kaam 
    print (i+1 ,n); // recursive call
}
int main() {
    print (1, 10); // calling of the function
return 0;
}