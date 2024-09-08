// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main() {
  stack<char>st1;
  stack<char>st2;
  string a,b;cin>>a>>b;
  for(int i=0;i<a.size();i++){
      if(a[i]=='#' && !st1.empty())
        st1.pop();
      else 
      st1.push(a[i]);
  }
  
  for(int i=0;i<b.size();i++){
      if(b[i]=='#' && !st2.empty())
        st2.pop();
      else 
      st2.push(b[i]);
  }
  if(st1.size()!=st2.size()){
      cout<<"NO";
  }
  else{
      bool check=true;
      while(!st1.empty()){
          if(st1.top()!=st2.top()){
              cout<<"NO";
              check=false;
              break;
          }
          st1.pop();
          st2.pop();
      }
      if(check){
          cout<<"YES";
      }
  }
    
}

   
    
  
    

   

    


    
    



    







   
