#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED


/*
    1 - definição da classe (propósito da classe);
    2 - informar regras de negócio;
    3 - documentação deve ficar nos arquivos .h;
    4 - preceder cada método público com o propósito desses métodos;
    5 - ver exemplo 1 disponibilizado no aprender3.unb.br;
*/


class Dominio
{
    private:
        string valor;
        void validar(String);
    public:
        void setValor(String);
        string getValor() const;
};

inline string Dominio::getValor() const
{
    return valor;
}


// --------------------------------------------------------------------------
// Domínio Cidade


class Cidade : public Dominio{};


// --------------------------------------------------------------------------
// Domínio Codigo


class Codigo : public Dominio{};


// --------------------------------------------------------------------------
// Domínio Data


class Data : public Dominio{};

// --------------------------------------------------------------------------
// Domínio Descricao


class Descricao : public Dominio{};


// --------------------------------------------------------------------------
// Domínio Email


class Email : public Dominio{};

// --------------------------------------------------------------------------
// Domínio Idioma


class Idioma : public Dominio{};

// --------------------------------------------------------------------------
// Domínio Nome


class Nome : public Dominio{};

// --------------------------------------------------------------------------
// Domínio Nota


class Nota : public Dominio{};

// --------------------------------------------------------------------------
// Domínio Pais


class Pais : public Dominio{};

// --------------------------------------------------------------------------
// Domínio Senha


class Senha : public Dominio{};


#endif // DOMINIOS_H_INCLUDED
