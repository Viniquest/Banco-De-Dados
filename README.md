# Documentação Automática

Este README foi gerado automaticamente com base nos arquivos do repositório.

## arvorebinaria/banco_de_dados.c
Resumo das responsabilidades da classe e seus métodos em arvorebinaria/banco_de_dados.c:

- Classe: BancoDeDados
- Métodos:
  - criarNodoLista: Cria um NodoLista com o nome fornecido.
  - criarNodoArvore: Cria um NodoArvore com os dados fornecidos.
  - criarDados: Cria um objeto Dados com as informações fornecidas.
  - inserirNaArvore: Insere um NodoArvore na árvore binária com base no CPF.
  - inserirNaLista: Insere um NodoLista ordenado na lista de nomes.
  - inserirDados: Insere um registro na lista de nomes, na árvore de CPFs e na lista de dados.
  - criarNodoListaDinamica: Cria um NodoListaDinamica com os dados fornecidos.
  - inserirNaListaDinamica: Insere um NodoListaDinamica no final da lista.
  - imprimirListaDinamicaOrdenada: Imprime os registros da lista de dados ordenados pelos nomes.
  - adicionarRegistro: Adiciona um novo registro no banco de dados.
  - alterarRegistro: Altera um registro existente no banco de dados.
  - excluirRegistro: Exclui um registro existente no banco de dados.
  - procurarRegistro: Procura um registro na árvore de CPFs com base no CPF fornecido.
  - buscarNaArvore: Busca um nodo na árvore binária com base no CPF fornecido.
  - removerDaArvore: Remove um nodo da árvore binária com base no CPF fornecido.

## arvorebinaria/banco_de_dados.h
Resumo:
A classe BancoDeDados possui a responsabilidade de armazenar e manipular dados de clientes em uma árvore binária e em listas encadeadas. Alguns dos principais métodos da classe são:

- criarNodoLista: cria um nodo para ser utilizado em uma lista encadeada com o nome do cliente.
- criarNodoArvore: cria um nodo para ser utilizado na árvore binária com os dados do cliente.
- criarDados: cria e inicializa os dados do cliente com CPF, nome, endereço, telefone e email.
- criarNodoListaDinamica: cria um nodo para ser utilizado em uma lista dinâmica com os dados do cliente.

- inserirNaArvore: insere um novo cliente na árvore binária.
- inserirNaLista: insere um novo cliente na lista encadeada.
- inserirNaListaDinamica: insere um novo cliente na lista dinâmica.
- inserirDados: insere os dados do cliente nas listas e na árvore.

- imprimirListaDinamicaOrdenada: imprime a lista de nomes dos clientes de forma ordenada.

- buscarNaArvore: busca um cliente na árvore binária pelo CPF.
- removerDaArvore: remove um cliente da árvore binária pelo CPF.
- adicionarRegistro: adiciona um novo registro de cliente nas listas e na árvore.
- alterarRegistro: altera um registro existente de cliente nas listas e na árvore.
- excluirRegistro: exclui um registro de cliente das listas e da árvore.
- procurarRegistro: procura um registro de cliente na árvore binária.

## arvorebinaria/cmake-build-debug/CMakeFiles/3.28.1/CompilerIdC/CMakeCCompilerId.c
Resumo:
A classe é responsável por identificar o compilador, plataforma, arquitetura e padrão de linguagem. Ela contém métodos para gerar informações sobre o compilador (como identificação e versão), plataforma, arquitetura, padrão de linguagem (padrão e extensões) e versão interna do compilador. Além disso, o código também contém um método main para interagir com essas informações.

## arvorebinaria/main.c
Classe: Árvore Binária

Responsabilidades da classe:
- Gerenciar operações de adicionar, alterar, excluir, procurar e gerar relatório de registros.
- Exibir um menu de opções para interação com o usuário.
- Utilizar uma lista de nomes, uma árvore de CPFs e uma lista dinâmica de dados para armazenar registros.

Métodos:
- menu(): exibe o menu de opções para o usuário.
- main(): executa um loop que aguarda a seleção de uma opção pelo usuário e chama os métodos correspondentes para realizar a operação selecionada.
  - OP_ADICIONAR: chama o método adicionarRegistro() passando a lista de nomes, a árvore de CPFs e a lista dinâmica de dados.
  - OP_ALTERAR: chama o método alterarRegistro() passando a lista de nomes, a árvore de CPFs e a lista dinâmica de dados.
  - OP_EXCLUIR: chama o método excluirRegistro() passando a lista de nomes, a árvore de CPFs e a lista dinâmica de dados.
  - OP_PROCURAR: chama o método procurarRegistro() passando a árvore de CPFs.
  - OP_RELATORIO: exibe um relatório ordenado de nomes e dados utilizando a lista de nomes e a lista dinâmica de dados.
  - OP_SAIR: exibe uma mensagem de saída do programa.

