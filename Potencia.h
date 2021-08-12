int potenciaRecursiva(int x, int y)
{
	if (y == 1)
	{
		return x;
	}
	return x * potenciaRecursiva(x, y-1);
}

int potenciaIterativa(int x, int y)
{
	int ans = 1;
	for (int i  = 0; i < y; i++)
	{
		ans *= x;
	}
	return ans;
}
