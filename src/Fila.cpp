/* 
 * File:   Fila.cpp
 * Author: ubuntu
 * 
 * Created on 13 de Setembro de 2009, 16:31
 */

#include "Fila.h"


//! enqueue.
/*!
 * O metodo enqueue é responsavel por inserir um elemento no final da fila f.
 * É importante lembrar que foi criado um tipo inf na classe Fila.
    \param x é um inf. Nele está o valor que será inserido no final da fila f.
    \return bool.
*/
bool Fila::enqueue(inf x)
{
    cout << "Adicionar " << x << " ao final da fila.\n";
    int mod = ((fim+1) % tam);
    if (mod != inicio)
    {
        fim = mod;
        f[fim] = x;
        if (inicio == -1)
        {
            inicio = 0;
        };
        cout << "Elemento adicionado.\n\n";
        return true;
    }
    else
    {
        cout << "A fila ja esta cheia.\nElemento nao foi adicionado.\n\n";
        return false;
    }
}



//! dequeue.
/*!
 * O metodo dequeue é responsavel por retirar o primeiro elemento da fila f.
 * É importante lembrar que foi criado um tipo inf na classe Fila.
    \param x é um inf*. Ele receberá o valor do primeiro elemento da fila f.
    \return bool.
*/
bool Fila::dequeue(inf& x)
{
    cout << "Retirar o elemento do inicio da fila.\n";
    if (inicio != -1)
    {
        x = f[inicio];
        if (inicio == fim)
        {
            inicio = -1;
            fim = -1;
        }
        else
        {
            inicio = ((inicio+1) % tam);
        };
        cout << "Elemento removido.\n\n";
        return true;
    }
    else
    {
        cout << "A fila ja esta vazia.\n\n";
        return false;
    };
}



//! front.
/*!
 * O metodo front é responsavel por revelar o primeiro elemento da fila f.
 * É importante lembrar que foi criado um tipo inf na classe Fila.
    \param x é um inf*. Ele receberá o valor do primeiro elemento da fila f.
    \return bool.
*/
bool Fila::front(inf& x)
{
    cout << "Consulta o elemento da frente da fila.\n";
    if (inicio != -1)
    {
        x = f[inicio];
        cout << "Elemento da frente: " << x << "\n\n";
        return true;
    }
    else
    {
        cout << "A fila esta vazia.\n\n";
        return false;
    }
}




//! Construtor.
/*!
 * No constutor é criado uma fila f, e dois ponteiros: inicio e fim.
 * Como, inicialmente, a fila está vazia, os dois ponteiros são inicializados no índice -1.
    \param qte um inteiro que representa o tamanho da lista e logicamente da fila criado.
*/
Fila::Fila(int qte) {
    cout << "Chamando o construtor para declarar a fila.\n\n";
    tam = qte;
    f = new inf[qte];
    inicio = -1;
    fim = -1;
}



//! Destrutor.
/*!
 * No destrutor da classe Fila temos um "cout" para comprovar a sua chamada.
 * e a funcao "delete" para desalocoar o espaco de memoria ocupado pelo vetor f.
*/
Fila::~Fila() {
    cout << "Chamando o destrutor para liberar memoria.\n\n";
    delete f;
}
