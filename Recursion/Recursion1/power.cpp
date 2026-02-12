#include <iostream>
using namespace std;

int power(int a, int b){
    if (b == 0) return 1;// base case 
    int ans = a * power(a, b-1); // recursive call
    return ans;
}

int main() {
    int ans = power(9,3); // call of the function
    cout << ans << endl;

return 0;

}


/// Note : this code does not handle the negative values of the b 