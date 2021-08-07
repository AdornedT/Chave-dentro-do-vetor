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
    if(std::find(vect.begin(), vect.end(), key) != vect.end())
    {
        return key;
    }

    return -1;
}

int main()
{
    int key, aux;
    std::vector<int> vect;

    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(5);
    vect.push_back(6);
    vect.push_back(7);
    vect.push_back(8);
    vect.push_back(9);
    vect.push_back(10);

    printf("Qual chave deseja buscar?\n");
    //Existe um problema aqui caso a chave seja igual a -1, já que o conjunto números inteiros contém números negativos
    //Não existe muito o que fazer neste caso trabalhando dentro da limitação do pedido.
    scanf("%i", &key);

    aux = pesquisa_linear(vect, vect.size(), key); //Optei em usar mais memória do que processamento

    if(aux != -1)
    {
        printf("A chave %i foi encontrada.\n", aux);
    }
    else
    {
        printf("A chave nao foi encontrada.\n");
    }

    return 0;
}
