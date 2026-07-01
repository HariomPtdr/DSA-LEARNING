#include<iostream>
using namespace std;
void inc(int *ptr ){
    (*ptr)++;
}

int main(){
    int num = 10;
    int temp = num;
    cout << temp << endl;
    inc(&num);
    cout << num << endl;
   
}