
#include <stdio.h>

int main()
{


	unsigned n, m, ans = 0;
	scanf("%u", &n);
	while (n--)
	{

		scanf("%u", &m);
		if (m != 1)
			++ans;

	}

	printf("%u\n", ans);

	return 0;

}

