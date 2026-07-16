#include <iostream>
#include <string>
using namespace std;
void caseChange(string ip, string op){
        if(ip.length() == 0){
            cout << op << " ";
            return;
        }
        if(isalpha(ip[0])){
        string op1 = op;
        string op2 = op;
        op1.push_back(tolower(ip[0]));
        op2.push_back(toupper(ip[0]));
        ip.erase(ip.begin()+0);
        caseChange(ip, op1);
        caseChange(ip, op2);
        }
        else{
            string op1 = op;
            op1.push_back(ip[0]);
            ip.erase(ip.begin()+0);
            caseChange(ip, op1);
        }return;
    }
    int main(){
        string s;
        cout << "Enter a string :";
        cin >> s;
        string ip = s;
        string op = "";
        caseChange(ip, op);
    }
    