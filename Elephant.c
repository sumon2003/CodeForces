#include<stdio.h>
#include<math.h>
int main()
{
 int num,step_num;
 scanf("%d",&num);
 if(num%5==0)
 {
  step_num = (num/5);
  printf("%d\n",step_num);
 }
 else if(num%5 != 0){
  step_num = (num/5)+1;
  printf("%d",step_num);
 }
 else if(num>=1 && num<=5){
  printf("1\n");
 }
 
 
}