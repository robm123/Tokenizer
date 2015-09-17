/*
 * tokenizer.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int check(char k);
void printChar(char k2);

/*
 * Tokenizer type.  You need to fill in the type as part of your implementation.
 */

struct TokenizerT_ 
{
	char *token;		//ouput
	char *strArray;
	char *sep;
	
	
};

typedef struct TokenizerT_ TokenizerT;
/*
 * TKCreate creates a new TokenizerT object for a given token stream
 * (given as a string).
 * 
 * TKCreate should copy the arguments so that it is not dependent on
 * them staying immutable after returning.  (In the future, this may change
 * to increase efficiency.)
 *
 * If the function succeeds, it returns a non-NULL TokenizerT.
 * Else it returns NULL.
 *
 * You need to fill in this function as part of your implementation.
 */

TokenizerT *TKCreate( char *separators,char *ts ) 
{
	TokenizerT *tokenizer = malloc(sizeof(struct TokenizerT_));
	tokenizer->sep = malloc(sizeof(char)*strlen(separators)+1);
	tokenizer->strArray = malloc(sizeof(char)*strlen(ts)+1);
	strcpy(tokenizer->strArray,ts);
	strcpy(tokenizer->sep,separators);

  return tokenizer;
}

/*
 * TKDestroy destroys a TokenizerT object.  It should free all dynamically
 * allocated memory that is part of the object being destroyed.
 *
 * You need to fill in this function as part of your implementation.
 */

void TKDestroy( TokenizerT * tk ) 
{
	free (tk->token);
	free (tk->strArray);
	free (tk->sep);
}

/*
 * TKGetNextToken returns the next token from the token stream as a
 * character string.  Space for the returned token should be dynamically
 * allocated.  The caller is responsible for freeing the space once it is
 * no longer needed.
 *
 * If the function succeeds, it returns a C string (delimited by '\0')
 * containing the token.  Else it returns 0.
 *
 * You need to fill in this function as part of your implementation.
 */

char *TKGetNextToken( TokenizerT * tk ) 
{

	char temp[100];
	char *hhh="Hellooo";
	int i;
	int inc=0;
	int counter=0;
	int counter2=0;
	int j=0;
	int ff= strlen(tk->strArray);

	for(i=0; i<=ff; i++)
	{
		 if(*tk->strArray==*tk->sep || check(*tk->strArray)==1)
		{
            counter2--;                      
			inc=-1;
            for(j=0;j<=counter;j++)
			{
				printf("%c", temp[j]);
				
			}
			
			
			
			if(*tk->strArray==*tk->sep){
            
			while(*tk->strArray==*tk->sep)
			{
             *(tk->strArray++);
             counter2++;
            }
             *tk->strArray--;
             }
             
  
			
			counter=-2;
			if(check(*tk->strArray)==1&&*(tk->strArray+1)==*tk->sep)	//look at that
			{
				printf("\n");
				printChar(*tk->strArray);
				*tk->strArray++;
			}
			else if(check(*tk->strArray)==1)
			{
				printf("\n");
				printChar(*tk->strArray);
			}
			
			printf("\n");
			
			
		}
		
		temp[inc] = *tk->strArray;
		counter++;
		*tk->strArray++;
		inc++;
		
	}
	//	counter=counter-counter2;
		for(j=0;j<=(counter-counter2);j++)
		{
			printf("%c", temp[j]);
		}
		printf("\n");
		
		
	
	return 0;
}


// checks if there is a special charachter
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

/*
 * main will have a string argument (in argv[1]).
 * The string argument contains the tokens.
 * Print out the tokens in the second string in left-to-right order.
 * Each token should be printed on a separate line.
 */
 int main()
 {

 	
 	char *f=" ";
	char *w= "Hello world               my name          is mina";
	
	TokenizerT *hello;
	hello =TKCreate(f,w);
	TKGetNextToken(hello);
	
	while(1){}
	return 0;
 }


