#include<stdio.h> 

int main() 
{ 
    int x=0; 
    int a=0; 
    int i=0;;
    int sum=0; 
    int max=0; 
    int max1=0; 
    printf("dizinin eleman sayisini giriniz:"); 
    scanf("%d",&x);

int array[x];
int *ptr=&array[0];
for(int i=0;i<x;i++)
{
   printf("dizinin %d. elemanini giriniz:",i+1);
   scanf("%d",(ptr+i));
}
max1=array[0];
printf("array[]={");
for( i=0;i<x;i++)
{
   printf(" %d ",*(ptr+i));
}
printf("}\n");
printf("\nalt kume\t\ttoplam\n");
for(i=0;i<x;i++) {

if(i+4<x)
{

printf("\n{ %d ",*(ptr+i));
sum=*(ptr+i);

 for(int a=i+2;a<x;a+=2)
{
   printf(" %d ",*(ptr+a));
   sum+=*(ptr+a);
}
printf("}\t\t %d \n",sum);
if(sum>max1)
{
   max1=sum;
}
sum=0;
}

   for(max=i+2;max<x;max++)
   {
      sum=*(ptr+i)+*(ptr+max);
      printf("\n{ %d  %d }\t\t %d\n",*(ptr+i),*(ptr+max),sum);
      if(sum>max1)
      {
         max1=sum;
      }
      
   }
} printf("\ntoplam en buyuk %d olandir",max1);

}
