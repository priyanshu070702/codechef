#include<iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t!=0){

        int n,x;
        cin>>n>>x;

        if(n<=6){
            cout<<x<<endl;
        }
        else{
            int temp=n/6;
            int rev=temp*x;
            if(n%6==0){
                cout<<rev<<endl;
            }
            else{
                cout<<rev+x<<endl;
            }
        }







        t--;
    }
}