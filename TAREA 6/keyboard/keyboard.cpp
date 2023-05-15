/*
 * Estudiante: Santiago Arango Henao
 * Código: 8971445
 * Fecha Creación: 11 de Mayo 2023
 * Ultima Modificacion: 11 Mayo de 2023
 * 
 * Solución Tarea Punto Keyboard
 *
 */



#include <iostream>
#include <string>
#include <vector>

void keyboard()
{
    std::vector<char> brokenText;
    std::string text;
    while(std::cin >> text)  
    {
        for(int i = 0; i < text.length(); ++i)
        {
            brokenText.push_back(text[i]);
        }


        for(int i = 0; i <= brokenText.size(); ++i)
        {
            bool print_first = false;
            if(brokenText[i] ==  '[')
            {
                print_first = true;
            }
            else if( brokenText[i] ==  '[')
            {
                print_first = false;
            }
            else if(print_first)
            {
                std::cout << brokenText[i];
            }
            else
            {
                std::cout << brokenText[i];
            }
        }

    }
}

int main()
{
    keyboard();
    return 0;
}