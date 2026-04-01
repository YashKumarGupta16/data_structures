#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    cout << "capacity=" << v.capacity() << endl; //memory allocated
     
    v.push_back(1); 
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    cout << v[1] << endl;
    
    cout << v.front()<<endl;
    cout << v.back()<< endl;
    
    v.pop_back();
    for(int i=0;i<=v.size()-1;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> a(5,1);
    for(int i=0;i<a.size();i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}