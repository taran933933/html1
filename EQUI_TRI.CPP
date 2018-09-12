#include<iostream.h>
#include<conio.h>
#include<process.h>


void triangle(int arr[3])
{  int flag=0;
   int i;
   for(i=0;i<3;i++)
   {
	if( (arr[i]<1) || (arr[i]>100) )
	 {	cout<<"Invalid input";
		flag=1;
		exit(0);
	 }
   }
	if(flag==0)
	{
		if(arr[0] == arr[1] && arr[0] == arr[2] )
			cout<<"\t EQUILATERAL TRIANGLE";
		else if( (arr[0]==arr[1] && arr[0]!=arr[2] )||( arr[1]==arr[2] && arr[1]!=arr[0] ) || ( arr[2] == arr[0] && arr[2] != arr[1]) )
			cout<<"\t ISOSCELES TRIANGLE";
		else
			cout<<"\t SCALENE TRIANGLE";
	}
}

void main( )
{
	int i, arr[3],eqi1[3],eqi2[3],eqi3[3];
	clrscr();

cout<<"\t \t EQUIVALENCE CLASS TESTING OF TRIANGLE";
cout<<"\n\t\ tEnter the sides of trinagle";

for(i=0;i<3;i++)
cin>>arr[i];

cout<<"\n a \t b \t c \t output";
eqi1[0]=50;	eqi1[1]=-2;	eqi1[2]=200;
eqi2[0]=50;	eqi2[1]=-5;	eqi2[2]=300;
eqi3[0]=50;	eqi3[1]=-7;	eqi3[2]=400;

for(i=0;i<3;i++)
{
	cout<<"\n"<<arr[i]<<"\t"<<eqi2[i]<<"\t"<<eqi3[i];
	triangle(arr);
}
for(i=0;i<3;i++)
{
	cout<<"\n"<<eqi1[i]<<"\t"<<arr[i]<<"\t"<<eqi3[i];
	triangle(arr);
}
for(i=0;i<3;i++)
{
	cout<<"\n"<<eqi1[i]<<"\t"<<eqi2[i]<<"\t"<<arr[3];
	triangle(arr);
}
	getch();
}
