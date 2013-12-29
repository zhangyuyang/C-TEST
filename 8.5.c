#include <stdio.h>
#include <stdlib.h>
void number_off(int m)
{
  int left=m;
  int i=0,j=1;
  char *arr=(char*)malloc(m);
  if(arr==NULL)
  return;
  if(m<=1)
  return;
  for(i=0; i<m; i++)
  {
     arr[i]='1';
  }
  i=0;
  while(left!=1)
  {
        if(arr[i]=='1')
        {
        printf("序号：%d 喊号%d\n",i+1,j);
        if(j==3)
        {
         arr[i]='0';
         j=1;
         left--;
        }
        else
        j++;
      }
     i=(i+1)%m;
   }
 for(i=0; i<m; i++)
 {
   if(arr[i]=='1')
   printf("最后省下来原来是%d号\n",i+1);
 }
 free(arr);
}
int main()
{
   int m;
   printf("请输入m个人");
   scanf("%d",&m);
   number_off(m);
   return 0;
}