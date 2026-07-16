#include <iostream>
using namespace std;
void permutation(string ip, string op){
    if(ip.length() == 0) {
        cout << op << " ";
        return;
    }
    string op1 = op;
    string op2 = op;
    op1.push_back('_');
    op1.push_back(ip[0]);
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    permutation(ip, op1);
    permutation(ip, op2);
    return;
}
int main() {
    string ip;
    cout<< "Enter a string : ";
    cin>>ip;
    cout<<endl;
    string op = "";
    op.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    cout<< "Permutation with Spaces : ";
    permutation(ip, op);
}
