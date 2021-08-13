long long fibonacciRecursiva(long long num)
{
	if (num <= 1)
	{
		return num;
	}
	return fibonacciRecursiva(num - 1) + fibonacciRecursiva(num - 2);
	 
}

long long fibonacciIterativa(long long num)
{
	long long F0;
	long long F1 = 0;
	long long F = 1;
	for (int i = 1; i < num; i++)
	{
		F0 = F1;
		F1 = F;
		F = F0 + F1;
	}
	return F;
}