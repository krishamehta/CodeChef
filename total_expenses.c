 #include<stdio.h>
    int main(void)
    {
    	int t=0,q=0;
    	scanf("%d",&t);
    	while(t--)
    	{
    		double p=0.0,ans=0.0;
    		scanf("%d%lf",&q,&p);
    		ans=q*p;	
    		if(q>1000)
    		{
    			ans-=(ans*0.1);
    		}
    		printf("%.6f\n",ans);
    	}
    }  