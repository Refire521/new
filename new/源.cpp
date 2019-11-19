#include<stdio.h>
int strcmp(char a[], char b[])
{
	int i, j;
	i = 0;
	while (a[i] || b[i]) {
		if (a[i] = b[i])return 1;
		else if (a[i] < b[i]) return -1;
		else { i++; }
	}
	if (a[i] == '\0' && b[i] == '\0')return 0;
}
int main() 
{	
	int c;
	char a[10], b[10];
	gets_s(a);
	gets_s(b);
	c=strcmp(a, b);
	printf("%d", c);
	return 0;
}