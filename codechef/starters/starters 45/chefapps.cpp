#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t!=0){
        int s,x,y,z;
        cin>>s>>x>>y>>z;

       /* if((x+y<=s)&&(s-x-y>z)){
            cout<<"1"<<endl;
        }
        else if((x+y<=s)&&(s-x-y==0)){
            cout<<"2"<<endl;
        }
        else if((x+y+z<=s)){
            cout<<"0"<<endl;
        }*/

        if((x+y+z<=s)){
            cout<<"0"<<endl;
        }

        else if(x+y+z>s){
            if(s==z){
                cout<<"2"<<endl;
            }
            else if(s-x-y==0&&z>0){
                cout<<"1"<<endl;
            }
            else if(s-x-y<z){
                cout<<"1"<<endl;
            }
            
    }

        /*else if((x+y<=s)&&(s-x-y<z)){
            cout<<"1"<<endl;
        }
        else if((x+y<=s)&&(s-x-y==0)){
            cout<<"2"<<endl;
        }*/


        t--;
    }
}