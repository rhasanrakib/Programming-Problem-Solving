#include<stdio.h>
#include<string.h>
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	char str[102];
	int test, count, i, j;
	scanf("%d", &test);

	while (test--)
	{
		scanf("%s", str);
		j = strlen(str);
		for (i = 0; i < j; i++)
		{

			printf("%d", str[i] - 64 );

		}
		printf("\n");


	}
	return 0;
}