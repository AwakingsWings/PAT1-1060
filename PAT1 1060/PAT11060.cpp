// PAT11060.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

int cmp(const void *p1, const void *p2) {
	return *(int *)p2 - *(int *)p1;
}

int main()
{
	int a[100001];
	int day,i;
	scanf_s("%d", &day);
	for (i = 0; i < day; i++)
	{
		scanf_s("%d", &a[i]);
	}
	qsort(a, day, sizeof(int), cmp);
	for (i = 0; i < day; i++)
	{
		if ((i + 1) >= a[i])
		{
			break;
		}
	}
	printf("%d", i);
	return 0;
}

