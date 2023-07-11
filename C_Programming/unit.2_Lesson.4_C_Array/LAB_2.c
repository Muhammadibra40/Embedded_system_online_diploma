#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int i, j;
	int arr[3][3],temp[3][3];

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the item (%d, %d) : ", i, j);
			fflush(stdin);      fflush(stdout);
			scanf("%d", &arr[i][j]);
		}
	}

	printf("The matrix you entered : \n");
	for(i = 0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("%d \t",arr[i][j]);
			}
			printf("\n");
		}

	for(i = 0;i<=2;i++)
			{
				for(j=0;j<=2;j++)
				{
					temp[i][j] = arr[j][i];
				}
			}

	printf("The matrix after transposing : \n");
	for(i = 0;i<=2;i++)
		{
			for(j=0;j<=2;j++)
			{
				printf("%d \t",temp[i][j]);
			}
			printf("\n");
		}
	return EXIT_SUCCESS;
}