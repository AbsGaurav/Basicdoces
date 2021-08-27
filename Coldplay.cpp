#include <iostream>
using namespace std;

void cdprt(int M,int N)
    {
    	int n;
        n = M/N;
        cout<<n<<endl;
    }

int main() 
{
	int T,M,N;
	
	cin>>T;
	
	while(T--) 
	{
	    cin>>M >>N;
	    
	    cdprt(M,N);
	}
	return 0;
}

