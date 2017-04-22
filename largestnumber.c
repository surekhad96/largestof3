#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
  printf("\n %d is the largest number,a");
}
  else if((b>a)&&(b>c))
  {
    printf("\n %d is the largest number,b");
  }
  else
  {
    printf("%d is the largest,c");
  }
  return 0;
  getch();
}
