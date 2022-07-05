#include<iostream>
using namespace std;

int main(){
    int T;
    int X,Y,D;
    cin>>T;
    while(T!=0){
        cin>>X>>Y>>D;
        if(X-Y<=D){
            cout<<"YES"<<endl;
        }
        else if(X-Y>=D){
            cout<<"NO"<<endl;
        }
        T--;

    }
}