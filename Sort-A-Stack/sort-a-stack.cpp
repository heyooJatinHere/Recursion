#include <bits/stdc++.h>
using namespace std;

void insert(stack<int> &st, int temp)
{
    if (st.empty() || st.top() > temp)
    {
        st.push(temp);
        return;
    }
    int x = st.top();
    st.pop();
    insert(st, temp);
    st.push(x);
}

void sort(stack<int> &st)
{
    if (st.size() == 1)
    {
        return;
    }

    int temp = st.top();
    st.pop();
    sort(st);
    insert(st, temp);
}

void print(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {4, 7, 1, 3, 9, 5, 2, 6, 8};
    stack<int> st(deque<int>(nums.begin(), nums.end()));
    cout<<"Stack before sorting: "<<endl;
    print(st);
    sort(st);
    cout<<"Stack after sorting: "<<endl;
    print(st);
}