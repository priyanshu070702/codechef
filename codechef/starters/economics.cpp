#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    int N;
    int i,j;
    int count;
    int A[1000], B[1000];
     
     while(T!=0){
         count=0;
        cin>>N;

        for(i=0;i<N;i++){
            cin>>A[i];
        }
        for(j=0;j<N;j++){
            cin>>B[j];
        }
        for(i=0,j=0;i<N,j<N;i++,j++){
            if(A[i]==B[j]){
                count++;
            }
        }

            cout<<count<<endl;

            T--;
        }
         
return 0;

     }
