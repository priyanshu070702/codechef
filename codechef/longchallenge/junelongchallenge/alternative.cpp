#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t!=0){
        int a,b;
        cin>>a>>b;

        while(a==b||a>b){
            /*if(a%2!=0){
                a=a+1;
                cout<<a<<endl;
                if(a%2==0){
                    a=a+2;
                    cout<<a<<endl;
                }
            }
            else if(a%2==0){
                a=a+2;
                cout<<a<<endl;
                if(a%2!=0){
                    a=a+1;
                    cout<<a<<endl;
                }
            }*/
            a++;
            cout<<a<<endl;
            if(a==b){
                break;
            }
            else
            a=a+2;
            cout<<a<<endl;
        }
        if(a==b){
            cout<<"YES"<<endl;
        }
        else if(a!=b){
            cout<<"NO"<<endl;
        }


        t--;
    }
    
}