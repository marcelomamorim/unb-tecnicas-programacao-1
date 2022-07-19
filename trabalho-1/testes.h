#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

/**
 * @brief Teste Unitário para a classe Código
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};


/**
 * @brief Teste Unitário para a classe Cidade
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};

/**
 * @brief Teste Unitário para a classe Data
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};

/**
 * @brief Teste Unitário para a classe Descrição
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};

/**
 * @brief Teste Unitário para a classe Email
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};

/**
 * @brief Teste Unitário para a classe Idioma
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};

/**
 * @brief Teste Unitário para a classe Nome
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};

/**
 * @brief Teste Unitário para a classe Nota
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};

/**
 * @brief Teste Unitário para a classe País
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};

/**
 * @brief Teste Unitário para a classe Senha
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};

/**
 * @brief Teste Unitário para a classe Usuário
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};

/**
 * @brief Teste Unitário para a classe Hospedagem
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();

};

/**
 * @brief Teste Unitário para a classe Avaliação
 * 
 */
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
    /**
     * @brief Código retornado quando o teste passa com sucesso
     * 
     */
    const static int SUCESSO =  0;
    /**
     * @brief Código retornado quando o teste falha
     * 
     */
    const static int FALHA   = -1;
    /**
     * @brief Método responsável por fazer o setUp e testar os cenários programados
     * 
     * @return Constante indicando se o teste passou ou não 
     */
    int run();
};


#endif // TESTES_H_INCLUDED
