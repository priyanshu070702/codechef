#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t!=0){
        int x,y,z;
        cin>>x>>y>>z;

        int a;

        a=x/y;

        
        if(x>y){
            if(x%y==0){
                a=x/y;
                cout<<z*a<<endl;
            }
            else if(x%y!=0){
                a=x/y;
                cout<<z*(a+1)<<endl;
            }
        }

        else if(x==y){
            cout<<z<<endl;
        }

        else if(x<y){
            cout<<z<<endl;
        }


        


        t--;
    }
}