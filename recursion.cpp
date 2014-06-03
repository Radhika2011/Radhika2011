#include<iostream.h>
#include<conio.h>
#include<string.h>
int r=1,sum=0;
void ascending(int n)
{cout<<" "<<r++;
int k=n-1;
if(k)
ascending(k);}
void descending(int n)
{cout<<" "<<n;
int k=n-1;
if(k)
descending(k);
}
int isprime(int n, int k)
{if(n<2)
return 0;
else if(k==1)
return 1;
else
{if(n%k==0)
{return 0;
}
else return isprime(n,k-1);
}}
void sumofdigits(int n)
{if(!n)
cout<<"\nMethod 1:The sum of the digits is "<<sum;
else
{sum+=n%10;
sumofdigits(n/10);
}}
void sumofdigits2(int n,int sum)
{if(!n)
cout<<"\nMethod 2:The sum of the digits is "<<sum;
else
{sum+=n%10;
sumofdigits2(n/10,sum);
}}
int sum1=0;
void sum_of_array(int A[],int size)
{if(!size)
cout<<"\nMethod 1:The sum is"<<sum1;
else
{sum1+=A[size-1];
size--;
sum_of_array(A,size);
}}
void sum_of_array2(int A[],int size,int sum)
{if(!size)
cout<<"\nMethod 2: The sum is"<<sum;
else
{sum+=A[size-1];
size--;
sum_of_array2(A,size,sum);
}}
void reverse(char *p,char *q)
{if(p<q)
{char temp=*p;
*p=*q;
*q=temp;
reverse(p+1,q-1);}
}
void towersofhanoi(int num,char from, char to, char temp)
{
if(num==1)
{cout<<"\nMove disk 1 from"<<from<<" to "<<to;
return;
}
else
{towersofhanoi(num-1,from,temp,to);
cout<<"Move disk"<<num<<" from "<<from<<" to "<<to;
towersofhanoi(num-1,temp,to,from);
}}
void main()
{int n;int A[10],size,num; char B[20],X='X',Y='Y',Z='Z';
cout<<"\t\t\tRECURSION\n";
cout<<"Enter n";
cin>>n;
cout<<"\nIn ascendind order";
ascending(n);
cout<<"\nIn descending order";
descending(n);
int r=isprime(n,n-1);
if(r)
cout<<"\n"<<n<<" is prime";
else cout<<"\n"<<n<<" is not prime";
sumofdigits(n);
sumofdigits2(n,0);
cout<<"\nEnter the size of the array"; cin>>size;
cout<<"\nEnter the array";
for(int i=0;i<size;i++)cin>>A[i];
sum_of_array(A,size);
sum_of_array2(A,size,0);
cout<<"\nEnter the string";
cin>>B;
reverse(B,B+(strlen(B)-1));
cout<<"\nAfter reversal "<<B;
cout<<"\Towers of Hanoi Problem";
cout<<"\nEnter no. of disks";cin>>num;
cout<<"The sequence of moves is";
towersofhanoi(num,X,Z,Y);
getch();}
