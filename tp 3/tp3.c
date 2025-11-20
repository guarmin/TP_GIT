#include <stdio.h>

int main()
{
    int n;
    printf("Saisissez une taille pour l'etoile ( entre 5 et 10 ) : ");
    scanf("%d", &n);

    int width = n * n;
    int max_height = n * 3 - 1;

    char img[50][150];
    int mid = width / 2;
    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            img[i][j] = ' ';
        }
    }

    /* la pointe */
    img[0][mid] = 'A';

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
        {
            for (int j = 0; j < width; j++)
            {
                img[i][j] = '_';
            }
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            if (j == 0 || j == i * 2)
            {
                img[i][mid + (j - i)] = 'A';
            }
            else
            {
                img[i][mid + (j - i)] = 'S';
            }
        }
    }

    /* le corps */

    for (int i = n; i < n * 2 - 2; i++)
    {
        int b = 2 * i - 2 * n;
        for (int j = b; j < width - b; j++)
        {
            img[i][j] = 'S';

            if (j == b || j == width - b - 1)
            {
                img[i][j] = '"';
                img[i][b + 1] = 'V';
                img[i][width - b - 2] = 'V';
            }
        }
    }

    /* le bas */

    int x = n * 2 - 2;
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < width; j++)
        {
            img[x][j] = 'S';
        }
        for (int j = 0; j < 2 * n - 4 - i; j++)
        {
            img[x][j] = ' ';
            img[x][width - j - 1] = ' ';
            if (j == 2 * n - 5 - 1)
            {
                img[x][width - j - 1] = '.';
                img[x][j] = '.';
            }
        }
        for (int j = mid - 2 * i; j < mid; j++)
        {
            img[x][j] = ' ';
            img[x][width - j - 1] = ' ';
            img[x][mid] = ' ';
            if (j == mid - 2 * i)
            {
                img[x][width - j - 1] = '\"';
                img[x][j] = '\"';
            }
        }

        x++;
    }

    for (int i = 0; i < max_height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            printf("%c", img[i][j]);
        }
        printf("\n");
    }
    return 0;
}
/*img[0][mid] = 'A';
printf("%c", img[i][j]);*/