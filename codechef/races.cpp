#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    int X,Y,A,B;
    
    while(T!=0){
        cin>>X>>Y>>A>>B;
        
        if((A!=X||B!=X)&&(A!=Y||B!=Y)){
            cout<<"2"<<endl;
        }
        else if((A==X||B==X)&&(A!=Y||B!=Y)){
            cout<<"1"<<endl;
        }
        else if((A!=X||B!=X)&&(A==Y||B==Y)){
            cout<<"1"<<endl;
        }
        else if((A==X||B==X)&&(A==Y||B==Y)){
            cout<<"0"<<endl;
        }
        T--;
    }
    
	// your code goes here
	return 0;
}
