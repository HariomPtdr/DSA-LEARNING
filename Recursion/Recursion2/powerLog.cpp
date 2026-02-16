#include <iostream>
using namespace std;
int pow(int x, int n){
    if (n == 0)return 1; // base case
    int ans = pow(x, n/2); // it will can the function recursively // yah x ko do equal part me divide kar dega agar power even hogi to koi dikkat nahi odd ke liye condition required hai
    if (n % 2 == 0)return ans*ans;
    else return ans*ans*x; // odd power ke liye x se multipy  because n/2 foe odd also it give integer which does perfectly divide a odd number into 2 equal parts
}
int main() {
    cout <<pow(3,9) << endl;
return 0;
}

// time complexity : Olog(n) base2
// space complexity : Olog(n) base2
// 
