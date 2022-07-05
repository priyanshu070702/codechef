
#include <iostream>
using namespace std;

int main() {
	int t,n,x,y;
    cin>>t;
	while(t!=0){
	    cin>>n;
	    cin>>x;
	    cin>>y;
	    
	    if((n+1)*y>=x){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
        t--;
	}
	return 0;
}
