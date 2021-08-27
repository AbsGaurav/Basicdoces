#include <iostream>
using namespace std;

int a,b,c,d,e,f;
int olit(int n)
{
    while(n>0)
    {
        cin>>a>>b>>c>>d>>e>>f;
        if((a+b+c)>(d+e+f))
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"2"<<endl;
    }
        n--;
    }
    
}

int main() 
{
	int n;
	cin>>n;
	olit(n);
	return 0;
}
