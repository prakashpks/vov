


#include<stdio.h>
void main()
{
char s[100];
int len,i;
printf("enter word");
gets(s);
len=strlen(s);
for(i=0;i<=len;i++)
{
if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
{
s[i]=s[i+1];
s[i+1]=' ';
}
}
printf("after removing vowel=%s",s);
}
