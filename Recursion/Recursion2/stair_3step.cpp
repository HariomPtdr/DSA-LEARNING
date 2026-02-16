#include <iostream>
using namespace std;
int stair(int n){
    if (n == 1)return 1;
    if (n == 2)return 2;
    if (n == 3)return 4;
    int ans = stair(n-1) + stair(n-2) + stair(n-3);// recursive call
    return ans; 
}
int main() {
    cout << stair(4) << endl; // calling of the function
return 0;
}

// esame jab vah stair par chadega to vah 3 tariko se chad sakta hai 
// 1 : 1 step chade
// 2 : 2 step chade 
// 3 : 3 step chade

/// just because hamne 3 base condition li hai