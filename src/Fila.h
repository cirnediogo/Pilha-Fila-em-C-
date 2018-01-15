/* 
 * File:   Fila.h
 * Author: ubuntu
 *
 * Created on 13 de Setembro de 2009, 16:31
 */

#ifndef _FILA_H
#define	_FILA_H
#include <iostream>
using namespace std;

typedef int inf;

class Fila {
public:

    //! enqueue.
/*!
 * O metodo enqueue é responsavel por inserir um elemento no final da fila f.
 * É importante lembrar que foi criado um tipo inf na classe Fila.
    \param x é um inf. Nele está o valor que será inserido no final da fila f.
    \return bool.
*/
    bool enqueue(inf x);

//! dequeue.
/*!
 * O metodo dequeue é responsavel por retirar o primeiro elemento da fila f.
 * É importante lembrar que foi criado um tipo inf na classe Fila.
    \param x é um inf*. Ele receberá o valor o primeiro elemento da fila f.
    \return bool.
*/
    bool dequeue(inf& x);


//! front.
/*!
 * O metodo front é responsavel por revelar o primeiro elemento da fila f.
 * É importante lembrar que foi criado um tipo inf na classe Fila.
    \param x é um inf*. Ele receberá o valor do primeiro elemento da fila f.
    \return bool.
*/
    bool front(inf& x);


//! Construtor.
/*!
 * No constutor é criado uma fila f, e dois ponteiros: inicio e fim.
 * Como, inicialmente, a fila está vazia, os dois ponteiros são inicializados no índice -1.
    \param qte é um inteiro que representa o tamanho da lista e logicamente da fila criado.
*/
    Fila(int qte);



//! Destrutor.
/*!
 * No destrutor da classe Fila temos um "cout" para comprovar a sua chamada.
 * e a funcao "delete" para desalocoar o espaco de memoria ocupado pelo vetor f.
*/
    virtual ~Fila();

private:
/** Na classe Fila foram declaradas as variaveis privadas tam, inicio, fim e f. Essas
     * variaveis são reconhecidas por todos os metodos da classe Fila.*/
    int tam;
    int inicio;
    int fim;
    inf* f;

};

#endif	/* _FILA_H */

