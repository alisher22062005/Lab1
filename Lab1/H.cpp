// Online C++ compiler to run C++ program online
#include <iostream>
#include<cmath>
#include<vector>
using namespace std;


int main() {
    int num;cin>>num;
    if(num==1 || 0){
        cout<<"NO";
        return 0;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}