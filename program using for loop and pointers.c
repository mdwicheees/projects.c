#include<stdio.h>
int main()
{
int digits[5]={1,2,3,4,5};
int *ptr=digits;
for (int i=0;i<5;i++);
{


printf("%d\n",*(ptr+1));


}
return 0;


}
