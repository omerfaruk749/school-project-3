#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
	srand(time(0));
	
	int i,k,temp;
	int eslestir[13][2];
	char dizi[13][50], isim[50];
	for(i=0;i<13;i++)
	{
		printf("Ogrenci ismini giriniz: ");
		gets(isim);
		strcpy(dizi[i],isim);
	}
	

	
	printf("\n-----------------------------------------------\n");
	
	for(i=0;i<13;i++)
	{	
		eslestir[i][0]=i;	
		eslestir[i][1]=rand()%13;				
	}
	
	
		for(i=0;i<12;i++)
		{	
			for(k=i+1;k<13;k++)
			{	
				if(eslestir[i][1]==eslestir[k][1])
				{
					eslestir[k][1]=rand()%13;
					i=0;
					k=i+1;
				}
			}			
		}
		
		for(i=0;i<13;i++)
		{	
			
				if(eslestir[i][0]==eslestir[i][1])
				{
					temp=eslestir[i][1];
					eslestir[i][1]=eslestir[i+1][1];
					eslestir[i+1][1]=temp;
				
					
				}
				
		}
		
	for(i=0;i<13;i++)
	{
		printf("%s  --->  %s",dizi[eslestir[i][0]],dizi[eslestir[i][1]]);
		printf("\n");
	}
	
	

	
	
	
}
