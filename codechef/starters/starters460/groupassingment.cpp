#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t!=0){
        int n,p; 
        cin>>n;
        /*int P[10000];
        for(int i=0;i<n;i++){
            cin>>P[i];
        }

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(P[i]==P[j]){
                    count++;
                    x=P[i];
                }
            }

            
            
        }
        cout<<x<<endl;
        if(count==x){
            cout<<"YES"<<endl;
        }
        else if(count!=x){
            cout<<"NO"<<endl;
        }*/

        unordered_map<int, int> a;
        for(int i=0;i<n;i++){
            cin>>p;
            a[p]++;
        }
        bool flag=false;
        for(auto item:a){
            if(item.second%item.first!=0){
                flag=true;
                break;
            }
            else{
                continue;
            }

        }
        if(flag){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        
        
        
        t--;
    }
}