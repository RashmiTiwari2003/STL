#include <bits/stdc++.h>
using namespace std;

int main()
{
    // set<int, greater<int>> st;
    // st.insert(1);
    // st.insert(7);
    // st.insert(2);
    // st.insert(2);
    // st.insert(9);
    // for (auto it=st.begin();it!=st.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // auto it =st.find(7);
    // st.erase(it);
    // for (auto it=st.begin();it!=st.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // auto it =st.lower_bound(9)
    // auto it =st.upper_bound(1)

    // multiset <int> ms;
    // ms.insert(1);
    // ms.insert(1);
    // ms.insert(1);

    // for (auto it = ms.begin();it!=ms.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    // cout<<ms.count(1)<<endl;
    // // ms.erase(1);
    // ms.erase(ms.find(1));
    // cout<<ms.count(1)<<endl;

    // unordered_set<int> st;
    // st.insert(2);
    // st.insert(6);
    // st.insert(11);
    // st.insert(0);
    // st.insert(2);
    // st.insert(5);
    // st.insert(6);
    // for (auto it=st.begin();it!=st.end();it++)
    // {
    //     cout<<*it<<" ";
    // }

    set <pair<int,int>> st;
    st.insert({1,3});
    st.insert({1,5});
    st.insert({1,9});
    st.insert({1,9});
    st.insert({9,1});
    st.insert({1,1});
    for (auto it=st.begin();it!=st.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}