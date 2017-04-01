    #include<stdio.h>
    int main()
    {
        int t,n,flag,i;
        char arr[10001];
        scanf("%d",&t);
        while(t--)
        {
            scanf("%d",&n);
            flag = 0;
            scanf("%s",arr);
            for(i=0;i<n;i++)
            {
                if(arr[i]=='I')
                {
                    flag = 1;
                    printf("INDIAN\n");
                    break;
                }
                if(arr[i]=='Y')
                {
                    flag = 1;
                    printf("NOT INDIAN\n");
                    break;
                }
            }
            if(flag==0)
                printf("NOT SURE\n");
        }
        return 0;
    }