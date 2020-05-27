#include<iostream>
#include<math.h>
using namespace std;
void py(int b, char a)
{
	
	if(b==0)
	cout<<"No Answer"<<endl;
	else if(b=56)
	cout<<a;
}
int main()
{
	char a[8] ;
	int i, j, k,b=462;
	for(i=0;i<8;i++)
	{
		cin>>a[i];
		if(a[i]=='*')
			k=i;
	}
	for(i=0;i<8;i++)
	  {
	    b-=int(a[i]);
	  }
	    a[k]=b;
	for(i=1; i<9; i++)
    {
    	for(j=i+1; j<9; j++)
    	{
    		if((i+a[i-1])==(j+a[j-1])||(i-a[i-1])==(j-a[j-1]))
    		{
    			b=0;
				break; 
    		}
		}
	}
	py(b ,a[k]);
}


  
  

