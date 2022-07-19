#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;


/**
 * @brief Cidade referente à hospedagem.
 * 
 */
class Cidade
{
private:
    string valor;
    void validar(string);

public:
    /**
     * @brief Define o nome da cidade
     */
    void setValor(string);
    /**
     * @brief Busca valor da cidade
     * 
     * @return O nome da cidade 
     */
    string getValor() const;
};

inline string Cidade::getValor() const
{
    return valor;
}

/**
 * @brief Classe representa o código gerado no formato DDDDDDDDDDX.
 */
class Codigo
{
private:
    string valor;
    void validar(string);

public:
    /**
     * @brief Define valor do código
     */
    void setValor(string);
    /**
     * @brief Busca valor do código
     * 
     * @return O código do usuário
     */
    string getValor() const;
};

inline string Codigo::getValor() const
{
    return valor;
}

/**
 * @brief Data de aniversário do Usuário
 * 
 */
class Data
{
private:
    string valor;
    void validar(string);

public:
    /**
     * @brief Define valor da data de aniversário
     * 
     */
    void setValor(string);
    /**
     * @brief Busca valor da data
     * 
     * @return Data de aniversário 
     */
    string getValor() const;
};

inline string Data::getValor() const
{
    return valor;
}

/**
 * @brief Descrição do usuário
 * 
 */
class Descricao
{
private:
    string valor;
    void validar(string);

public:
    /**
     * @brief Define descrição
     * 
     */
    void setValor(string);
    /**
     * @brief Busca descrição
     * 
     * @return Descrição 
     */
    string getValor() const;
};

inline string Descricao::getValor() const
{
    return valor;
}


/**
 * @brief Email do usuário
 * 
 */
class Email
{
private:
    string valor;
    void validar(string);

public:
    /**
     * @brief Define valor de email
     * 
     */
    void setValor(string);
    /**
     * @brief Busca valor do email
     * 
     * @return Email do usuário 
     */
    string getValor() const;
};

inline string Email::getValor() const
{
    return valor;
}


/**
 * @brief Idioma falado pelo Usuário
 * 
 */
class Idioma
{
private:
    string valor;
    void validar(string);

public:
    /**
     * @brief Define idioma falado pelo usuário
     * 
     */
    void setValor(string);
    /**
     * @brief Busca idioma
     * 
     * @return Idioma 
     */
    string getValor() const;
};

inline string Idioma::getValor() const
{
    return valor;
}

/**
 * @brief Nome do Usuário.
 * 
 */
class Nome
{
private:
    string valor;
    void validar(string);

public:
    /**
     * @brief Define nome do usuário no sistema
     * 
     */
    void setValor(string);
    /**
     * @brief Busca nome do usuário
     * 
     * @return Nome do usuário
     */
    string getValor() const;
};

inline string Nome::getValor() const
{
    return valor;
}


/**
 * @brief Nota dada pelo usuário na avaliação da hospedagem.
 * 
 */
class Nota
{
private:
    string valor;
    void validar(string);

public:
    /**
     * @brief Registra nota dada pelo usuário
     * 
     */
    void setValor(string);
    /**
     * @brief Busca nota
     * 
     * @return Nota dada pelo usuário
     */
    string getValor() const;
};

inline string Nota::getValor() const
{
    return valor;
}


/**
 * @brief País no qual está se hospedando.
 * 
 */
class Pais
{
private:
    string valor;
    void validar(string);

public:
    /**
     * @brief Define valor do país da hospedagem
     * 
     */
    void setValor(string);
    /**
     * @brief Busca país
     * 
     * @return País
     */
    string getValor() const;
};

inline string Pais::getValor() const
{
    return valor;
}


/**
 * @brief Senha de login do usuário.
 * 
 */
class Senha
{
private:
    string valor;
    void validar(string);

public:
    /**
     * @brief Define senha
     * 
     */
    void setValor(string);
    /**
     * @brief Busca senha
     * 
     * @return Senha
     */
    string getValor() const;
};

inline string Senha::getValor() const
{
    return valor;
}

#endif // DOMINIOS_H_INCLUDED
