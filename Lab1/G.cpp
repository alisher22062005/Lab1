// Online C++ compiler to run C++ program online
#include <iostream>
#include<queue>
#include<vector>
#include<cmath>
using namespace std;

vector<int>Primes(int num){
    vector<bool>vc(100000,true);
    vc[0]=false;vc[1]=false;
    for(int i=2;i<=sqrt(vc.size());i++){
        if(vc[i]){
            for(int j=i*i;j<=vc.size();j+=i){
                vc[j]=false;
            }
        }
    }
    vector<int>primes;
    for(int i=2;i<vc.size();i++){
        if(vc[i]){
            primes.push_back(i);
           // cout<<i<<" ";
        }
    }
    return primes;
}
bool isPrime(int i){
    if (i==1){
        return false;
    }
    for(int j=2;j<=sqrt(i);j++){
        if(i%j==0){
            return false;
        }
    }
    return true;
}

int main() {
   int num;cin>>num;
   vector<int>p;
   vector<int>result;
   p=Primes(num);
   int index=1;
   for(int i=1;i<p.size();i++){
      if(isPrime(i)){
          result.push_back(p[i-1]);
      }
   }
  cout<<result[num-1];
  
}