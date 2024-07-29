#include <stdio.h>
void twodarray()
{
    int arr[4][3] = {{34, 54, 56},{45, 67, 81},{53, 76, 83},{89, 90, 87}};
    int i, j;
    printf("***************\n");
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
            {

                printf("|%d|",arr[i][j]);
                //scanf("%d", arr[i][j]);
            }
            printf("\n");
        }
     printf("***************");    
}
int main()
{
    twodarray();
}

//     printf("\nThe 2D array is:\n");
//     for (i = 0; i < 4; i++) {
//         for (j = 0; j < 3; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }
