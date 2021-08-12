double bacteriaIterativa(double  num)
{
	double bacteriaTotal = 1;
	double crecimientoDiario = 3.78;
	double fallecimientoDiario = 2.34;
	double cambioTotal = crecimientoDiario - fallecimientoDiario;
	for (int i = 0; i < num; i++)
	{
		bacteriaTotal *= cambioTotal;
	} 
	return bacteriaTotal;
}

double bacteriaRecursiva(double num)
{
	double crecimientoDiario = 3.78;
	double fallecimientoDiario = 2.34;
	double cambioTotal = crecimientoDiario - fallecimientoDiario;
	if (num == 0)
	{
		return 1;
	}
	return cambioTotal * bacteriaRecursiva(num-1);
}
