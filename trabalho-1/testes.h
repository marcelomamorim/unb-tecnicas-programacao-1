#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classes de domínio e entidades.

class TesteUnitario {
    private:
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
    public:
        const static int SUCESSO =  0;
        const static int FALHA   = -1;
        int run();
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classes de domínio = Código


class TUCodigo : public TesteUnitario
{
private:
    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;
    Codigo *codigo;
    void testarCenarioFalha();
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Cidade.

class TUCidade : public TesteUnitario
{
private:
    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;
    Cidade *cidade;
    void testarCenarioFalha();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Data.


class TUData : public TesteUnitario
{
private:
    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;
    Data *data;
    void testarCenarioFalha();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Descrição.


class TUDescricao : public TesteUnitario
{
private:
    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;
    Descricao *descricao;
    void testarCenarioFalha();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Email.


class TUEmail : public TesteUnitario
{
private:
    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;
    Email *email;
    void testarCenarioFalha();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Idioma.


class TUIdioma : public TesteUnitario
{
private:
    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;
    Idioma *idioma;
    void testarCenarioFalha();


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Nome.


class TUNome : public TesteUnitario
{
private:
    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;
    Nome *nome;
    void testarCenarioFalha();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Nota.


class TUNota : public TesteUnitario
{
private:
    const static int VALOR_VALIDO   = 20;
    const static int VALOR_INVALIDO = 30;
    Nota *nota;
    void testarCenarioFalha();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe entidade = Usuario.

class TUUsuario : public TesteUnitario
{
private:
    const static int VALOR_VALIDO   = 20;
    Usuario *usuario;
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe entidade = Hospedagem.

class TUHospedagem : public TesteUnitario
{
private:
    const static int VALOR_VALIDO   = 20;
    Hospedagem *hospedagem;

};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe entidade = Avaliacao.

class TUAvaliacao : public TesteUnitario
{
private:
    const static int VALOR_VALIDO   = 20;
    Avaliacao *avaliacao;
};


#endif // TESTES_H_INCLUDED
