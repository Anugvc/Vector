#include <stdio.h>
#include <string.h>
char *rep_word(char *s, char *s1, char *r);

void main()
{

    char s[100], s1[50], r[50];
    char *p;
    printf("Enter the string\n");
    scanf("%[^\n]", s);
    printf("Enter  word\n");
    scanf("%s", s1);
    printf("Enter word to replace with\n");
    scanf("%s", r);
    p = rep_word(s, s1, r);
    printf("After replacing \n%s\n", p);
    printf("strstr = %ld",(long int)strstr(s,s1));
    p = rep_word(s, s1, r);
    printf("After replacing second\n%s\n", p);
    printf("strstr = %ld",(long int)strstr(s,s1));
}

char *rep_word(char *s, char *s1, char *r)
{
    int i, j, l, l1, l2, k;
    char *p;
    k = 0;
    i = 0;
    l1 = strlen(s1);
    l2 = strlen(r);
   // while ((strstr(s, s1))!=0)
    //{
        if ((long int)strstr(s, s1))
        {
            p=strstr(s,s1);
            i = 0;
            
            while (s + i != p)
                ;
            l = i;
            if (l1 == l2)
            {
                j = 0;
                while (r[j])
                    s[i++] = r[j++];
            }
            else if (l1 > l2)
            {
                k = l1 - l2;
                j = 0;
                while (r[j])
                {
                    s[i++] = r[j++];
                }

                printf("in function:s=%s\n", s);

                while (s[i + k])
                {

                    s[i] = s[i + k];
                    i++;
                }
                s[i] = '\0';
            }
            else
            {
                k = l2 - l1;
                j = 0;

                printf("in function:s=%s\n", s);
                while (s[i++])
                    ;
                while (i != l)
                {

                    s[i + k] = s[i];
                    i--;
                }
                printf("last else  %s,\n", s);

                while (r[j])
                {
                    s[i++] = r[j++];
                }
            }
       // }
        // printf("abscs\n");
        // printf("%ld",strstr(s,s1));
        // if(strstr(s,s1))
        //     goto ABC;
    }
    return s;
}