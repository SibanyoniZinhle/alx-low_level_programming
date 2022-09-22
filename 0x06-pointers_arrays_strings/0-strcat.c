#include "main.h"

/**
*_strcat - a function that concatenates two strings
*@dest: a pointer to the string to be concetenated upon
*@src: the source string to be appended to @dest
*
*Return: a pointer to the destination string @dest
*/
char *strcat(char *dest, const char *src)
{
int index = 0, dest_len = 0;
while (dest[index++])dest_len++;
for (index = 0; src[index]; index++)dest[dest_len++] = src[index];
return (dest);
}
