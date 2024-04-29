#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,int> mp;
    map <pair<int,int>,int> mpp;
    mp[1]=2;
    mp.insert({2,4});
    mp.emplace(3,5); // emplace pairss automatically whereas insert doesnot
    // mp.emplace(7,6);
    mp[7]=6;
    mpp[{2,3}]=10;
    for(auto it :mp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<mp[5]<<endl;
    auto it = mp.lower_bound(2);
    cout<<it->second<<endl;
    it = mp.upper_bound(2);
    cout<<it->second<<endl;
    return 0;
}