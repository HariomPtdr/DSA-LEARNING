#include <iostream>
#include <stack>
using namespace std;


void insert(stack<int> &st, int temp){
    if(st.size() == 0){ // stack kahali yani kuch nahi to apun ka temp akela ko push kar dene ka
        st.push(temp);
        return;
    }
    int val = st.top();// khali nahi to top ko store karke pop kar dene ka 
    st.pop();
    insert(st, temp);// apan ye insert kar rahe hai to ye base tak jayega or base kahli milega vaha last wala insert ho jayenga  
    st.push(val);// and fir ye valpush kar dene ka to temp niche aa jayega bas ese sare recursivly niche aa jayenge or stack ulta ho jayega 
    return;
}

void reverse(stack<int> &st){
    if(st.size() == 1) return;// stack me if 1 element hai to already reverse hai 
    int temp = st.top();
    st.pop();
    reverse(st);
    insert(st, temp);// stack ke top elemnt ko last me insert karayenge to stck reverse hota jayenga 
}

int main(){
   stack<int> st;
    st.push(0);
    st.push(6);
    st.push(3);
    st.push(2);
    st.push(5);
    // Before reverse
    while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
    }
    cout << endl;

    st.push(0);
    st.push(6);
    st.push(3);
    st.push(2);
    st.push(5);

    reverse(st);
    // After reverse
    while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
    }
}