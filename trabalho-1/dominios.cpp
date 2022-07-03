#include "dominios.h"


using namespace std;


void Codigo::validar(string codigo)
{
    string numeros_codigo = codigo.substr(0,9);
    string digito_verificador = codigo.substr(9,10);

    for(char digito : codigo) {
        if(!isdigit(digito)) throw invalid_argument("O caractere " + digito + " não é uma entrada válida");
    }

}

void Codigo::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}

// --------------------------------------------------------------------------
// Implementações de métodos da classe Cidade

void Cidade::validar(string valor)
{

    vector<string> cidadesPermitidas = inicializaListaCidadesPermitidas();
    bool entradaValida = false;

    for(auto cidade : cidadesPermitidas) {
        if(valor == cidade) { entradaValida == true };
    };

    if(permito == false) { throw invalid_argument("A cidade " + valor + " não está na lista de cidades permitidas."); };

}

void Cidade::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}

vector<string> inicializaListaCidadesPermitidas()
{
    vector<string> cidadesPermitidas;
    cidadesPermitidas.push_back("Antalya");
    cidadesPermitidas.push_back("Banbgkok");
    cidadesPermitidas.push_back("Delhi");
    cidadesPermitidas.push_back("Dubai");
    cidadesPermitidas.push_back("Hong Kong");
    cidadesPermitidas.push_back("Londres");
    cidadesPermitidas.push_back("Macau");
    cidadesPermitidas.push_back("Mumbai");
    cidadesPermitidas.push_back("Sao Paulo");
    cidadesPermitidas.push_back("Paris");
    cidadesPermitidas.push_back("Rio de Janeiro");
    cidadesPermitidas.push_back("Seul");
    cidadesPermitidas.push_back("Instambul");
    cidadesPermitidas.push_back("Kuala Lumpur");
    cidadesPermitidas.push_back("Nova Iorque");
    cidadesPermitidas.push_back("Osaka");
    cidadesPermitidas.push_back("Phuket");
    cidadesPermitidas.push_back("Shenzhen");
    cidadesPermitidas.push_back("Toquio");

    return cidadesPermitidas;
};

// --------------------------------------------------------------------------
// Implementações de métodos da classe Data

void Data::validar(string valor)
{
    int posicao_barra = valor.find("/");
    string dia = valor.substr(0, posicao_barra);
    string mes = valor.substr(posicao_barra, valor.length());


}

void Data::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Descricao

void Descricao::validar(string valor)
{
    bool validacao_numero_caracteres = 0 <= valor.length() <= 40;
    bool validacao_sem_espacos_em_branco = valor.find(" ") == false;

    if(validacao_numero_caracteres || !validacao_sem_espacos_em_branco)
    {
        throw invalid_argument("Argumento invalido.");
    }

}

void Descricao::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Email

void Email::validar(string valor)
{
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Email::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Idioma

void Idioma::validar(string valor)
{
    vector<string> idiomasPermitidos = inicializaListaDeIdiomasPermitidos();
    bool entradaValida = false;

    for(auto idioma : idiomasPermitidos)
    {
        if(idioma == valor) {entradaValida = true};
    }

    if(entradaValida == false) {
        throw invalid_argument("O idioma " + valor + " não está na lista de idiomas permitidos.");
    };

}

void Idioma::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}

vector<string> inicializaListaDeIdiomasPermitidos()
{
    vector<string> idiomasPermitidos;
    idiomasPermitidos.push_back("Ingles");
    idiomasPermitidos.push_back("Chines Mandarim");
    idiomasPermitidos.push_back("Hindi");
    idiomasPermitidos.push_back("Espanhol");
    idiomasPermitidos.push_back("Frances");
    idiomasPermitidos.push_back("Arabe");
    idiomasPermitidos.push_back("Bengali");
    idiomasPermitidos.push_back("Russo");
    idiomasPermitidos.push_back("Portugues");
    idiomasPermitidos.push_back("Indonesio");

    return idiomasPermitidos;
};


// --------------------------------------------------------------------------
// Implementações de métodos da classe Nome

void Nome::validar(string valor)
{
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Nome::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}



// --------------------------------------------------------------------------
// Implementações de métodos da classe Nota

void Nota::validar(string valor)
{
    if (0 > std::stoi(valor) > 10)
        throw invalid_argument("Argumento invalido.");
}

void Nota::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Pais

void Pais::validar(string valor)
{
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Pais::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Senha

void Senha::validar(string valor)
{
    if (valor == INVALIDO)
        throw invalid_argument("Argumento invalido.");
}

void Senha::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}
