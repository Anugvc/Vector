#include<stdio.h>
int arr_dup(int*,int,int);

void main()
{
int i,size,count,de,ec=0,dec=0;
printf("enter the size\n");
scanf("%d",&size);
printf("enter the elements\n");
int arr[size],ardp[size],ares[size];
for(i=0;i<size;i++)
scanf("%d",&arr[i]);
for(i=0;i<size;i++)
{
de=arr_dup(arr,i,size);
if(de==arr[i])
{

ardp[dec]=de;
dec++;
}
else
{
if(!arr_dup(arr,i,size))
{
ares[ec]=arr[i];
ec++;
}
}
}

printf("Array of duplicate:\n");
for(i=0;i<dec;i++)
printf("%d\n",ardp[i]);

printf("Array of non duplicates:\n");
for(i=0;i<ec;i++)
printf("%d\n",ares[i]);


 

}
int arr_dup(int*a ,int b,int ele)
{
int i,j;

for(i=b+1;i<ele;i++)
{

if(a[i]==a[b])
return a[b];
else
return 0;



}

} 
