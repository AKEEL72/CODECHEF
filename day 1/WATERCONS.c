#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int X;
	    scanf("%d",&X);
	    if(X>=2000)
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	        printf("No\n");
	    }
	}
	return 0;
}

