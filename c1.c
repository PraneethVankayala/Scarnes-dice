/* 
  Name:Praneeth
  Date:28/02/18
*/

#include<stdio.h>
int large(int);
int main()
{
  int n,f;
  printf("Enter the number to find largest of digits in number:");
  scanf("%d",&n);
  
  f=large(n);
  printf("Largest digit in an number is %d\n",f);
  
  return 0;
}

int large(int n)
{
  int c,s=0;
  while(n>0)
  {
    c=n%10;
    if(c>s)
    {
      s=c;
    }
   else
   {
    s=s;
   }
  n=n/10;
  }
return s;
}
