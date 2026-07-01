#include<iostream>
using namespace std;

int main(){
   char c = 'a';
   char *ptr = &c;
   cout << ptr << endl;
   cout << (void*)ptr ;

}