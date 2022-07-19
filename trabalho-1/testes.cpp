#include "testes.h"

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade DOMAIN = CÓDIGO.

void TUCodigo::setUp()
{
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown()
{
    delete codigo;
}

void TUCodigo::testarCenarioSucesso()
{
    try
    {
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha()
{
    try
    {
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade DOMAIN = NOME.

void TUNome::setUp()
{
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown()
{
    delete nome;
}

void TUNome::testarCenarioSucesso()
{
    try
    {
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha()
{
    try
    {
        nome->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (nome->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNome::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade DOMAIN = EMAIL.

void TUEmail::setUp()
{
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown()
{
    delete email;
}

void TUEmail::testarCenarioSucesso()
{
    try
    {
        email->setValor(VALOR_VALIDO);
        if (email->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha()
{
    try
    {
        email->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (email->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUEmail::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade DOMAIN = SENHA.
void TUSenha::setUp()
{
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown()
{
    delete senha;
}

void TUSenha::testarCenarioSucesso()
{
    try
    {
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha()
{
    try
    {
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (senha->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade DOMAIN = SENHA.

void TUIdioma::setUp()
{
    idioma = new Idioma();
    estado = SUCESSO;
}

void TUIdioma::tearDown()
{
    delete idioma;
}

void TUIdioma::testarCenarioSucesso()
{
    try
    {
        idioma->setValor(VALOR_VALIDO);
        if (idioma->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha()
{
    try
    {
        idioma->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (idioma->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUIdioma::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade DOMAIN = DATA.

void TUData::setUp()
{
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown()
{
    delete data;
}

void TUData::testarCenarioSucesso()
{
    try
    {
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha()
{
    try
    {
        data->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (data->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUData::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade DOMAIN = DESCRIÇÃO.

void TUDescricao::setUp()
{
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown()
{
    delete descricao;
}

void TUDescricao::testarCenarioSucesso()
{
    try
    {
        descricao->setValor(VALOR_VALIDO);
        if (descricao->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha()
{
    try
    {
        descricao->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (descricao->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUDescricao::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade DOMAIN = CIDADE.

void TUCidade::setUp()
{
    cidade = new Cidade();
    estado = SUCESSO;
}

void TUCidade::tearDown()
{
    delete cidade;
}

void TUCidade::testarCenarioSucesso()
{
    try
    {
        cidade->setValor(VALOR_VALIDO);
        if (cidade->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUCidade::testarCenarioFalha()
{
    try
    {
        cidade->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (cidade->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCidade::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade DOMAIN = PAÍS.

void TUPais::setUp()
{
    pais = new Pais();
    estado = SUCESSO;
}

void TUPais::tearDown()
{
    delete pais;
}

void TUPais::testarCenarioSucesso()
{
    try
    {
        pais->setValor(VALOR_VALIDO);
        if (pais->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUPais::testarCenarioFalha()
{
    try
    {
        pais->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (pais->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUPais::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade DOMAIN = NOTA.

void TUNota::setUp()
{
    nota = new Nota();
    estado = SUCESSO;
}

void TUNota::tearDown()
{
    delete nota;
}

void TUNota::testarCenarioSucesso()
{
    try
    {
        nota->setValor(VALOR_VALIDO);
        if (nota->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUNota::testarCenarioFalha()
{
    try
    {
        nota->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (nota->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUNota::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}


// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade ENTIDADES.

void TUUsuario::setUp()
{
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown()
{
    delete usuario;
}

void TUUsuario::testarCenarioSucesso()
{
    Nome nome;
    nome.setValor(VALOR_VALIDO);
    usuario->setNome(nome);
    if(usuario->getNome().getValor() != VALOR_VALIDO)
        estado = FALHA;
}

int TUUsuario::run()
{
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade ENTIDADES.

void TUHospedagem::setUp()
{
    hospedagem = new Hospedagem();
    estado = SUCESSO;
}

void TUHospedagem::tearDown()
{
    delete hospedagem;
}

void TUHospedagem::testarCenarioSucesso()
{
    Cidade cidade;
    cidade.setValor(VALOR_VALIDO);
    hospedagem->setCidade(cidade);
    if(hospedagem->getCidade().getValor() != VALOR_VALIDO)
        estado = FALHA;
}

int TUHospedagem::run()
{
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

// --------------------------------------------------------------------------
// Implementações de métodos de classe de teste de unidade ENTIDADES.

void TUAvaliacao::setUp()
{
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown()
{
    delete avaliacao;
}

void TUAvaliacao::testarCenarioSucesso()
{
    Codigo codigo;
    codigo.setValor(VALOR_VALIDO);
    avaliacao->setCodigo(codigo);
    if(avaliacao->getCodigo().getValor() != VALOR_VALIDO)
        estado = FALHA;
}

int TUAvaliacao::run()
{
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
