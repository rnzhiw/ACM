# ACM
ACM
#include<cstdio>
#include<cstring>
#define INF 0x3f3f3f
int dis[220][220],n,m;//dis数组就是来表示邻接矩阵的，n表示城镇的数量，m表示路的条数
//狄杰斯特拉算法的开始，建立模型 
void Floyd()
{
	int i,j,k;
	for (k=0;k<n;k++)
	{
		for (i=0;i<n;i++)
		{
			for (j=0;j<n;j++)
			{
				if (dis[i][j]>dis[i][k]+dis[k][j])//算法的核心所在 
				dis[i][j]=dis[i][k]+dis[k][j];
			}
		}
	}
}
int main()
{
	while (scanf ("%d%d",&n,&m)!=EOF)//输入城镇的数量和路的条数 
	{
		int i,j;
		for (i=0;i<n;i++)//先初步把矩阵能够建立起来 
		{
			for (j=0;j<n;j++)
			{
				if (i==j)
				dis[i][j]=0;//将矩阵的主对角线全部标记为0 
				else
				dis[i][j]=INF;//然后其余的地方全部用无穷的INF表示 
			}
		}
		int a,b,c;
		for (i=0;i<m;i++)//先把路的通向情况全部放在矩阵里面，进行建立数据 
		{
			scanf ("%d%d%d",&a,&b,&c);
			dis[a][b]=dis[b][a]=c;//邻接矩阵的对称性的应用 
		}
		Floyd();//引用函数 
		scanf ("%d%d",&a,&b);
		if (dis[a][b]!=INF)//如果可达的话 
		printf ("%d\n",dis[a][b]);
		else//如果不可达的话 
		printf ("-1\n");
	}
	return 0;
}
