#include <iostream>
using namespace std;

int main() {
	int  t;
	cin>>t;
	while (t--){
       int n,k;
	   cin>>n>>k;//*****n=length of the string******** k=no of operations to be performed*****
	   char a[n];
	   for (int i=0;i<n;i++){//takes input of the binary string
	       cin>>a[i];
	   }
    	bool flag=false;
	    int i=0;
        for(int i=0;i<=k && i!=0;i++){//**gives not of bits according to number of operations specified(k)
	        a[i]=~a[i++];      
	    }
	    for(int i=0;i<n/2;i++){//**checks if bits match and form a palindrome 
	        if(a[i]==a[n-1]){
	            flag=true;
	        }n--;
	    }
	    if(true){
	        cout<<"YES"<<endl;
	    }else{
	        cout<<"NO"<<endl;
	    }
    }
	return 0;
}
