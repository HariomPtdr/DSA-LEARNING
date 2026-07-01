#include<iostream>
using namespace std;
int main(){
  int x = 4;
  float a = 4;
  int * y = &x;
  float * z = &a;
  cout << y << endl;;
  cout << z;
}