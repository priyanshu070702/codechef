#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int x1,y1;
        cin>>x1>>y1;
        int x2,y2;
        cin>>x2>>y2;

        if(x1%2==0||x2%2==0||y1%2==0||y2%2==0){
            x1,y1,x2,y2=1;
        }
        else if(x1%2!=0||x2%2!=0||y1%2!=0||y2%2!=0){
            x1,y1,x2,y2=0;
        }

        if(x1==0 && y1==0 && x2==0 && y2==1){
            cout<<"NO"<<endl;
        }

        t--;
    }
}