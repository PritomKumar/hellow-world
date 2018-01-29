#include<iostream>
#include<queue>
#include<vector>

using namespace std;

struct Compare{
    bool operator()(const int & a,const int & b)
    {
        return a > b;
    }
};
int main(){

    int n;

    cin >> n;

    priority_queue<int,vector<int>,Compare> q;

    queue <int> t;
    for(int i=0;i<n;i++){
        int l;
        cin >> l;
        q.push(l);
    }
    int sum = q.top();
    int sum2=0;
    int p;

    for(int i= 0;!q.empty() ;i++){
        q.pop();

        sum = sum + q.top();
        t.push(sum);
        if(q.size()==1) break;
       // cout << sum <<endl;
    }

    for(int i=0 ;!t.empty() ;i++){
        sum2 = sum2 + t.front();
        t.pop();

    }
    cout << sum2 <<endl;

}
