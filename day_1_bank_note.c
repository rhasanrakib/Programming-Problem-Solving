#include<stdio.h>
#include<math.h>
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int note;
	scanf("%d", &note);

	if (note >= 100)
	{
		printf("%d note(s) of R$ 100\n", (int) note / 100 );
		note %= 100;
	}
	else
	{
		printf("0 note(s) of R$ 100\n");
	}
	if (note >= 50)
	{
		printf("%d note(s) of R$ 50\n", note / 50 );
		note %= 50;
	}
	else
	{
		printf("0 note(s) of R$ 50\n");
	}
	if (note >= 20)
	{
		printf("%d note(s) of R$ 20\n", note / 20 );
		note %= 20;
	}
	else
	{
		printf("0 note(s) of R$ 20\n" );
	}
	if (note >= 10)
	{
		printf("%d note(s) of R$ 10\n", note / 10 );
		note %= 10;
	}
	else
	{
		printf("0 note(s) of R$ 10\n" );
	}
	if (note >= 5)
	{
		printf("%d note(s) of R$ 5\n", note / 5 );
		note %= 5;
	}
	else
	{
		printf("0 note(s) of R$ 5" );
	}
	if (note >= 2)
	{
		printf("%d note(s) of R$ 2\n", note / 2 );
		note %= 2;
	}
	else
	{
		printf("0 note(s) of R$ 2\n" );
	}
	if (note >= 1)
	{
		printf("%d note(s) of R$ 1\n", note / 1 );
		note %= 1;
	}
	else
	{
		printf("0 note(s) of R$ 1\n" );
	}
	return 0;
}