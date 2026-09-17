#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b,c,add,subt,mult,div,power;
	cout<<"Note:- This calculator is a basic performer\n";
	cout<<"enter 1 for addition\n 2 for subtraction\n 3 for multiplication\n 4 for division\n 5 for power\n ";
	cin>>a;
	cout<<endl;
	cout<<"Enter first and second number\n";
	cin>>b>>c;
	if(a==1){
		add=b+c;
	cout<<add;
	}

else if(a==2){
subt=b-c;
	cout<<subt;
	}
	
else if(a==3){
	mult=b*c;
cout<<mult;
	
	}
else if(a==4){div=b/c;
	cout<<div;
}
if (a==5){
power=pow(b,c);
cout<<power;
	
}

	
	}