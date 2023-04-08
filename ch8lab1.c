int main()
{
	int i,j;
	float f[2][2]={{1.2,3.4},{5.6,7.8}};
	printf("2-d array\n");
	for(i=0;i<2;i++)
	{
		for (j=0;j<2;j++)
		{
			printf("\n %f ",f[i][j]);
		}
	}
}
