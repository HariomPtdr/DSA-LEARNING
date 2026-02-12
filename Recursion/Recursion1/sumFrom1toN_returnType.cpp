#include <iostream>
using namespace std;

int sum1ton(int n){
    if(n == 0) return 0; // base case 
    int ans = n + sum1ton(n-1);// recursive call of the function
    return ans; // return ans because it is an non void function
}
int main() {
    int sum = sum1ton(10); // calling of the function for the sum 
    cout << sum << endl;//print the ans
return 0;
}

// it is something like factorial 