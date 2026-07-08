#include<iostream>
using namespace std;
int main(){
    int *ptr = new int;
    *ptr = 5;

    cout << ptr << endl;  
    cout << *ptr << endl; // value assign

    float *ptr1 = new float;
    *ptr1 = 3.7;// flaot value assign to the pointer 

    cout << ptr1 << endl; 
    cout << *ptr1 << endl;

    int n = 10;
    int *ptr2 = new int [n]; // pointer array
    int *start = ptr2;

    for(int i = 0;  i < n; i++){
        *ptr2 = i+1;
        ptr2 = ptr2 + 1;
    }
    ptr2 = start;   // reset to the first address 
     for(int i = 0;  i < n; i++){
       cout<< *ptr2 << endl;
       ptr2 = ptr2 + 1;
    }

    delete[] start;  


}