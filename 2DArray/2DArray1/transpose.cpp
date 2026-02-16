#include <iostream>
using namespace std;
int main() {
    
    int arr[2][4] = {{1,2,3,4},{5,6,7,8}};
    int t[4][2];

    // for(int i = 0; i < 4; i++){
    //     for (int j = 0; j < 2; j++){ // change the column with row dont change the value 
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
        
    // }

    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 4; j++){ 
            t[j][i] = arr[i][j];
        }
    }
    for(int i = 0; i < 4; i++){
        for (int j = 0; j < 2; j++){ 
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}
