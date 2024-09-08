

   
    
  
    

   

    


    
    

// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

int main() {
  string word;
  cin>>word;
  stack<char>st;
  for(int i=0;i<word.size();i++){
      if(  st.size()>0 && st.top()==word[i]   ){
          st.pop();
      }
      else{
          st.push(word[i]);
      }
  }
  if(st.size()!=0){
      cout<<"NO";
  }
  else{
      cout<<"YES";
  }
    
}

    







   
