#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classes de domínio = Código


class TUCodigo
{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Cidade.

class TUCidade
{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Cidade *cidade;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Data.


class TUData
{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Descrição.


class TUDescricao
{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Descricao *descricao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Email.


class TUEmail
{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Email *email;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Idioma.


class TUIdioma
{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Idioma *idioma;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Nome.


class TUNome
{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Nota.


class TUNota
{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Nota *nota;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = País.


class TUPais
{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Pais *pais;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Senha.


class TUSenha
{
private:
    const static string VALOR_VALIDO;
    const static string VALOR_INVALIDO;
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe entidade = Usuario.

class TUUsuario
{
private:
    const static string VALOR_VALIDO;
    Usuario *usuario;
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
// Declaração de classe para teste de unidade de classe entidade = Hospedagem.

class TUHospedagem
{
private:
    const static string VALOR_VALIDO;
    Hospedagem *hospedagem;
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
// Declaração de classe para teste de unidade de classe entidade = Avaliacao.

class TUAvaliacao
{
private:
    const static string VALOR_VALIDO;
    Avaliacao *avaliacao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};


#endif // TESTES_H_INCLUDED
