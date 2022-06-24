// --------------------------------------------------------------------------
// Entidade Usuario

class Usuario {
    private:
            Nome nome;
            Email email;
            Senha senha;
            Idioma idioma;
            Data data;
            Descricao descricao;
    public:
            void setNome(const Nome&);
            Nome getNome() const;
            void setEmail(const Email&);
            Email getEmail() const;
            void setSenha(const Senha&);
            Senha getSenha) const;
            void setIdioma(const Idioma&);
            Idioma getIdioma() const;
            void setData(const Data&);
            Data getData() const;
            void setDescricao(const Descricao&);
            Descricao getDescricao() const;
};

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}

// --------------------------------------------------------------------------
// Entidade Hospedagem

class Hospedagem {
    private:
            Codigo codigo;
            Cidade cidade;
            Pais pais;
            Nota nota;
            Descricao descricao;
    public:
            void setCodigo(const Codigo&);
            Codigo getCodigo() const;
            void setCidade(const Cidade&);
            Cidade getCidade() const;
            void setPais(const Pais&);
            Pais getPais() const;
            void setNota(const Nota&);
            Pais getNota() const;
            void setDescricao(const Descricao&);
            Pais getDescricao() const;
};

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}


// --------------------------------------------------------------------------
// Entidade Avaliacao

class Avaliacao {
    private:
            Codigo codigo;
            Nota nota;
            Descricao descricao;
    public:
            void setCodigo(const Codigo&);
            Codigo getCodigo() const;
            void setNota(const Nota&);
            Nota getNota() const;
            void setDescricao(const Descricao&);
            Descricao getDescricao() const;
};

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}
