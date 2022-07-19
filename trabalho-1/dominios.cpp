#include "dominios.h"

#include <iostream>
#include <vector>
#include <stdio.h>


using namespace std;


// --------------------------------------------------------------------------
// Implementações de métodos da classe Cidade

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


void Cidade::validar(string valor)
{

    vector<string> cidadesPermitidas = inicializaListaCidadesPermitidas();
    bool entradaValida = false;

    for(auto cidade : cidadesPermitidas) {
        if(valor == cidade) { entradaValida = true; };
    };

    if(entradaValida == false) { throw invalid_argument("A cidade " + valor + " não está na lista de cidades permitidas."); };

}

void Cidade::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}

void Codigo::validar(string codigo)
{
    if(codigo.length() < 10) {
        throw invalid_argument("O código não é uma entrada válida");
    }

    string numeros_codigo = codigo.substr(0,9);
    string digito_verificador = codigo.substr(9,10);

    for(char digito : codigo) {
        if(!isdigit(digito)) {
            throw invalid_argument("O caractere não é uma entrada válida");
        }
    }

}

void Codigo::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}

// --------------------------------------------------------------------------
// Implementações de métodos da classe Data


vector<string> inicializaFormatoDeMesesPermitidos()
{
    vector<string> mesesNoFormatoPermitido;
    mesesNoFormatoPermitido.push_back("Jan");
    mesesNoFormatoPermitido.push_back("Fev");
    mesesNoFormatoPermitido.push_back("Mar");
    mesesNoFormatoPermitido.push_back("Abr");
    mesesNoFormatoPermitido.push_back("Mai");
    mesesNoFormatoPermitido.push_back("Jun");
    mesesNoFormatoPermitido.push_back("Jul");
    mesesNoFormatoPermitido.push_back("Ago");
    mesesNoFormatoPermitido.push_back("Set");
    mesesNoFormatoPermitido.push_back("Out");
    mesesNoFormatoPermitido.push_back("Nov");
    mesesNoFormatoPermitido.push_back("Dez");

    return mesesNoFormatoPermitido;
};

bool oMesEstaNoFormatoValido(string mesInserido, vector<string> mesesNoFormatoPermitido) {

    bool formatoValido = false;

    for(auto mes : mesesNoFormatoPermitido) {
        if(mesInserido == mes) { formatoValido = true; };
    };

    return formatoValido;
};


void Data::validar(string valor)
{
    int posicao_barra = valor.find("/");

    if(posicao_barra == string::npos) {
        throw invalid_argument("Dia ou mês inseridos com valores não suportados.");
    }

    string dia = valor.substr(0, posicao_barra);
    string mes = valor.substr(posicao_barra+1, valor.length());

    std::vector<string> formatoMesesPermitods = inicializaFormatoDeMesesPermitidos();
    bool ehValido = oMesEstaNoFormatoValido(mes, formatoMesesPermitods);
    bool oDiaEstaNoFormatoValido = stoi(dia) >= 1 && stoi(dia) <= 31;

    if(!oDiaEstaNoFormatoValido || !ehValido)
    {
        throw invalid_argument("Dia ou mês inseridos com valores não suportados.");
    }

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
    bool validacao_numero_caracteres = valor.length() > 40;
    bool validacao_sem_espacos_em_branco = valor.find("  ") == string::npos;
    bool validacao_caracteres_especiais_ponto = valor.find("..") == string::npos;
    bool validacao_caracteres_especiais_virgula = valor.find(",,") == string::npos;
    bool validacao_caracteres_especiais_ponto_e_virgula = valor.find(";;") == string::npos;
    bool validacao_caracteres_especiais_dois_pontos = valor.find("::") == string::npos;
    bool validacao_caracteres_especiais_interrogacao = valor.find("??") == string::npos;
    bool validacao_caracteres_especiais_exclamacao = valor.find("!!") == string::npos;
    bool validacao_caracteres_especiais_traco = valor.find("--") == string::npos;

    if(validacao_numero_caracteres ||
      !validacao_sem_espacos_em_branco ||
      !validacao_caracteres_especiais_ponto ||
      !validacao_caracteres_especiais_virgula ||
      !validacao_caracteres_especiais_ponto_e_virgula ||
      !validacao_caracteres_especiais_dois_pontos ||
      !validacao_caracteres_especiais_interrogacao ||
      !validacao_caracteres_especiais_exclamacao ||
      !validacao_caracteres_especiais_traco)
    {
        throw invalid_argument("Argumento inválido.");
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

    if(valor.find("@") == string::npos) {
        throw invalid_argument("Argumento inválido.");
    };


}

void Email::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Idioma

vector<string> inicializaListaDeIdiomasPermitidos()
{
    std::vector<string> idiomasPermitidos;
    
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

void Idioma::validar(string valor)
{
    vector<string> idiomasPermitidos = inicializaListaDeIdiomasPermitidos();
    bool entradaValida = false;

    for (int i = 0; i < idiomasPermitidos.size()-1; i++) {
        if(idiomasPermitidos[i] == valor) {entradaValida = true;};
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


// --------------------------------------------------------------------------
// Implementações de métodos da classe Nome

void Nome::validar(string valor)
{
    bool validacao_numero_caracteres = valor.length() <= 30;

    if (validacao_numero_caracteres == false) {
        throw invalid_argument("Argumento invalido.");
    };

    for(char letra : valor) {
        if(isdigit(letra)) throw invalid_argument("O caractere não é uma entrada válida");
    }

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
    if (0 > std::stoi(valor) || std::stoi(valor) > 10) {
        throw invalid_argument("Argumento invalido.");
    };

}

void Nota::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}


// --------------------------------------------------------------------------
// Implementações de métodos da classe Pais

vector<string> inicializaListaDePaisesPermitidos()
{
    vector<string> paisesPermitidos;
    paisesPermitidos.push_back("Estados Unidos");
    paisesPermitidos.push_back("Brasil");
    paisesPermitidos.push_back("China");
    paisesPermitidos.push_back("Coreia do Sul");
    paisesPermitidos.push_back("Emirados");
    paisesPermitidos.push_back("França");
    paisesPermitidos.push_back("Índia");
    paisesPermitidos.push_back("Japão");
    paisesPermitidos.push_back("Malásia");
    paisesPermitidos.push_back("Reino Unido");
    paisesPermitidos.push_back("Tailândia");
    paisesPermitidos.push_back("Turquia");

    return paisesPermitidos;
};

void Pais::validar(string valor)
{
    vector<string> paisesPermitidos = inicializaListaDePaisesPermitidos();
    bool entradaValida = false;

    for(auto pais : paisesPermitidos)
    {
        if(pais == valor) {entradaValida = true;};
    }

    if(entradaValida == false) {
        throw invalid_argument("O país " + valor + " não está na lista de países permitidos.");
    };
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
    if (valor.length() < 5) {
        throw invalid_argument("Argumento invalido.");
    };
}

void Senha::setValor(string valor)
{
    validar(valor);
    this->valor = valor;
}
