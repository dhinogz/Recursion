int fibonacciRecursiva(int num)
{
	if (num <= 1)
	{
		return num;
	}
	return fibonacciRecursiva(num - 1) + fibonacciRecursiva(num - 2);
	 
}

int fibonacciIterativa(int num)
{
	int F0;
	int F1 = 0;
	int F = 1;
	for (int i = 1; i < num; i++)
	{
		F0 = F1;
		F1 = F;
		F = F0 + F1;
	}
	return F;
}