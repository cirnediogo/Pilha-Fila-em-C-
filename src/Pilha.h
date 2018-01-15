/* 
 * File:   Pilha.h
 * Author: ubuntu
 *
 * Created on 12 de Setembro de 2009, 16:21
 */

#ifndef _PILHA_H
#define	_PILHA_H
#include <iostream>
using namespace std;

typedef int info;

class Pilha {
public:

    //! push.
/*!
 * O metodo push é responsavel por inserir um elemento na pilha p.
 * É importante lembrar que foi criado um tipo info na classe Pilha.
    \param x é um info. Nele está o valor que será inserido ns pilha p.
    \return bool.
*/
    bool push(info x);

    //! top.
/*!
 * O metodo top é responsavel por revelar o elemento do topo da pilha p.
 * É importante lembrar que foi criado um tipo info na classe Pilha.
    \param x é um info*. Ele receberá o valor do topo da pilha p.
    \return bool.
*/
    bool top(info& x);

    //! pop.
/*!
 * O metodo pop é responsavel por retirar o elemento do topo da pilha p.
 * É importante lembrar que foi criado um tipo info na classe Pilha.
    \param x é um info*. Ele receberá o valor do elemento do topo da pilha p.
    \return bool.
*/
    bool pop(info& x);

    //! Construtor.
/*!
 * No constutor é criado uma pilha p, e um ponteiro: topo.
 * Como, inicialmente, a pilha está vazia, o ponteiro está inicializado no índice 0.
    \param tam um inteiro que representa o tamanho da lista e logicamente da fila criado.
*/
    Pilha(int tam);

    //! Destrutor.
/*!
 * No destrutor da classe Pilha temos um "cout" para comprovar a sua chamada.
 * e a funcao "delete" para desalocoar o espaco de memoria ocupado pelo vetor p.
*/
    virtual ~Pilha();
private:

    /** Na classe Pilha foram declaradas as variaveis privadas topo, size e p. Essas
     * variaveis são reconhecidas por todos os metodos da classe Pilha.*/
    int topo;
    int size;
    info* p;
};

#endif	/* _PILHA_H */

