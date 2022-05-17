#include<stdio.h>
void main()
{
int i,j,k,l,size,c,flag=0,rcount=0,ares[13],ardp[13],dcount=0;
printf("enter size\n");

int s[13];
printf("enter the elements\n");
for(i=0;i<13;i++)
scanf("%d ",&s[i]);

for(i=0;i<13;i++)
{
	for(j=i-1,flag=0;j>=0;j--)
	{
		if(s[i]==s[j])
		{
		flag=1;
		break;
		}
	}
	if(flag==0)
	{
		for(k=i+1,c=0;k<13;k++)
		{
			if(s[i]==s[k])
			{
				c++;
				
		
			}
		}
		
			ares[rcount]=s[i];
			rcount++;
			
			if(c>0)
			{
				for(l=0;l<c;l++)
				{
					ardp[dcount]=s[i];
					dcount++;
				}
			}	
		
		printf("%d is present %d times\n",s[i],c+1);
		
		
	}


}
printf("\n");
for(i=0;i<rcount;i++)
printf("%d ",ares[i]);
printf("\n");
printf("duplicate slot\n");
for(i=0;i<dcount;i++)
printf("%d ",ardp[i]);
}

