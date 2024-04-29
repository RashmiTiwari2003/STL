#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={1,4,5,6,10};
    auto it=lower_bound(arr,arr+5,5);
    cout<<*it<<endl;
    it=upper_bound(arr,arr+5,5);
    cout<<*it<<endl;

    // vector<int> v={1,4,5,6,10};
    // auto it=lower_bound(v.begin(),v.end(),7);
    // cout<<*it<<endl;
    // it=upper_bound(v.begin(),v.end(),5);
    // cout<<*it<<endl;
    return 0;
}