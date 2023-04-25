#include <stdio.h>
#include <stdlib.h>

#define SIZE 256

int main(int argc, char **argv)
{
    unsigned int i;  
    char c;
    FILE *f;

    f = fopen(argv[1], "r");

    if (f)
      {
      	 for (i = 0; i < SIZE; i++)
      	 {
      	 	unsigned int count = 0;
      	 	f = fopen(argv[1], "r");
         	while (fread(&c, 1, 1, f))
           	{
           		if (i == c)
           			count++;
           	}
           	
           	printf("%u %u\n", i, count);
           	fclose(f);
       	 }
      }
      
    return 0;
}
