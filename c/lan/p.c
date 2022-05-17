// #include<stdio.h>
    //  int main()
  //    {
//	int x = 256;
//	char *p = &x;
//	printf("*p=%d\n",*p);
//	*++p = 2;
//	printf("x=%d\n",x);
     // }

/*#include <stdio.h>
        void main()
        {
            int x = 0;
            int *ptr = &5;
            printf("%p\n", ptr);
        }
*/

/* #include<stdio.h>
     int main()
     {
	int const * p = 5;
	int q=10;
	p = &q;
	printf("%d",*p++); 
     }
*/

/* #include<stdio.h>
     int main()
     {
	int x = 10;
	int const * const p=&x;
	
	printf("%d\n", *p);
     }
*/

/*
#include<stdio.h>
void main()
{
const int ary[4] = {1, 2, 3, 4};
            int *p;
            p = ary + 3;
            *p = 5;
            printf("%d\n", ary[3]);


}*/

/*
 #include <stdio.h>
        int main()
        {
            int ary[4] = {1, 2, 3, 4};
            int *p = ary + 3;
            printf("%d\n", p[-2]);    
}
*/

/*   #include <stdio.h>
        void main()
        {
            int x = 0;
            int *ptr = &5;
            printf("%p\n", ptr);
        }



  #include <stdio.h>
        void main()
        {
            char *s= "hello";
            char *p = s + 2;
            printf("%c %c",*p, s[1]);
        }



#include <stdio.h>
        int main()
        {
            void *p;
            int a[4] = {1, 2, 3, 4};
            p = &a[3];
            int *ptr = &a[2];
            int n = (int*)p - ptr;
            printf("%d\n", n);
        }
*/
#include<stdio.h>
      int main()
      {
	int a[ ] = {10,20,30,40,50},i;
	char *p = a;

	for(i=0;i<5;i++)
           printf("%d   ",*p++);
      }
