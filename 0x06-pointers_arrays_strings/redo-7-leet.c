/**
 * leet - Encodes a string into "1337" text.
 * @str: Pointer to a string array.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
    char leet_map[] = {'4', '3', '0', '7', '1'};
    char letters[] = {'a', 'e', 'o', 't', 'l'};
    int i, j;

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (str[i] == letters[j] || str[i] == letters[j] - ('a' - 'A'))
            {
                str[i] = leet_map[j];
                break;
            }
        }
    }

    return str;
}

