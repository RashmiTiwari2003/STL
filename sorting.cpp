#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={1,3,2,5,11,9};
    // for(int i=0;i<6;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // sort(arr,arr+6);
    // for(int i=0;i<6;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    // vector <int> v={1,3,2,5,9,11};
    // for(auto it = v.begin();it!=v.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;
    // sort(v.begin(),v.end());
    // for(auto it = v.begin();it!=v.end();it++)
    // {
    //     cout<<*it<<" ";
    // }
    // cout<<endl;

    string s="312";//always start with sorted string
    sort(s.begin(),s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    int max=*max_element(arr,arr+6); //max_element returns address
    cout<<max<<endl;
    int min=*min_element(arr,arr+6);
    cout<<min<<endl;
    return 0;
}