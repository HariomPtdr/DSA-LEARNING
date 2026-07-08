#include<iostream>
using namespace std;
int main(){
    vector<int> arr = {1,3,5,8,5,3,7,9};
    for(int i = 1; i < arr.size(); i++){
        arr[i] += arr[i-1];
    }
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " " ;
    }
}