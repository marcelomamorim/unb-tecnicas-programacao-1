// Exemplos de classes domínio, classe entidade e testes de unidade.

// Incluir cabeçalhos.

#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{

    // Instanciar classe de teste de domínio.

    TUNome testeNome;

    switch (testeNome.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO - CODIGO" << endl;
        break;
    case TUCodigo::FALHA:
        cout << "FALHA   - CODIGO" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUEmail testeEmail;

    switch (testeEmail.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO - CODIGO" << endl;
        break;
    case TUCodigo::FALHA:
        cout << "FALHA   - CODIGO" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUSenha testeSenha;

    switch (testeSenha.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO - CODIGO" << endl;
        break;
    case TUCodigo::FALHA:
        cout << "FALHA   - CODIGO" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUIdioma testeIdioma;

    switch (testeIdioma.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO - CODIGO" << endl;
        break;
    case TUCodigo::FALHA:
        cout << "FALHA   - CODIGO" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUData testeData;

    switch (testeData.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO - CODIGO" << endl;
        break;
    case TUCodigo::FALHA:
        cout << "FALHA   - CODIGO" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUDescricao testeDescricao;

    switch (testeDescricao.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO - CODIGO" << endl;
        break;
    case TUCodigo::FALHA:
        cout << "FALHA   - CODIGO" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUCodigo testeCodigo;

    switch (testeCodigo.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO - CODIGO" << endl;
        break;
    case TUCodigo::FALHA:
        cout << "FALHA   - CODIGO" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUCidade testeCidade;

    switch (testeCidade.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO - CODIGO" << endl;
        break;
    case TUCodigo::FALHA:
        cout << "FALHA   - CODIGO" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUPais testePais;

    switch (testePais.run())
    {
    case TUPais::SUCESSO:
        cout << "SUCESSO - CODIGO" << endl;
        break;
    case TUPais::FALHA:
        cout << "FALHA   - CODIGO" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUNota testeNota;

    switch (testeNota.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO - CODIGO" << endl;
        break;
    case TUCodigo::FALHA:
        cout << "FALHA   - CODIGO" << endl;
        break;
    }

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe entidade.

    TUUsuario testeUsuario;

    switch (testeUsuario.run())
    {
    case TUUsuario::SUCESSO:
        cout << "SUCESSO - PROJETO" << endl;
        break;
    case TUUsuario::FALHA:
        cout << "FALHA   - PROJETO" << endl;
        break;
    }

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe entidade.

    TUHospedagem testeHospedagem;

    switch (testeHospedagem.run())
    {
    case TUHospedagem::SUCESSO:
        cout << "SUCESSO - PROJETO" << endl;
        break;
    case TUHospedagem::FALHA:
        cout << "FALHA   - PROJETO" << endl;
        break;
    }

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe entidade.

    TUAvaliacao testeAvaliacao;

    switch (testeAvaliacao.run())
    {
    case TUAvaliacao::SUCESSO:
        cout << "SUCESSO - PROJETO" << endl;
        break;
    case TUAvaliacao::FALHA:
        cout << "FALHA   - PROJETO" << endl;
        break;
    }

    return 0;
}
