// Diretivas de compilação para controlar processo de inclusão.

#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

// Incluir cabeçalhos.

#include "dominios.h"
#include "entidades.h"

using namespace std;

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Código.

class TUCodigo {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = 30;   // Definição de constante para evitar número mágico.
    Codigo *codigo;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Cidade.

class TUCidade {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = 30;   // Definição de constante para evitar número mágico.
    Cidade *cidade;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Data.


class TUData {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = 30;   // Definição de constante para evitar número mágico.
    Data *data;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Descrição.


class TUDescricao {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = 30;   // Definição de constante para evitar número mágico.
    Descricao *descricao;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Email.


class TUEmail {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = 30;   // Definição de constante para evitar número mágico.
    Email *email;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Idioma.


class TUIdioma {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = 30;   // Definição de constante para evitar número mágico.
    Idioma *idioma;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Nome.


class TUNome {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = 30;   // Definição de constante para evitar número mágico.
    Nome *nome;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe domínio = Nota.


class TUNota {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    const static int VALOR_INVALIDO = 30;   // Definição de constante para evitar número mágico.
    Nota *nota;                         // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
    void testarCenarioFalha();              // Cenário de teste.

public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

// --------------------------------------------------------------------------
// Exemplo de declaração de classe para teste de unidade de classe entidade.

class TUProjeto {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    Projeto *projeto;                       // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

#endif // TESTES_H_INCLUDED
