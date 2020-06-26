#include<stdio.h>
#include<math.h>
int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int s_h, s_m, e_h, e_m, hh, mm;
	scanf("%d %d %d %d", &s_h, &s_m, &e_h, &e_m);
	if (s_h == e_h && s_m == e_m)
	{
		printf("JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
	else {
		int temph, tempm;
		temph = e_h - s_h;
		tempm = e_m - s_m;
		if (temph < 0)
		{
			hh = 24 + temph;
		}
		else if (temph == 0 && tempm < 0)
		{
			hh = 24 + temph;
		}
		else
		{
			hh = temph;
		}
		if (tempm < 0)
		{
			mm = 60 + tempm;
			hh--;

		}
		else
		{
			mm = tempm;
			//hh++;
		}
		printf(" JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hh, mm );
	}
	return 0;
}