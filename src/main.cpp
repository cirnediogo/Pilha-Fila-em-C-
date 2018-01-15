/* 
 * File:   main.cpp
 * Author: ubuntu
 *
 * Created on 12 de Setembro de 2009, 16:13
 */

#include "Pilha.h"
#include "Fila.h"
#include <stdlib.h>
#include <iostream>
using namespace std;
/*
 * 
 */



/**
 * A funcao main, a primeira funcao a ser chamada,
 * instancia o objeto plh da classe Pilha e o ojeto fil da classe Fila.
 * A partir do objeto anteriormente citado, envocamos métodos
 * os quais sao responsáveis por inserir, remover, ou consultar algum elemento
 * das estruturas de dados pilha e fila.
   \return int
 */
int main(int argc, char** argv) {

    cout << "Iniciando a Pilha.\n\n";
    Pilha plh(4);
    info x = 123;
    cout << "x = " << x << "\n\n";
    plh.push(x);
    plh.pop(x);
    cout << "x = " << x << "\n\n";
    plh.top(x);
    plh.pop(x);
    cout << "x = " << x << "\n\n";

    cout << "\n-------------------------------------\n\n";
    cout << "Iniciando a Fila.\n\n";
    Fila fil(5);
    inf y = 321;
    cout << "y = " << y << "\n\n";
    fil.enqueue(y);
    fil.front(y);
    fil.dequeue(y);
    cout << "y = " << y << "\n\n";
    fil.front(y);
    fil.dequeue(y);
    cout << "y = " << y << "\n\n";



    return (EXIT_SUCCESS);
}

