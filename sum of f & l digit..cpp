#include <bits/stdc++.h>
using namespace std;

void summer(int T)
{
	int N, f=0, l;
	
    for(int i=0; i<T; i++)
    {
        cin>>N;
        l=N;
        while(N>=10)
        {
        N/=10;
        f=N;
        }
        
        l=(l%10);
        
        cout<<(f+l)<<endl;
    }
}

int main() 
{
	int T;
	cin>>T;
	    summer(T);
	return 0;
}
