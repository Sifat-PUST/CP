#include <stdio.h>
#include <string.h>
int main()
{
    char *strings[5][20]={"Mhabuba" "jannat" "Pushpo" "jui" "sifat"};

    int i=0;
    /*while(i<5)
    {
        scanf("%s",&strings[i][0]);
        i++;
    }*/
    char ch;
    scanf("%[^.]",&ch);
    printf("%s\n",ch);
    //printf("%s",&strings[3][20]);
}
