#include<iostream.h>
#include<conio.h>
/*
This is the modified version of last uploaded progam of mine where the program
solve 2 variable linear equation, but in this section the program can solve
3 variable linear equation with logically testing the values of each variable,

let for example--
3x+3y+3z=27-----(i)
5x+6y+7z=56-----(ii)
3x+4y+z=22------(iii)
after running the game you will get the value as,
x=2
y=3
z=4
**You may use Gaussian or Cramers rule to solve this equations and try for
the solution.
*/
void sol(int a[3][4]);
int max(int a[3][4]);
int MAX;
void main()
{
int a[3][4],i,j;
char e='X';
clrscr();
cout<<"\nEnter The Coefficients And Constants Of Linear Equations\n";
for(i=0;i<3;i++)
{
cout<<"\nEnter The Coefficient And Constant Of Equation:"<<i+1<<endl;
for(j=0;j<4;j++)
{
if(j<3)
cout<<e<<":";
if(j==3)
cout<<"Constant-"<<i+1<<":";
cin>>a[i][j];
e++;
}
e='X';
}
MAX=max(a);
sol(a);
getch();
}
int max(int a[3][4])
{
int m;
if(a[0][3]>a[1][3] && a[0][3]>a[2][3])
m=a[0][3];
else if(a[1][3]>a[0][3] && a[1][3]>a[2][3])
m=a[1][3];
else
m=a[2][3];
return m;
}
void sol(int a[3][4])
{
int i,j,k,x=1,y=1,z=1;
i=1;
j=1;
k=1;
clrscr();
cout<<"\nYour Equation Are-\n";
cout<<endl<<a[0][0]<<"x + "<<a[0][1]<<"y + "<<a[0][2]<<"z = "<<a[0][3];
cout<<endl<<a[1][0]<<"x + "<<a[1][1]<<"y + "<<a[1][2]<<"z = "<<a[1][3];
cout<<endl<<a[2][0]<<"x + "<<a[2][1]<<"y + "<<a[2][2]<<"z = "<<a[2][3];
for(i=1;i<=MAX;i++)
{
for(j=1;j<=MAX;j++)
{
for(k=1;k<=MAX;k++)
{
if(a[0][0]*i+a[0][1]*j+a[0][2]*k==a[0][3] && a[1][0]*i+a[1][1]*j+a[1][2]*k==a[1][3] && a[2][0]*i+a[2][1]*j+a[2][2]*k==a[2][3] )
{
x=i;
y=j;
z=k;
break;
}
}
}
}
cout<<endl<<"\nThus, The Value Of Literals Are\n";
cout<<endl<<"X:"<<x<<endl<<"Y:"<<y<<endl<<"Z:"<<z;
}
