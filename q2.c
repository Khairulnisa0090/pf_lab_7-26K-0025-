
#include <stdio.h>

int main()
{
    char logs[3][30];
    char username[30], status[30], timestamp[30];
    int i, j, count = 0;

    for (i = 0; i < 3; i++)
    {
        printf("Enter CSV log %d (username,status,time): ", i + 1);

        scanf(" %29[^,],%29[^,],%29[^\n]",
              username, status, timestamp);

        snprintf(logs[i], sizeof(logs[i]),
                 "%s,%s,%s", username, status, timestamp);
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; logs[i][j] != '\0'; j++)
        {
            if (logs[i][j] >= 'A' && logs[i][j] <= 'Z')
            {
                count++;
            }
        }
    }

    printf("\nTotal uppercase letters = %d\n", count);

    return 0;
}

