#include<stdio.h>
int main()
{
    int t, i, j, k, total, ignored, tracked;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d", &total, &ignored, &tracked);
        int a_ignored[total], b_tracked[total], l, tracked_ignored=0, untracked_unignored=0;
        for(i=0;i<=total;i++)
            a_ignored[i]=0;
        for(i=0;i<=total;i++)
            b_tracked[i]=0;
        for(i=1;i<=ignored;i++)
        {
            scanf("%d",&l);
            a_ignored[l]=1;
        }
        for(i=1;i<=tracked;i++)
        {
            scanf("%d",&l);
            b_tracked[l]=1;
        }
        for(i=1;i<=total;i++)
        {
            if((a_ignored[i]==1)&&(b_tracked[i]==1))
                tracked_ignored++;
            if((a_ignored[i]==0)&&(b_tracked[i]==0))
                untracked_unignored++;
        }
        printf("%d %d\n", tracked_ignored, untracked_unignored);
    }
    return 0;
} 