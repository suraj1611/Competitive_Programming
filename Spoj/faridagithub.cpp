#include <stdio.h>

long long int max(long long int a, long long int b)
  {
		if(a > b)
			return a;
		else
			return b;
	}

int main()
	{
		int t, j;

		scanf("%d", &t);

		for(j = 0; j < t; j++)
			{
				int n, i;
				long long int a[10001], d[10001];

				scanf("%d", &n);

				for(i = 0; i < n; i++)
					scanf("%lld", &a[i]);

				d[0] = a[0];
				d[1] = max(d[0], a[1]);

				for(i = 2; i < n; i++)
					d[i] = max(d[i-1], a[i] + d[i-2]);

				printf("Case %d: %lld\n", j+1, d[n-1]);
			}

		return 0;
}
