// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main() {
  int num;cin>>num;
  queue<int>que;
  stack<int>st;
  stack<int>st2;
  for(int i=0;i<num;i++){
      int n;cin>>n;
      que.push(n);
  }
 // st.push(que.front());
  while(!que.empty()){
      bool check=true;
      while(!st.empty()){
      if(que.front()>=st.top()){
          cout<<st.top()<<" ";
          int k=que.front();
          st.push(k);
          que.pop();
          check=false;
          break;
      }
      else{
          st.pop();
      }
      }
      if(check){
          cout<<-1<<" ";
          int k=que.front();
          st.push(k);
          que.pop();
      }
  }
    
}


   
    
  
    

   

    


    
    



    







   
