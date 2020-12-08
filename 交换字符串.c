#include <stdio.h>
#include<stdlib.h>
void swop(char **s1, char **s2)
{
    char *temp;
    temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
int main()
{
    char *s1=(char*)malloc(sizeof(char)*20);
    char *s2=(char*)malloc(sizeof(char)*20);
    scanf("%s", s1);
    scanf("%s", s2);
    swop(&s1, &s2);
    printf("%s\n%s\n", s1, s2);
  free(s1);
  free(s2);
    return 0;
}