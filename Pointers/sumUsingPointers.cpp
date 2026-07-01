#include<iostream>
using namespace std;
// void swap (int *x, int *y){
//     int temp = *x;
//     *x = *y;
//     *y = temp;
// }
// int main(){
//     // int a = 10;
//     // int b = 20;
//     // int *x = &a;
//     // int *y = &b;
//     // cout << *x + *y;

// int x = 10;
// int y = 20;
// swap(&x, &y);
// cout << x << " " << y <<  endl;


int main(){
    int x = 10;
    int y = 20;

    int * a = &x;
    int * b = &y;

    cout << *a + *b;
    


}