#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v(5, 20);
    vector <int> v2(v);
    v.push_back(2);
    
    for (vector <int> :: iterator it = v.begin();it !=v.end();it++)
    {
        cout<<*it<<" ";
    }
    // vector <int> :: iterator it = v.rbegin();
    auto it = v.rbegin();
    cout<<endl;
    cout<<*(it+3)<<endl;

    v.erase(v.begin(),v.end()-1);
    for (auto it : v)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    v.insert(v.begin(),5);
    v.insert(v.end(),3,10);
    for (auto it : v)
    {
        cout<<it<<" ";
    }
    v.pop_back();
    v.erase(v.begin()+2,v.end());
    cout<<endl;
    for (auto it : v)
    {
        cout<<it<<" ";
    }
    vector <int> copy={2,4,6};
    v.insert(v.end(),copy.begin(),copy.end());
    cout<<endl;
    for (auto it : v)
    {
        cout<<it<<" ";
    }
    
    //doubly linked list for list & singly linked list is maintained for a vector
    list <int> ls;
    ls.push_back(2);
    ls.emplace_front(9);
    ls.emplace_back(5);
    ls.push_front(3);
    cout<<endl;
    for (auto it : ls)
    {
        cout<<it<<" ";
    }
    ls.pop_front();
    ls.pop_back();
    cout<<endl;
    for (auto it : ls)
    {
        cout<<it<<" ";
    }
    return 0;
}