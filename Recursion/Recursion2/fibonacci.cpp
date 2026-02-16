#include <iostream>
using namespace std;
int fibo(int n){
    if (n == 1 || n == 2)return 1; /// base case
    int ans = fibo(n-1) + fibo(n-2);// recursive call
    return ans; 
}
int main() {
    cout << fibo(13) << endl; // calling of the function
return 0;
}

/// jab tak ki fibo(n-1) ki call puri nahi ho jati fibo(n-2) call hi nahi hoga 
// so tumhara sochana  ki side by side dono -> { fibo(n-1) + fibo(n-2)} ak sath kam kake ans de denge esa nahi hota hai 


// for example we have to find the fibo(5) 
// for this example solving or calling step
// step 1: fib(5) -> fib(4) + fib(3)
// step 2: fib(4) -> fib(3) + fib(2)
// step 3: fib(3) -> fib(2) + fib(1)
// step 4: fib(2) -> return 1
// step 5: fib(1) -> return 1
// step 6: fib(3) -> return 1 + 1 = 2
// step 7: fib(2) -> return 1
// step 8: fib(4) -> return 2 + 1 = 3
// step 9: fib(3) -> fib(2) + fib(1)
// step 10: fib(2) -> return 1
// step 11: fib(1) -> return 1
// step 12: fib(3) -> return 1 + 1 = 2
// step 13: fib(5) -> return 3 + 2 = 5


