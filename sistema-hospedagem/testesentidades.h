// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe entidade = Usuario.

class TUUsuario {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    Usuario *usuario;                       // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};

// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe entidade = Hospedagem.

class TUHospedagem {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    Hospedagem *hospedagem;                       // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


// --------------------------------------------------------------------------
// Declaração de classe para teste de unidade de classe entidade = Avaliacao.

class TUAvaliacao {
private:
    const static int VALOR_VALIDO   = 20;   // Definição de constante para evitar número mágico.
    Avaliacao *avaliacao;                       // Referência para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Método para criar unidade em teste.
    void tearDown();                        // Método para destruir unidade em teste.
    void testarCenarioSucesso();            // Cenário de teste.
public:
    const static int SUCESSO =  0;          // Definição de constante para reportar resultado de teste.
    const static int FALHA   = -1;          // Definição de constante para reportar resultado de teste.
    int run();                              // Método para executar teste.
};


