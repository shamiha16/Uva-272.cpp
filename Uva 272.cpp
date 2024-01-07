#include <stdio.h>
#include <string.h>
int main() {
    char ch;
    int count;

while(scanf("%c",&ch)==1){
count =0;



			if (ch == '"')
            {

        count++;
        if(count%2)

					printf("``");
           else
					printf("''");}


			 else
				printf("%c",ch);}

		printf("\n");
return 0;}

