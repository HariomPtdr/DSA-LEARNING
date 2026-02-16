#include <iostream>
using namespace std;

int main() {
    int arr[3][4];
    // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // 
    cout << arr[2][2]<<endl;// garbage value
    cout << arr[1][3]<<endl;// garbage value
    arr[2][3] = 4;
    cout << arr[2][3];

return 0;
}