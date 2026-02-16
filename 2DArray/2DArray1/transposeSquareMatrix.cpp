#include <iostream>
using namespace std;
int main() {
    
    int arr[4][4] = {{1,2,3,4},{5,6,7,8},{1,2,3,4},{5,6,7,8}};

    for(int i = 0; i < 4; i++){
        // for (int j = 0; j < 4; j++){//// ess code me galti yah ho rahi hai ki ham code ko traverse karke swap to kar rahe hai lekin ham ese do bar kar rahe hai ek bar upper triangle ke time and ak bar lower triangle ke time to yah vesa ka vesa hi ho ja raha hai so hame only upper tringle me hi swap karna hai lower ko skip karna hai
        for (int j = i; j < 4; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){ 
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}
