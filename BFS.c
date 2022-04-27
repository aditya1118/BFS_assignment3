#include<stdio.h>
#include<stdlib.h>
int a[10][10],n,v,visited[10],q[10],f=-1,r=-1; 
void BFS(int);
int main()
{
printf("Enter the value starting vertex:");
scanf("%d",&v);
printf("Enter the no of vertices:");
scanf("%d",&n);
printf("Enter the Adjecency Matrix:");
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
{ 
    scanf("%d",&a[i][j]);
}
}
for(int i=1;i<=1;i++)
{
    visited[i]=0;
} 
BFS(v);
return 0;
}

void BFS(int v)
{
    printf("%d",v);
    visited[v]=1;
for(int i=1;i<=n;i++)
{
    if(a[v][i]==1 && !visited[i])
    {
        q[++r]=i;
        visited[i]=1;
    }    
}
if(f<r)
{
    BFS(q[++f]);
}
}
