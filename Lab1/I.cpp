#include <iostream>
#include <queue>
#include <string>

using namespace std;

string determineLeader(int n, string v){
    queue<int> sakayanagi, katsuragi;

    for(int i = 0; i < n; ++i){
        if(v[i] == 'S'){
            sakayanagi.push(i);
        } else {
            katsuragi.push(i);
        }
    }

    while(!sakayanagi.empty() && !katsuragi.empty()){
        int s = sakayanagi.front();
        int k = katsuragi.front();
        sakayanagi.pop();
        katsuragi.pop();

        if(s < k){
            sakayanagi.push(s + n);
        } else{
            katsuragi.push(k + n);
        }
    }
    if(sakayanagi.empty()){
        return "Katsuragi";
    }
    else{
        return "Sakayanagi";
    }
}

int main(){
    int n;
    cin >> n;

    string v;
    cin >> v;

    cout << determineLeader(n, v) << endl;

    return 0;
}