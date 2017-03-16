 #include<stdio.h>
    #include<string.h>
    int main()
    {
    	int t;
    	scanf("%d",&t);
    	while(t--)
    	{
    		char a[1002],b[1002];
    		scanf("%s%s",a,b);
    		long int la=strlen(a),lb=strlen(b);
    		long int i,j,flag=0;
    		for(i=0;i<la;i++)
    		{
    			for(j=0;j<lb;j++)
    			{
    				if(b[j]==a[i])
    					flag=1;
    			}
    		}
    		
    		if(flag==1)
    			printf("Yes\n");
    		else
    			printf("No\n");
    	}
    	return 0;
    }  