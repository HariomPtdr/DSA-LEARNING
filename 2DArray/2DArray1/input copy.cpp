#include <iostream>
using namespace std;
int main(){
    int m ;
    cout << "Enter the number of rows "<< endl;
    cin >> m;
    int n;
    cout << "Enter the number of columns "<< endl;
    cin >> n;

    int arr[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}


//a question come arround in my mind that is i forgot why ?? 
// a few hour lather 
// i got the question 
// question is write a code to find the next number means you have given a number you to find the just greater number of that number that is made with the combination of that numbers if the number is already greatest then print smallest number
