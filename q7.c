
#include <stdio.h>

int main()
{
    float sensor_data[3][4];
    int r, c, index;

    printf("Enter temperature readings for 3 days and 4 sensors:\n");

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 4; c++)
        {
            printf("Day %d, Sensor %d: ", r, c);
            scanf("%f", &sensor_data[r][c]);
        }
    }

    printf("Enter faulty sensor column index (0 to 3): ");
    scanf("%d", &index);

    if (index < 0 || index > 3)
    {
        printf("Invalid column index!\n");
        return 0;
    }

    for (r = 0; r < 3; r++)
    {
        for (c = index; c < 3; c++)
        {
            sensor_data[r][c] = sensor_data[r][c + 1];
        }
    }

    printf("\nUpdated 3x3 sensor matrix:\n");

    for (r = 0; r < 3; r++)
    {
        for (c = 0; c < 3; c++)
        {
            printf("%8.2f", sensor_data[r][c]);
        }
        printf("\n");
    }

    return 0;
}

