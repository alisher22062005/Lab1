// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
#include<vector>
using namespace std;

void Primes(int num){
    vector<bool>vc(1000000,true);
    for(int i=2;i<=sqrt(vc.size());i++){
        if(vc[i]){
            for(int j=i*i;j<=vc.size();j+=i){
                vc[j]=false;
            }
        }
    }
    vector<int>vc2;
    for(int i=2;i<vc.size();i++){
        if(vc[i]){
            vc2.push_back(i);
        }
    }
    cout<<vc2[num-1];
    return;
    
}
int main() {
    int num;cin>>num;
    Primes(num);

    return 0;
}







   
