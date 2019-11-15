#include<stdio.h>
int main()
{
	int n, m, q, step = 0, index, count, flag[100] = { 0 }, outs[100] = { 123 }, count1, count2, judge[100], a = 0, t = 0;
	scanf("%d %d %d", &n, &m, &q);
	index = q;
	for (count = 0; count < n-1; )
	{

	     while (flag[index] == 1)
		{
			index = (index+1) % n;
		}
		step++;
		if (step == m)
		{
			flag[index] = 1;
			outs[count] = index;
			count++;
			step = 0;
		}
		index = (index+1) % n;
	}
	for (count2 = 0; count2 < n - 1; count2++)
	{
		for (count1 = 0; count1 < n - 1 - count2; count1++)
		{
			if (outs[count1] < outs[(count1)+1])
			{
				t = outs[count1]; outs[count1] = outs[(count1)+1]; outs[(count1)+1] = t;
			}
		}
	
	}
	a = n - 1;
	for (count1 = 0; count1 <= count; count1++)
	{
		
		if (outs[count1] != a)
		{
			printf("%d ", a); break;
		}
		a--;
	}
	return 0;
}