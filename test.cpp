#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
      struct TokenizerT_ {
 char *tsPtr;
 char *tsPtr2;
 char *sepPtr;
 char *token;
 char *sepArray;
 char *tsArray;
};
typedef struct TokenizerT_ TokenizerT;


char *hey=" ";


TokenizerT *tk;
int i=0;
char save[10];
tk->tsPtr=" f is my life";
printf("TEST"); 
/*
while (1)
{
      if (tk->tsPtr!=hey)
      {
             save[i]=*tk->tsPtr;
             printf("TEST");           
             i++;
             tk->tsPtr++;
             printf("%d ", save[i]);
       }
}
                        
      */
      
      

return 0;
}
