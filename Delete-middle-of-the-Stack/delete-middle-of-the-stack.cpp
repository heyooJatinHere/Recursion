#include <bits/stdc++.h>
using namespace std;

void deletekth(stack<int> &st, int k){
    if(k==1){
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    deletekth(st,k-1);
    st.push(temp);
}

void print(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    vector<int> nums = {4, 7, 1, 3, 9, 5, 2, 6, 8};
    stack<int> st(deque<int>(nums.begin(), nums.end()));
    int k = 5;
    cout << "Before deletion: " << endl;
    print(st);
    deletekth(st, k);
    cout << "After deletion: " << endl;
    print(st);
}