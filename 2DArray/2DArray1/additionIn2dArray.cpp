#include <iostream>
using namespace std;
int main() {
    int a[2][4] = {{1,2,3,4},{1,2,3,4}};
    int b[2][4] = {{1,2,3,4},{1,2,3,4}};
    
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            b[i][j] += a[i][j];
        }
    }
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 4; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}