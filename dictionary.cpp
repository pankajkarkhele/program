#include<iostream>

using namespace std;
class dictionary
{
int n,i,j;
public:
struct dict
{
char keyword[30][30];
char meaning[30][30];
}d;

void insert(void)
{
cout<<"Enter the number of words you want to display";
cin>>n;
for(i=0;i<=n-1;i++)
{
cout<<"\nEnter the keyword";
cin>>d.keyword[i];
cout<<"\nEnter the meaning";
cin>>d.meaning[i];
}

void display(void)
{
cout<<"\n Display";
for(i=0;i<=n-1;i++)
{
cout<<"\n The keyword is "d.keyword[i];
cout<<"\n The meaning is "d.meaning[i];
}
}





