#include <stdio.h>
int zero(int x)
{
    
    return x;
}
int main()
{
    FILE *p;
    p = fopen("qwerty.bin", "r+b");
    char n[10];

    fread(&n, 5, 1, p);
    printf("%s", n);
    fclose(p);
    printf("%d", zero(5));

    return 0;
}