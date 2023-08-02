#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int A, X, Y;
	    scanf("%d %d %d",&X, &Y, &A);
	    if(A >= X && A < Y)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	    
	}
	return 0;
}

