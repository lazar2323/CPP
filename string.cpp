#include<iostream>
#include<string.h>

using namespace std;

/*int main() 
{
	int i;
	string a,b;
	cin>>a;
	
	int n = a.length();
	
	b=a;
	
	for(i=0;i<n;i++)
	{
		b[i]=a[n-i-1];
	}	
	
	cout<<b;
} */

/*
void write(string name)
{
	cout<<name<<" Tufekci ";
	
}
int main() 
{
	string str;
	cin>>str;
	write(str);
	return 0;
}*/

/*with output and without input
int sum() 
{
	int a,b;
	cin>>a >>b;
	return a+b;
}
int Mul(int a,int b)
{
	int a,b;
	cin>>a >>b;
	return a*b;
}
int main() 
{
	
	int c=sum();
	cout<<" sum result: "<<c<<endl;
	int m=Mul();
	cout<<m<<endl;
	return 0;
}*/

/*int cross()
{
	int a,b,max;
	cin >>a >>b;
	
	max=a;
	
	if(b>a)
	{
		max=b;
	}
	
	cout<<"Bigger number is "<< max<<endl;
	
	
}
int main()
{
	cross();
}*/

int fak()
{
	int i,n;
	
	int fac=1;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	
	cout<<fac<< endl;
}

int main()
{
	fak();
	
}
	

