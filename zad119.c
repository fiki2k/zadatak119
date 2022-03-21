// Program treba naci sumu elemenata suprotne dijagonale.

#include <stdio.h>

int main()
{
    int A[10][10],i,j,m,n;
    int sum = 0;

    printf("Unesi broj redova: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nunesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi vrijednost A[%d][%d]: ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    printf("\nDana matrica je: \n\n");

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                printf("\t%d", A[i][j]);
            }
            printf("\n\n");
        }

    /*
      Racuna sumu elemenata suprotne dijagonale.
	  */
        for (i = 0; i < m; ++i)
        {
             sum = sum + A[i][m - i - 1];
        }


    printf("\nSuma elemenata suprotne dijagonale je = %d", sum);

    return 0;
}
