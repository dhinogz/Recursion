double bacteriaIterativa(double  num)
{
	double bacteriaTotal = 1;
	double crecimientoDiario = 3.78;
	for (int i = 0; i < num; i++)
	{
		bacteriaTotal *= crecimientoDiario;
	} 
	return bacteriaTotal;
}

double bacteriaRecursiva(double num)
{
	double crecimientoDiario = 3.78;
	if (num == 0)
	{
		return 1;
	}
	return crecimientoDiario * bacteriaRecursiva(num-1);
}
/*
int main()
{	
	double num;
	cin >> num;
	cout << bacteriaRecursiva(num) << "\n";
	cout << bacteriaIterativa(num);
}
*/