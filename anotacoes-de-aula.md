# Anotações de aulas

# Técnicas de programação 1 - UnB

## Aula 14/06/2022

### Classes e objetos

- Classe:

    - Biblioteca
    - Declaração
    - Implementação de métodos


a) Declaração de classe em C++:

a.1) No arquivo .hpp =>

class Aluno {

    //acesso limitado ao código na própria classe
    private:

        // atributo de classe
        static int n;

        // atributo de instância
        int matricula;

        int cpf;

    public:
        //construtor default
        Aluno();

        //construtor
        Aluno(int, int);

        //
        void setMatricula(int);
        void setCPF(int);
        int getMatricula();
        int getCPF();

};

a.2) No arquivo .cpp =>

bool Aluno::setMatricula(int matricula) {

    if(!validaMatricula(matricula)){
        return false;
    };

    this->matricula = matricula;
    return true;
};

inline int Aluno::getMatricula() {
    return matricula;
}

b) Criando instância de objeto:

Aluno alunoA, alunoB;


c) Estrutura de projeto em C++:

- arquivos .hpp
    - declaração de classes.
    - implementações de métodos inline.
    - é possível agrupar várias classes no mesmo arquivo.

- arquivos .cpp
    - implementações de métodos


d) método inline:

- expansão de código
- getters são bons exemplos para utilizar métodos inline


## Aula 21/06/2022


- Aluno a, b;
- Na memória do computador 
    -> cria-se espaço para armazenamento do objeto a e do objeto b.
    -> cria-se um espaço em memória para n (compartilhado para os objetos).

- A comunicação entre os objetos ocorre pelo "envio de mensagem" (invocação de métodos).
- Os objetos se comunicam com o padrão cliente-servidor (um serviço é solicitado e uma resposta é esperada).
- Também podemos nomear a comunicação entre objetos como produtor/consumidor.

- Invocação de método em caso de ponteiro:
    - ponteiro -> setAtributo(xpto);

- this -> identificador do objeto no qual se atua no momento;


## Aula 23/06/2022

- [Conceito] Entidades: classes mais complexas (incluem os domínios);

- [Conceito] Domínios: São classes de granularidade baixa. Abaixo de um "Domain" (ou um Type [Tipo]), só temos um tipo de linguagem (string, int etc - tipos primitivos);