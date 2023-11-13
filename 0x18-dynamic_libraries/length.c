#include "main.h"

 /**
 * length - compute string length
 * @str: pointer to string
 * Return: the length
 */
int length(char *str)
{
        int count = 0;

        while (str[count] != '\0')
        {
                count += 1;
        }
        return (count);
}
