#include "main.h"

\**
  * 
  *
  *
  *
  *\

char *cap_string(char *n)
{
	int count = 0;
  while (n[count] != '\0')
  {
    if (n[count] == ' ' && n[count + 1] >= 'a' && n[count + 1] <= 'z')
      n[count + 1] = n[count + 1] - 32;
    count++;        
  }
  return (n);
}
