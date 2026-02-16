#include <iostream>
using namespace std;
int stair(int n){
    if (n == 1)return 1;
    if (n == 2)return 2;
    int ans = stair(n-1) + stair(n-2);// recursive call
    return ans; 
}
int main() {
    cout << stair(5) << endl; // calling of the function
return 0;
}

// esame jab vah stair par chadega to vah 2 tariko se chad sakta hai 
// 1 : 1 step chade
// 2 : 2 step chade 


/// just because hamne 2 base condition li hai

// it similar to the fabonacci so
// time complexity -> O(n);