#include<iostream>
#include<cstring>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
#include<deque>
#include<utility>
using namespace std;


int main() {
  int num;cin>>num;
  while(num--){
    int size;cin>>size;
    vector<int>vc;
    deque<int>deq;
    while(size!=0){
        vc.push_back(size);
        size--;
    }
    for(int i=0;i<vc.size();i++){
        deq.push_front(vc[i]);
        int rotate=deq.front()%deq.size();
        while(rotate!=0){
            deq.push_front(deq.back());
            deq.pop_back();
            rotate--;
        }
    }
    for(int i:deq){
        cout<<i<<" ";
    }
    cout<<"\n";
  }
}

   
    
  
    

   

    


    
    



    







   
