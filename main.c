#include <stdio.h>

int main()
{
	double x;
	scanf("%lf", &x);
	if (x>0)
	printf("%.2f\n", rzqd(x));
	else
		if (x<=0)
		printf("Raiz não válida\n");
}

double rzqd(double n)
{
        double aproximacao = 0.01;
        double valor1 = 1.0;
        double valor2 = 0;
        do
        {
            valor2 = valor1;
            valor1 = (valor1 + (n/valor1))/2;
            
        } while (md(valor1, valor2) > aproximacao);
        return valor1;
}


double md(double a, double b)
{
	double resultado = a-b;
	
	if(resultado < 0)
		{ resultado *= -1;
		}
		
	return resultado;
}