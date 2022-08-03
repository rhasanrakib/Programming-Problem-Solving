#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int letters=0;
    int words=0;
    int sentences=0;
    float L;
    int S;
    int W;
    float z;
    float

    x;

    char para[] = "would you rather be you.";

    for(int i=0; i<strlen(para); i++)
    {

        if((para[i]>='a' || para[i]<='z') && (para[i]>='A' || para[i]<='Z')

                && (para[i]!=' ') && (para[i]!=',') && (para[i]!='-') && (para[i]!='!')

                && (para[i]!='?') && (para[i]!='.') && (para[i]!=';') && (para[i]!='\''))
        {

            L=letters++;

        }

        if((para[i]==' ') && (para[i]!='.'))
        {
            W= words++;
        }

        if((para[i]=='.') || (para[i]=='!') || (para[i]=='?'))
        {
            S= sentences++;
        }

    }

    L=(float) letters/words * 100;
    S=(float) sentences/words * 100; //printf("%f\n",z);

//printf("%f\n",x);

    int index=round(0.0588 * L - 0.296 * S - 15.8);

    if((index==1) || (index==2) || (index==3) || (index==4) || (index==5) || (index==6) || (index==7)

            || (index==8) || (index==9) || (index==10) || (index==11) || (index==12) || (index==13) ||

            (index==14) || (index==15))

    {

        printf("Grade %i\n",index);
        printf("letters = %d\n", letters);
        printf("words = %d\n", words);
        printf("sentences = %d\n", sentences);

    }

//printf("letters:%i\n",letters); //printf("words:%i\n",words);

//printf("sentences:%i\n",sentences);

    if(index>=16)

    {

        printf("Grade 16+\n");

    }

    else if(index<1)

    {

        printf("Before Grade 1\n");
    }

}
