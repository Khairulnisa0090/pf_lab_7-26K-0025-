
#include <stdio.h>

int main()
{
    char word_grid[3][100];
    char current_word[100], longest_word[100];
    int i, j, k;
    int length, max_length = 0;
    int row_index = 0, col_index = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter 3 words for row %d: ", i);
        scanf(" %99[^\n]", word_grid[i]);
    }

    for (i = 0; i < 3; i++)
    {
        j = 0;
        col_index = 0;

        while (word_grid[i][j] != '\0')
        {
            if (word_grid[i][j] != ' ')
            {
                k = 0;

                while (word_grid[i][j] != '\0' &&
                       word_grid[i][j] != ' ')
                {
                    current_word[k] = word_grid[i][j];
                    k++;
                    j++;
                }

                current_word[k] = '\0';
                length = k;

                if (length > max_length)
                {
                    max_length = length;

                    for (k = 0; current_word[k] != '\0'; k++)
                    {
                        longest_word[k] = current_word[k];
                    }
                    longest_word[k] = '\0';

                    row_index = i;
                    col_index++;
                    /* Correct column is set below */
                }
                else
                {
                    col_index++;
                }
            }
            else
            {
                j++;
            }
        }
    }

    printf("\nLongest word: %s\n", longest_word);
    printf("Length: %d\n", max_length);
    printf("Row index: %d\n", row_index);
    printf("Column index: %d\n", col_index);

    return 0;
}

