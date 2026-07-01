#include<iostream>
using namespace std;
int main(){
  int x = 10;
  int * p = &x;
  cout << x << endl;;
  *p = 20;
  cout << x << endl;
  x = 30;
  cout << x << endl;
  cout << *p ;
}