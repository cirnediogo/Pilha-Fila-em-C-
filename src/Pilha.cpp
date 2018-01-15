/* 
 * File:   Pilha.cpp
 * Author: ubuntu
 * 
 * Created on 12 de Setembro de 2009, 16:21
 */

#include "Pilha.h"


//! push.
/*!
 * O metodo push é responsavel por inserir um elemento na pilha p.
 * É importante lembrar que foi criado um tipo info na classe Pilha.
    \param x é um info. Nele está o valor que será inserido ns pilha p.
    \return bool.
*/
bool Pilha::push(info x)
{
    cout << "Inserir " << x << " no topo da pilha.\n";
    if (topo < size)
    {
        p[topo] = x;
        topo = topo + 1;
        cout << "Elemento inserido.\n\n";
        return true;
    }
    else
    {
        cout << "A pilha ja esta cheia.\nElemento nao foi inserido.\n\n";
        return false;
    }
}


//! top.
/*!
 * O metodo top é responsavel por revelar o elemento do topo da pilha p.
 * É importante lembrar que foi criado um tipo info na classe Pilha.
    \param x é um info*. Ele receberá o valor do topo da pilha p.
    \return bool.
*/
bool Pilha::top(info& x)
{
    cout << "Consulta o ultimo elemento da pilha.\n";
    if (topo > 0)
    {
        x = p[topo-1];
        cout << "Ultimo elemento: " << x << ".\n\n";
        return true;
    }
    else
    {
        cout << "A pilha esta vazia.\n\n";
        return false;
    }
}



//! pop.
/*!
 * O metodo pop é responsavel por retirar o elemento do topo da pilha P.
 * É importante lembrar que foi criado um tipo info na classe Pilha.
    \param x é um info*. Ele receberá o valor do elemento do topo da pilha P.
    \return bool.
*/
bool Pilha::pop(info& x)
{
    cout << "Remover o ultimo elemento da pilha.\n";
    if (topo > 0)
    {
        topo = topo - 1;
        x = p[topo];
        cout << "Elemento removido.\n\n";
        return true;
    }
    else
    {
        cout << "A pilha ja esta vazia.\n\n";
        return 0;
    }
}


//! Construtor.
/*!
 * No constutor é criado uma pilha p, e um ponteiro: topo.
 * Como, inicialmente, a pilha está vazia, o ponteiro está inicializado no índice 0.
    \param tam um inteiro que representa o tamanho da lista e logicamente da fila criado.
*/
Pilha::Pilha(int tam)
{
    cout << "Chamando o construtor para declarar a pilha.\n\n";
    size = tam;
    p = new info[tam];
    topo = 0;
}

//! Destrutor.
/*!
 * No destrutor da classe Pilha temos um "cout" para comprovar a sua chamada.
 * e a funcao "delete" para desalocoar o espaco de memoria ocupado pelo vetor p.
*/
Pilha::~Pilha()
{
    cout << "Chamando o destrutor para liberar memoria.\n\n";
    delete p;
}

