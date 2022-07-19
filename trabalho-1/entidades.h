#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED


/**
 * @brief Usuário hospedado em algum hotel
 * 
 */
class Usuario
{
private:
    Nome nome;
    Email email;
    Senha senha;
    Idioma idioma;
    Data data;
    Descricao descricao;
public:
    /**
     * @brief Define o objeto Nome na classe Usuário
     * 
     */
    void setNome(const Nome&);
    /**
     * @brief Busca o objeto Nome
     * 
     * @return Nome 
     */
    Nome getNome() const;
    /**
     * @brief Define o objeto Email na classe Usuário
     * 
     */
    void setEmail(const Email&);
    /**
     * @brief Busca o objeto Email
     * 
     * @return Email 
     */
    Email getEmail() const;
    /**
     * @brief Define o objeto Senha na classe Usuário
     * 
     */
    void setSenha(const Senha&);
    /**
     * @brief Busca o objeto Senha
     * 
     * @return Senha 
     */
    Senha getSenha() const;
    /**
     * @brief Define o objeto Idioma na classe Usuário
     * 
     */
    void setIdioma(const Idioma&);
    /**
     * @brief Busca o objeto Idioma
     * 
     * @return Idioma 
     */
    Idioma getIdioma() const;
    /**
     * @brief Define o objeto Data na classe Usuário
     * 
     */
    void setData(const Data&);
    /**
     * @brief Busca o objeto Data
     * 
     * @return Data 
     */
    Data getData() const;
    /**
     * @brief Define o objeto Descricao na classe Usuário
     * 
     */
    void setDescricao(const Descricao&);
    /**
     * @brief Busca o objeto Descrição
     * 
     * @return Descricao 
     */
    Descricao getDescricao() const;
};

inline void Usuario::setNome(const Nome &nome)
{
    this->nome = nome;
}

inline Nome Usuario::getNome() const
{
    return nome;
}

inline void Usuario::setEmail(const Email &email)
{
    this->email = email;
}

inline Email Usuario::getEmail() const
{
    return email;
}

inline void Usuario::setSenha(const Senha &senha)
{
    this->senha = senha;
}

inline Senha Usuario::getSenha() const
{
    return senha;
}

inline void Usuario::setIdioma(const Idioma &idioma)
{
    this->idioma = idioma;
}

inline Idioma Usuario::getIdioma() const
{
    return idioma;
}

inline void Usuario::setData(const Data &data)
{
    this->data = data;
}

inline Data Usuario::getData() const
{
    return data;
}

inline void Usuario::setDescricao(const Descricao &descricao)
{
    this->descricao = descricao;
}

inline Descricao Usuario::getDescricao() const
{
    return descricao;
}


/**
 * @brief Hospedagem do usuário
 * 
 */
class Hospedagem
{
private:
    Codigo codigo;
    Cidade cidade;
    Pais pais;
    Nota nota;
    Descricao descricao;
public:
    /**
     * @brief Define o objeto Código
     * 
     */
    void setCodigo(const Codigo&);
    /**
     * @brief Busca o objeto Código
     * 
     * @return Codigo 
     */
    Codigo getCodigo() const;
    /**
     * @brief Define o objeto Cidade
     * 
     */
    void setCidade(const Cidade&);
    /**
     * @brief Busca o objeto Cidade
     * 
     * @return Cidade 
     */
    Cidade getCidade() const;
    /**
     * @brief Define o objeto Pais
     * 
     */
    void setPais(const Pais&);
    /**
     * @brief Busca o objeto País
     * 
     * @return Pais 
     */
    Pais getPais() const;
    /**
     * @brief Define o objeto Nota
     * 
     */
    void setNota(const Nota&);
    /**
     * @brief Busca o objeto Nota
     * 
     * @return Nota 
     */
    Nota getNota() const;
    /**
     * @brief Define o objeto Descricao
     * 
     */
    void setDescricao(const Descricao&);
    /**
     * @brief Busca o objeto Descrição
     * 
     * @return Descricao 
     */
    Descricao getDescricao() const;
};

inline void Hospedagem::setCodigo(const Codigo &codigo)
{
    this->codigo = codigo;
}

inline Codigo Hospedagem::getCodigo() const
{
    return codigo;
}

inline void Hospedagem::setCidade(const Cidade &cidade)
{
    this->cidade = cidade;
}

inline Cidade Hospedagem::getCidade() const
{
    return cidade;
}

inline void Hospedagem::setPais(const Pais &pais)
{
    this->pais = pais;
}

inline Pais Hospedagem::getPais() const
{
    return pais;
}

inline void Hospedagem::setNota(const Nota &nota)
{
    this->nota = nota;
}

inline Nota Hospedagem::getNota() const
{
    return nota;
}

inline void Hospedagem::setDescricao(const Descricao &descricao)
{
    this->descricao = descricao;
}

inline Descricao Hospedagem::getDescricao() const
{
    return descricao;
}


/**
 * @brief Avaliação dada pelo usuário
 * 
 */
class Avaliacao
{
private:
    Codigo codigo;
    Nota nota;
    Descricao descricao;
public:
    /**
     * @brief Define o objeto Código
     * 
     */
    void setCodigo(const Codigo&);
    /**
     * @brief Busca o objeto Código
     * 
     * @return Codigo 
     */
    Codigo getCodigo() const;
    /**
     * @brief Define o objeto Nota
     * 
     */
    void setNota(const Nota&);
    /**
     * @brief Busca o objeto Nota
     * 
     * @return Nota 
     */
    Nota getNota() const;
    /**
     * @brief Define o objeto Descricao
     * 
     */
    void setDescricao(const Descricao&);
    /**
     * @brief Busca o objeto Descrição
     * 
     * @return Descricao 
     */
    Descricao getDescricao() const;
};

inline void Avaliacao::setCodigo(const Codigo &codigo)
{
    this->codigo = codigo;
}

inline Codigo Avaliacao::getCodigo() const
{
    return codigo;
}

inline void Avaliacao::setNota(const Nota &nota)
{
    this->nota = nota;
}

inline Nota Avaliacao::getNota() const
{
    return nota;
}

inline void Avaliacao::setDescricao(const Descricao &descricao)
{
    this->descricao = descricao;
}

inline Descricao Avaliacao::getDescricao() const
{
    return descricao;
}

#endif // ENTIDADES_H_INCLUDED