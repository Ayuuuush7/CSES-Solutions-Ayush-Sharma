#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int N ;
    cin>>N ;
    vector<int> v;
    for(long long int i=0;i<N-1;i++){
        long long int x ;
        cin>>x ;
        v.push_back(x);
    }
    sort(v.begin() , v. end());
    for(long long int i=0;i<N;i++){
        if(v[i]==(i+1)) continue;
        else {
            cout<<i+1<<endl;
            break;
        }
    }
 
}