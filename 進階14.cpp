#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{

	int L;
	int i;//loop
	char input[]="I $am 5a$ go68od#@$ st-ude[nt].";
	char *check;

	L=strlen(input);
	check=input;
	for(i=0;i<L;i++)
	{
		if(*(check+i)<122&&*(check+i)>=96)
		{
			printf("%c", *(check+i));
		}
		else if(*(check+i)<91&&*(check+i)>64)
		{
			printf("%c", *(check+i));
		}
		else if(*(check+i)==32)
		{
			printf("%c", *(check+i));
		}
	}
	system("pause");
	return 0;
}
