
#include<stdio.h>
#include<stack>
using namespace std;

stack<int>st;
int n,arr[1005];
int main(void)
{
    register int i,j;
    while(scanf("%d",&n)==1 && n)
    {
        while(scanf("%d",&arr[0])==1 && arr[0])
        {
            for(i=1; i<n; i++)
                scanf("%d",&arr[i]);
            while(!st.empty())
                st.pop();
            for(j=0,i=1; i<=n; i++ )
            {
                st.push(i);
                for(; j<n && !st.empty() && st.top()==arr[j]; j++ )
                    st.pop();
            }
            if(st.empty())
                printf("Yes\n");
            else
                printf("No\n");
        }
        printf("\n");
    }
    return 0;
}
