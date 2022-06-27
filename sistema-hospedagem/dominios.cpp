#include "dominios.h"

// --------------------------------------------------------------------------
// Implementações de métodos da classe Codigo.

void Codigo::validar(int codigo){
    if (codigo > LIMITE)
        throw invalid_argument("Argumento invalido.");
}

void Codigo::setValor(int valor){
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Cidade

void Cidade::validar(int valor){
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Cidade::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Data

void Data::validar(int valor){
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Data::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Descricao

void Descricao::validar(int valor){
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Descricao::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Email

void Email::validar(int valor){
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Email::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Idioma

void Idioma::validar(int valor){
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Idioma::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Nome

void Nome::validar(int valor){
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Nome::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}



// --------------------------------------------------------------------------
// Implementações de métodos da classe Nota

void Nota::validar(int valor){
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Nota::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}



// --------------------------------------------------------------------------
// Implementações de métodos da classe Pais

void Pais::validar(int valor){
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Pais::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Senha

void Senha::validar(int valor){
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Senha::setValor(int valor) {
    validar(valor);
    this->valor = valor;
}
