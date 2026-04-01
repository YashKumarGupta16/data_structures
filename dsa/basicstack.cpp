#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(3);     //push
    s.push(4);

    s.pop();    //pop

    cout << s.top()<< endl;  //peek

    if(s.empty()){
        cout << "stack empty";
    }
    else{
        cout << "stack not empty" << endl;
    }

    cout << s.size();
    return 0;
}
