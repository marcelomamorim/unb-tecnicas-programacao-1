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
    case TUNome::SUCESSO:
        cout << "SUCESSO - NOME" << endl;
        break;
    case TUNome::FALHA:
        cout << "FALHA   - NOME" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUEmail testeEmail;

    switch (testeEmail.run())
    {
    case TUEmail::SUCESSO:
        cout << "SUCESSO - EMAIL" << endl;
        break;
    case TUEmail::FALHA:
        cout << "FALHA   - EMAIL" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUSenha testeSenha;

    switch (testeSenha.run())
    {
    case TUSenha::SUCESSO:
        cout << "SUCESSO - SENHA" << endl;
        break;
    case TUSenha::FALHA:
        cout << "FALHA   - SENHA" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUData testeData;

    switch (testeData.run())
    {
    case TUData::SUCESSO:
        cout << "SUCESSO - DATA" << endl;
        break;
    case TUData::FALHA:
        cout << "FALHA   - DATA" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUDescricao testeDescricao;

    switch (testeDescricao.run())
    {
    case TUDescricao::SUCESSO:
        cout << "SUCESSO - DESCRIÇÃO" << endl;
        break;
    case TUDescricao::FALHA:
        cout << "FALHA   - DESCRIÇÃO" << endl;
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
    case TUCidade::SUCESSO:
        cout << "SUCESSO - CIDADE" << endl;
        break;
    case TUCidade::FALHA:
        cout << "FALHA   - CIDADE" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUPais testePais;

    switch (testePais.run())
    {
    case TUPais::SUCESSO:
        cout << "SUCESSO - PAIS" << endl;
        break;
    case TUPais::FALHA:
        cout << "FALHA   - PAIS" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUNota testeNota;

    switch (testeNota.run())
    {
    case TUNota::SUCESSO:
        cout << "SUCESSO - NOTA" << endl;
        break;
    case TUNota::FALHA:
        cout << "FALHA   - NOTA" << endl;
        break;
    }

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe entidade.

    TUUsuario testeUsuario;

    switch (testeUsuario.run())
    {
    case TUUsuario::SUCESSO:
        cout << "SUCESSO - USUARIO" << endl;
        break;
    case TUUsuario::FALHA:
        cout << "FALHA   - USUARIO" << endl;
        break;
    }

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe entidade.

    TUHospedagem testeHospedagem;

    switch (testeHospedagem.run())
    {
    case TUHospedagem::SUCESSO:
        cout << "SUCESSO - HOSPEDAGEM" << endl;
        break;
    case TUHospedagem::FALHA:
        cout << "FALHA   - HOSPEDAGEM" << endl;
        break;
    }

    //-----------------------------------------------------------------------
    // Exemplo de teste de classe entidade.

    TUAvaliacao testeAvaliacao;

    switch (testeAvaliacao.run())
    {
    case TUAvaliacao::SUCESSO:
        cout << "SUCESSO - AVALIACAO" << endl;
        break;
    case TUAvaliacao::FALHA:
        cout << "FALHA   - AVALIACAO" << endl;
        break;
    }

    // Instanciar classe de teste de domínio.

    TUIdioma testeIdioma;

    switch (testeIdioma.run())
    {
    case TUIdioma::SUCESSO:
        cout << "SUCESSO - IDIOMA" << endl;
        break;
    case TUIdioma::FALHA:
        cout << "FALHA   - IDIOMA" << endl;
        break;
    }

    return 0;
}
