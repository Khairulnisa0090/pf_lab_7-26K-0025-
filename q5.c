
#include <stdio.h>

int main()
{
    char sentences[3][100];
    int i, j, vowels;

    for (i = 0; i < 3; i++)
    {
        if (i < 2)
        {
            printf("Enter sentence %d (end with ;): ", i + 1);
            scanf(" %99[^;]%*c", sentences[i]);
        }
        else
        {
            printf("Enter sentence %d: ", i + 1);
            scanf(" %99[^\n]", sentences[i]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        vowels = 0;

        for (j = 0; sentences[i][j] != '\0'; j++)
        {
            char ch = sentences[i][j];

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U')
            {
                vowels++;
            }
        }

        printf("\nSentence: %s\n", sentences[i]);
        printf("Vowel count: %d\n", vowels);
    }

    return 0;
}

