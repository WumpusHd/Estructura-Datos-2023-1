/* Estudiante: Santiago Arango Henao
   Codigo: 8971445
En la solución de este problema, donde se nos pedía crear un programa que manejara la sintaxis de un codigo morse
en la cual, al ingresar el respectivo codigo morse se debía imprimir el mensaje en lenguaje coloquial. 
La complejidad de este algoritmo consiste en 2 partes, la primera donde unicamente se busca separar cada
mensaje en morse y almacenarlo en la variable codigoMorse2, este proceso es lineal ya que solo se recorre un string
como un arreglo de caracteres. En la segunda parte, en la funcion buscarTraducir se realiza casi el mismo procedimiento, la 
diferencia es que aqui se recorre un vector, se traduce el codigo y posterior imprime el mensaje. 
La complejidad en el peor caso sería O(n) porque dado el caso que el mensaje en morse sea muy extenso, aún así
seguiría siendo lineal.*/


#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

vector<string> morse_Alphabet = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--..", "-----", ".----", "..---", "...--", "....-", ".....", "-....", "--...", "---..", "----.", ".-.-.-", "--..--", "..--..", ".----.", "-.-.--", "-..-.", "-.--.", "-.--.-", ".-...", "---...", "-.-.-.","-...-",".-.-.","-....-","..--.-",".-..-.",".--.-."};
char normal_Alphabet[54] = {'A', 'B','C','D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '.', ',','?', '\'', '!', '/', '(', ')', '&', ':', ';', '=', '+', '-', '_', '"', '@',};

void buscarTraducir(string codigoMorse2)
{
	bool flag = false;
	string message = "";
	for (int j = 0; j <= 54 and flag == false; ++j)
	{
				if (codigoMorse2 == morse_Alphabet[j])
				{
					printf("%c", normal_Alphabet[j]);
					message += normal_Alphabet[j];
					flag = true;
				}
	}
}

void dahdahdah()
{
	int testCases = 0;
	int i = 0;
	string codigoMorse2 = "";
	string codigoMorse = "";
	scanf("%d\n", &testCases);
	while(i < testCases)
	{
		getline(cin, codigoMorse);
		printf("Message #%d\n",i+1);
		for (int x = 0; x < codigoMorse.length()+1; ++x)
		{
			if(codigoMorse[x] != ' ' and x < codigoMorse.length())
			{
				codigoMorse2 += codigoMorse[x];	
			}
			else
			{
				buscarTraducir(codigoMorse2);
				if(codigoMorse[x] == ' ' and codigoMorse[x+1] == ' ')
				{
					printf(" ");
					x+=1;
				}
				codigoMorse2 = "";
			}
			
		}
		printf("\n\n");
		i += 1;
	}
}		

int main()
{
	dahdahdah();
	return 0;
}