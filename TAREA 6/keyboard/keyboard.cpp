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
#include <list>

void keyboard()
{
    std::list<std::string> brokenText;
    std::string text = "";
    while(std::cin >> text)  
    {
        for(int i = 0; i < text.length(); ++i)
        {
            std::string e(1,text[i]);
            brokenText.push_back(e);
        }

        for(std::list<std::string>::iterator it = brokenText.begin(); it != brokenText.end(); ++it)
        {
            std::string element = *it;

            if( element ==  "[")
            {
                it =  brokenText.begin();
                std::cout << *it;
                it = brokenText
            }
            if( element ==  "]")
            {
                it = brokenText.end();
                std::cout << *it;
            }
            else
            {
                std::cout << *it;
            }
        }

    }
}

int main()
{
    keyboard();
    return 0;
}