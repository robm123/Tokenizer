#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check(char k);
void printChar(char k2);
int main()
{
	char *f=" ";
	char *w= "Hello) world I hate c";
	char temp[100];
	char *hhh="Hellooo";
	int i;
	int inc=0;
	int counter=0;
	int j=0;
	int ff= strlen(w);

	for(i=0; i<=ff; i++)
	{
	
		 if(*w==*f || check(*w)==1)
		{
			inc=-1;
			for(j=0;j<=counter;j++)
			{
				printf("%c", temp[j]);
				
			}
			counter=-2;
			if(check(*w)==1&&*(w+1)==*f)
			{
				printf("\n");
				printChar(*w);
				*w++;
			}
			else if(check(*w)==1)
			{
				printf("\n");
				printChar(*w);
			}
			
			printf("\n");
			
			
		}
		
		temp[inc] = *w;
		counter++;
		*w++;
		inc++;
		
	}
		
		for(j=0;j<=(counter-1);j++)
		{
			printf("%c", temp[j]);
		}
		printf("\n");
		
		
	
	return 0;
}

int check(char k)
{


	
	if(k == '(')
	{
		return 1;
	}	
	else if(k==',')
	{
		return 1;
	}

	else if(k=='*')
	{
		return 1;
	}	

	else if(k==')')
	{	
		return 1;
	}
	else if(k=='{')
	{	
		return 1;
	}
	else if(k=='[')
	{
		return 1;
	}
	else
	{
		return 0;
	}


}
void printChar(char k2)
{


	
	if(k2 == '(')
	{
		printf("(        open paren");
		
	}	
	else if(k2==',')
	{
		printf(",        operator");
		
	}

	else if(k2=='*')
	{
		printf("*        operator");
		
	}	

	else if(k2==')')
	{	
		printf(")        close paren");
	}
	else if(k2=='{')
	{	
		printf("{        open Curly");
	}
	else if(k2=='[')
	{
		printf("[        square bracket");
	}



}
