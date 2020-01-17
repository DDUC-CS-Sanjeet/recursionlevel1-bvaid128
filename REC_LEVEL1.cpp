#include<iostream>
using namespace std;
int gcdrecur(int a ,int b)
{
	if(b==0)
	return a;
	else 
	return gcdrecur(b,a%b);
}
int  gcdit(int a,int b)
{
	int temp=0;
	while(b!=0)
	{
		temp=a;a=b;
		b=temp%b;
	}
	return a;
}
int powrecur(int a,int b)
{
	if(b==0)
	return 1;
	else 
	return a*powrecur(a,b-1);
}
int powit(int a,int b)
{
	int res=1;
	while(b!=0)
	{
	    res*=a;
    	b--;
	}
}
int fibrecur(int n)
{
	if((n==1)||(n==0))
	return n;
	else
	return (fibrecur(n-1)+fibrecur(n-2));
}
void fibit(int n)
{
	int a=0,b=1,c;
	cout<<a<<" "<<b<<" ";
	for(int i=2;i<n;i++)
	{
	  c=a+b;
	  cout<<c<<" ";
      a=b;
	  b=c;
	}
}
int factrec(int n)
{
	if(n==0)
	return 1;
	else
	return n*factrec(n-1);
}
	
int factit(int n)
{ int fact=1;
  for(int i=n;i>0;i--)
  {
 	 fact*=i;
  }
  return fact;
}
	
int main()
{
	int a,b,n,i;
	cout<<"enter the values for finding gcd\n";
	cin>>a>>b;
	int gcd1=gcdrecur(a,b);
	int gcd2=gcdit(a,b);
	cout<<"gcd by recursion "<<gcd1<<"\n"<<"gcd by iteration "<<gcd2<<endl;
	cout<<"\nenter values for power function\n";
	cin>>a>>b;
	int pow1=powrecur(a,b);
	int pow2=powit(a,b);
	cout<<"power by recursion "<<pow1<<"\npower by iteration "<<pow2<<endl;
	cout<<"\nenter input for fibonacci function\n";
	cin>>n;
	fibit(n);
	cout<<endl; 
	while(i<n)
	{cout<<" "<<fibrecur(i);
	i++;
	}
	cout<<"\nenter input for factorial function\n";
	cin>>n;
	int fact1=factrec(n);
	int fact2=factit(n);
	cout<<" factorial by recusrion "<<fact1<<" \nfactorial by iteration "<<fact2<<" "<<endl;
	return 0;
}	
	

