int tri(int a,int b,int c)
{
	int k=0;
	for(i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			int x = i * i + j * j;
			int y=sqrt(x);
			if(y*y==x&&y<=n)
			{
				k++;
			}
		}
	}
	return k;
}
