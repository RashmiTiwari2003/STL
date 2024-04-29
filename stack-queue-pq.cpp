#include <bits/stdc++.h>
using namespace std;

int main()
{
    // stack<int> st;
    // st.push(1);
    // st.push(2);
    // st.push(3);
    // st.push(4);
    // st.emplace(5);

    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // stack <int> st1;
    // st1.swap(st);
    // cout<<st1.top()<<endl;
    // cout<<st.empty()<<endl;
    // // while(!st.empty())
    // // {
    // //     cout<<st.top()<<" ";
    // //     st.pop();
    // // }

    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

    // q.back() += 5;

    // cout<< q.back()<<endl;
    // cout<< q.front()<<endl;
    // q.pop();
    // cout<<q.front()<<endl;

    // while(!q.empty())
    // {
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }

    // priority_queue<int> pq;
    // pq.push(5);
    // pq.push(2);
    // pq.push(8);
    // pq.emplace(10);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top()<<endl;
    // priority_queue<int> p(pq);
    // while(!p.empty())
    // {
    //     cout<<p.top()<<" ";
    //     p.pop();
    // }
    // cout<<endl;
    // priority_queue<int,vector<int>,greater<int>> P;
    // P.push(5);
    // P.push(2);
    // P.push(8);
    // P.push(10);
    // cout<<P.top()<<endl;
    // while(!P.empty())
    // {
    //     cout<<P.top()<<" ";
    //     P.pop();
    // }
    return 0;
}