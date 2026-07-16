recursion => recurence relation
What is recursion ?
problem = something + subproblem 
function calling itself

why recursion is used ??
to solve the problems

recursion me call ke pahale or baad ki duniya bahut alag hai or yah kahe ki exactly diffrent hai

for example : pay attention on the follwing two examples 

example 1: print 1 to N
void print(int n){
    if(n == 0)return; // base case 
    print (n-1); // recursive call
    cout << n << endl; // kaam 
}
example 2 : print N to 1
void print(int n){
    if(n == 0)return; // base case 
    cout << n << endl; // kaam 
    print (n-1); // recursive call 
}

In both of the examples  we are changing a single line but the out put is changing whole differently

//we take some as the result of that decision the input get automatically smaller
// recursion is input ko chota banana ❌
// we take some as the result of that decision the input get automatically smaller ✅
//for example : ->
// Getting a Job is a big problem and for this we take some decision
//d1 is take a good college -> if this happen problem get smaller 
// d2 do coding and leran recursion and DSA - > problem get more smaller 
// smaller problem solution we already know and the bigger problem can easily solved 


