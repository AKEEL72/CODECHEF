#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d", &t);
	while(t--)
	{
	    int a, b, c;
	    scanf("%d%d", &a, &b);
	    c=a-b;
	    printf("%d\n", c);
	}
	return 0;
}

