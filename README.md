# O que você vai fazer?


1- Criar uma struct chamada Territorio que armazenará informações como nome, cor do exército e quantidade de tropas. O sistema permitirá o cadastro de 5 territórios e exibirá seus dados logo após o preenchimento.

2- Primeiro, você receberá a missão de implementar a funcionalidade de ataque entre territórios. Com base nos territórios já cadastrados, o sistema deverá permitir que um jogador selecione um território como atacante, e outro como defensor. O ataque será resolvido por meio de uma simulação com dados aleatórios (como rolagem de dados), e o resultado alterará o controle e as tropas do território atacado. 

 

Lembre-se: essa etapa deve utilizar ponteiros para manipular os dados dos territórios e a alocação dinâmica de memória para armazenar os territórios cadastrados, fornecendo maior flexibilidade ao sistema.

# Requisitos funcionais


1- Veja os passos para criar e manipular uma estrutura que representa territórios em um sistema simples.

 Criação da struct: definir uma struct chamada Territorio com os campos char nome[30], char cor[10] e int tropas.
 
Cadastro dos territórios: o sistema deve permitir que o usuário cadastre cinco territórios informando o nome, cor do exército e o número de tropas de cada um.
 
Exibição dos dados: o sistema deve exibir as informações de todos os territórios registrados após o cadastro.

2- Veja as funcionalidades essenciais para a implementação de uma simulação de batalha entre territórios.

 Alocação dinâmica de territórios: utilizar calloc ou malloc para alocar memória para um vetor de struct Territorio com tamanho informado pelo usuário.
 
Simulação de ataques: criar uma função void atacar(Territorio* atacante, Territorio* defensor) que simula um ataque, utilizando números aleatórios como se fossem dados de batalha.
 
Atualização de dados: o território defensor deve mudar de dono (cor do exército) se o atacante vencer, e suas tropas devem ser atualizadas.
 
Exibição pós-ataque: o sistema deve exibir os dados atualizados dos territórios após cada ataque.

# Requisitos não funcionais

1- Inclua também os seguintes critérios para ter um código funcional, eficiente e fácil de entender:

 - Usabilidade: a interface de entrada deve ser simples e clara, com mensagens que orientem o usuário sobre o que digitar.
 
- Desempenho: o sistema deve apresentar os dados logo após o cadastro, com tempo de resposta inferior a 2 segundos.
 
- Documentação: o código deve conter comentários explicativos sobre a criação da struct, entrada e exibição de dados.
 
- Manutenibilidade: os nomes das variáveis e funções devem ser claros e representativos, facilitando a leitura e manutenção do código.

2- A implementação deve seguir boas práticas de organização, uso eficiente da memória e interação clara com o usuário. Acompanhe!

 
- Modularização: o código deve estar organizado com funções distintas para cadastro, exibição, ataque e liberação de memória.
 
- Uso de ponteiros: todos os acessos e modificações aos dados dos territórios devem ser feitos por ponteiros.
 
- Gerenciamento de memória: toda memória alocada dinamicamente deve ser liberada ao final do programa utilizando free.
 
- Interface amigável: o terminal deve orientar o jogador sobre quais territórios podem ser usados para atacar e defender, com mensagens claras.

# Instruções detalhadas


1- Siga os passos a seguir para implementar o programa de cadastro de territórios:

 - Bibliotecas necessárias: inclua as bibliotecas stdio.h e string.h.
 
- Definição da struct: crie a struct Territorio com os campos mencionados.
 
- Declaração de vetor de structs: crie um vetor com capacidade para armazenar 5 estruturas do tipo Territorio.
 
- Entrada dos dados: utilize um laço for para preencher os dados dos 5 territórios.
 
- Exibição: percorra, após o cadastro, o vetor e exiba os dados de cada território com formatação clara.

2- Para que o programa funcione da maneira esperada, alguns elementos e etapas de implementação devem ser seguidos conforme descrito a seguir.

 
- Bibliotecas necessárias: inclua stdio.h, stdlib.h, string.h e time.h.
 
- Struct atualizada: utilize a struct Territorio com os campos char nome[30], char cor[10], int tropas.
 
- Alocação de memória: peça ao usuário o número total de territórios e use calloc ou malloc para alocar esse vetor de forma dinâmica.
 
- Função de ataque: implemente void atacar(Territorio* atacante, Territorio* defensor) que utilize rand() para simular um dado de ataque (1 a 6) para cada lado.
 
- Atualização dos campos: transfira a cor e metade das tropas para o território defensor se o atacante vencer. Se perder, o atacante perde uma tropa.
 
- Liberação de memória: crie uma função void liberarMemoria(Territorio* mapa) para liberar o espaço alocado.

# Requisitos técnicos adicionais

1- Aqui estão algumas orientações adicionais para uma implementação correta e bem documentada:

 - Use scanf para ler o nome e o número de tropas.
 
- Utilize fgets ou scanf("%s", ...) com cuidado para strings.
 
- Comente seu código explicando a criação e o uso da struct e a lógica do laço de entrada e saída.

2- Alguns cuidados extras proporcionam o bom funcionamento e a legibilidade do programa. São eles:

 
- Utilizar srand(time(NULL)) para garantir aleatoriedade nos dados de ataque.
 
- Validar as escolhas de ataque para que o jogador não ataque um território da própria cor.
 
- Usar free corretamente ao final do programa.
 
- Comentar o código explicando cada função e trecho importante.

# Comentários adicionais


1- Este desafio introduz o conceito de structs como ferramenta para agrupar dados relacionados. Assim, ao final, você entenderá como utilizar estruturas compostas para organizar informações e criar sistemas mais legíveis e escaláveis.
2-O desafio do nível aventureiro representa um passo importante na evolução do sistema do War estruturado. A funcionalidade de ataque aproxima o sistema do comportamento real do jogo e reforça habilidades fundamentais para a construção de programas interativos e escaláveis em C.

Usar o gcc war.c && ./a.out 


