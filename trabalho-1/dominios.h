#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <stdexcept>

using namespace std;

/*
    1 - definição da classe (propósito da classe);
    2 - informar regras de negócio;
    3 - documentação deve ficar nos arquivos .h;
    4 - preceder cada método público com o propósito desses métodos;
    5 - ver exemplo 1 disponibilizado no aprender3.unb.br;
*/

// --------------------------------------------------------------------------
// Domínio Cidade

class Cidade
{
private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Cidade::getValor() const
{
    return valor;
}

// --------------------------------------------------------------------------
// Domínio Codigo

class Codigo
{
private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Codigo::getValor() const
{
    return valor;
}

// --------------------------------------------------------------------------
// Domínio Data

class Data
{
private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Data::getValor() const
{
    return valor;
}

// --------------------------------------------------------------------------
// Domínio Descricao

class Descricao
{
private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Descricao::getValor() const
{
    return valor;
}

// --------------------------------------------------------------------------
// Domínio Email

class Email
{
private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Email::getValor() const
{
    return valor;
}

// --------------------------------------------------------------------------
// Domínio Idioma

class Idioma
{
private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Idioma::getValor() const
{
    return valor;
}

// --------------------------------------------------------------------------
// Domínio Nome

class Nome
{
private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Nome::getValor() const
{
    return valor;
}

// --------------------------------------------------------------------------
// Domínio Nota

class Nota
{
private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Nota::getValor() const
{
    return valor;
}

// --------------------------------------------------------------------------
// Domínio Pais

class Pais
{
private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Pais::getValor() const
{
    return valor;
}

// --------------------------------------------------------------------------
// Domínio Senha

class Senha
{
private:
    string valor;
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Senha::getValor() const
{
    return valor;
}

#endif // DOMINIOS_H_INCLUDED
