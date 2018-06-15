#include<stdio.h>
#include<conio.h>
int main()
{
	char a[10],b[10],*p,*q;
	
	gets(a);
	gets(b);
	p=a;
	q=b;
	while(*p)
	{
		p++;
	}
	while(*q)
	{ 
		*p=*q;
		q++;
		p++;
		
	}
	*p='\0';
	
	printf("%s",a);
	
	getch();
	
}
