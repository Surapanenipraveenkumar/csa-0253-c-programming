           #include<stdio.h>
main()
{
char s[]={'a','b','c','\n','c','\0'};
char *p,*str,*str1;
p=&s[3];

str=p;
str1=s;
printf("%d",++*p + ++*str1-32);
}

