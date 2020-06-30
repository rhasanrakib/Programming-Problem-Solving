#include<stdio.h>
#include<math.h>
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int test, num, len;
	scanf("%d", &test);
	while (test--)
	{
		scanf("%d", &num);
		int sum = 0,assign;
		assign = num;
		while (num > 0)
		{
			sum += pow(num % 10,3);
			num /= 10;

		}
		if(assign == sum)
        {

            printf("%d is an armstrong number!\n",assign);
        }
        else{
            printf("%d is not an armstrong number!\n",assign);
        }

	}
	return 0;
}
