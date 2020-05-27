#include<iostream>
using namespace std;
int main()
{
	int a[3][3], b[3][3], c[3][3],i, j, k=0;
 	for(i=0;i<3;i++)
 	   {
 	      for(j=0;j<3;j++)
 	        {
	               cin>>a[i][j];
 	        }
 	   }
 	 for(i=0;i<3;i++)
 	   {
 	           for(j=0;j<3;j++)
 	           {
 	               cin>>b[i][j];
	           }
	   }
	   for(int m=0;m<3;m++)
 	    {
 	        for(int n=0;n<3;n++)
	        {
 	            c[m][n]=a[m][0]*b[0][n]+a[m][1]*b[1][n]+a[m][2]*b[2][n];
	        }
 	    }
	    for(i=0; i<3; i++)
	    {
 	        for(j=0; j<3; j++)
	        {
	            cout<<c[i][j]<<" ";
	            k++;
 	            if(k%3==0)
	            cout<<endl; 
	        }
 	    }
 	    return 0;
}