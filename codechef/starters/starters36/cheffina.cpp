//To be completed

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t!=0){
        int n;
        cin>>n;
        int s=n/5;
        if(n>=5){
            cout<<(n-s)<<endl;
        }
        else{
            cout<<n<<endl;
        }
        
        t--;
    }
}