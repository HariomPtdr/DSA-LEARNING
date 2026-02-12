#include <iostream>
using namespace std;

void sum1ton(int sum, int n){
    if(n == 0){ // base case 
        cout << sum <<endl;
        return; 
    }
    sum1ton(sum+n, n-1); // recursive call of the function
}
int main() {
    sum1ton(0,5); // calling of the function for the sum 
return 0;
}