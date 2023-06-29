#include "main.h"
/**
 * _strcat - Appends 'src' string to 'dest' string
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i;
    char *hold = dest;
    for(i = 0 ;hold[i] != '\0'; i++){
        hold++;
    }
    for(; *src != '\0';){
        *hold = *src;
        hold++;
        src++;
        
    }
    *hold = '\0';
    return (dest);
}
