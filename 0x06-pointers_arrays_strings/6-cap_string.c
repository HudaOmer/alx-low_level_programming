#include "main.h"

\**
 * cap_string - capitalize
 * @s: pointer to array
 *
 * Return: pointer to the string
 *\

char *cap_string(char *s)
{
	int count = 0;

  	while (s[count] != '\0')
 	 {
   		 if (s[count] == ' ' && s[count + 1] >= 'a' && s[count + 1] <= 'z')
    	 		 s[count + 1] = s[count + 1] - 32;
   		 count++;        
	  }
	  return (n);
}
