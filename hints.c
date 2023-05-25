#include <stdio.h>;

void main()
{
//int x=printf("hello world");
//printf("%d\n",x);//returns no.of elements in string
int y=scanf("%d\n",&y);
printf("%d",y);//return number of element scanned


//to split string into word
char s[]="aaa bbb ccc";
char *word=strtok(s," ");
while(word!=NULL)
{
    printf("%s ",word);
    word=strtok(NULL," ");
}
}
