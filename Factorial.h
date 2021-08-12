long long factRecursiva(long long n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * factRecursiva(n-1);
}

long long factIterativa(long long n)
{
	long long ans = 1;
	for (long long i = 1; i <= n; i++)
	{
		ans *= i;
	}
	return ans;
}
