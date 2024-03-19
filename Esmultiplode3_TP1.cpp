#include<bits/stdc++.h>
using namespace std;

bool esmultiplode3(int n);

int main()
{
	int num;
	string msg="no es multiplo";
	cout<<"ingrese un numero"<<endl;
	cin>>num;
	
if(esmultiplode3(num))
{msg="es multiplo";}

cout<<msg<<endl;
return 0;        
}	
bool esmultiplode3(int n)
{
	return n%3==0;
}
