#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int countString();
int primeNum(int);
char num[100];
int main()
{
	int n,palindrome, count = 0,round=0, i = 0,check=0;
	char* p_s, * p_l;
	scanf("%d",&n);
	do
	{
		if (i != 0)
		{
			n++;
		}
		palindrome = 0, count = 0, round = 0,i=0,check=0;
		sprintf(num, "%d", n);
		count = countString() - 1;
		if ((count+1) % 2 != 0)
		{
			round = count / 2;
		}
		else if((count+1) % 2 == 0)
		{
			round = (count + 1) / 2;
		}
		p_s = num;
		p_l = num;
		i = round;

		while (round != 0)
		{
			if (*p_s == *(p_l + count))
			{
				check++;
			}
			round--;
			count--;
			p_s++;
		}
		if (check == i)
		{
			palindrome = 1;
		}
	} while (palindrome != 1 || primeNum(n) != 1);
	printf("%d\n", n);
}

int countString()
{
	int a=0;
	char *p;
	p = num;
	while (*p != '\0')
	{
		a++;
		p++;
	}
	return a;
}
int primeNum(int x)
{
	int ch,j;
	j = 2;
	ch = 0;
	while (j<=x)
	{
		if (x % j == 0)
		{
			ch = j;
			break;
		}
		j++;
	}
	if (ch == x)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}