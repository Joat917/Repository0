#include <stdio.h>
#include <string.h>

int main()
{
    char s[17] = {0};
    strcpy(s, "hello ");
    strcat(s, "github");
    for (int i = 11; i;)
        i[s] ^= (i-- & 1) << 5;
    s[12] = 33; s[14] = 37; s[15] = 115;
    printf(s + 14, s);
}
