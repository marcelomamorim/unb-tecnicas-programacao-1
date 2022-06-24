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
            void setnomeAtributo(const Dominio&);
            Dominio getnomeAtributo() const;
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
            void setnomeAtributo(const Dominio&);
            Dominio getnomeAtributo() const;
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
            void setnomeAtributo(const Dominio&);
            Dominio getnomeAtributo() const;
};

inline void Entidade::setnomeAtributo(const Dominio &nomeAtributo){
    this->nomeAtributo = nomeAtributo;
}

inline Dominio Entidade::getnomeAtributo() const{
    return nomeAtributo;
}
