/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<bits/stdc++.h>

int pesquisa_linear(std::vector<int> &vect, int size_vect, int key)
{
    for(int i = 0; i < size_vect; i++)
    {
        if(vect.at(i) == key)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int key, aux;
    std::vector<int> vect;

    vect.push_back(3);
    vect.push_back(5);
    vect.push_back(7);
    vect.push_back(9);
    vect.push_back(12);
    vect.push_back(15);
    vect.push_back(7);
    vect.push_back(9);
    vect.push_back(8);
    vect.push_back(11);

    printf("Qual chave deseja buscar?\n");
    scanf("%i", &key);

    aux = pesquisa_linear(vect, vect.size(), key); //Optei em usar mais memória do que processamento

    if(aux != -1)
    {
        printf("Sua chave esta na posicao %i do vetor\n", aux);
    }
    else
    {
        printf("A chave nao foi encontrada.\n");
    }

    return 0;
}
