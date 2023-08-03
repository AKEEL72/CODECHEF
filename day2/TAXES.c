#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a;
	    if(a<=100)
	    {
	        printf("%d\n",a);
	    }
	    else
	    {
	        printf("%d\n",a-10);
	    }
	}
	return 0;
}

