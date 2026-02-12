#include <iostream>
using namespace std;
int fact(int n){ // here int is return type
    if (n == 0 || n == 1)return 1; // base case
    int ans = n * fact(n -1); // recursive call & int is data type
    return ans; // returning the ans
}
int main() {
    
    int x = fact(6); // calling of the function & store that value in a variable integer
    cout << x << endl; // printing the ans 

    return 0;

}