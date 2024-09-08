// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
using namespace std;


int main() {
    queue<int>que;
    queue<int>que2;
    for(int i=0;i<5;i++){
        int n;cin>>n;
        que.push(n);
    }
    for(int i=0;i<5;i++){
        int n;cin>>n;
        que2.push(n);
    }
    int cnt=0;
    int limit=1e6;
    while(!que.empty() && !que2.empty()){
        if(cnt>limit){
            cout<<"blin nichya";
           return 0;
        }
        
        if((que.front()-que2.front()>0 ||que.front()-que2.front()==-9) && (que.front()-que2.front()!=9)){
            que.push(que.front());
            que.pop();
            que.push(que2.front());
            que2.pop();
        }
        else{
            que2.push(que.front());
            que.pop();
            que2.push(que2.front());
            que2.pop();
        }
       cnt++; 
    
    }
    
    if(que.empty()){
        cout<<"Nursik "<<cnt;
    }
    else{
        cout<<"Boris "<<cnt;
    }
    }
    







   
