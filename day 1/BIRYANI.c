#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int X,Y,S;
	    scanf("%d%d",&X,&Y);
	    S=X*Y;
	    printf("%d\n",S);
	}
	return 0;
}

