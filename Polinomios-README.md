# Mini projeto de Polinômios

### Especificação

Você deve implementar um programa que lê uma lista de polinômios via entrada padrão e, em seguida, realiza operações abritárias com os polinômios lidos. Cada polinômio recebe é representado por uma `string` que contém: um identificador (ou nome), o caractere separador ‘:’ e a lista de termos do polinômio em qualquer ordem.

A entrada segue o  seguinte formato: $id:a_kx^k + a_zx^z + ...$

A `string` do identificador é o nome do polinômio. Ela será usada para identificar o polinômio em operações futuras. O indentificador sempre será formado por uma sequência de caracteres de `[a-z]` , portanto não terá espaços ou outros caracteres especiais. O caractere ‘:’ sempre ocorre no final da `string` identificadora do polinômio, servindo como caractere separador do nome e da lista que define os coeficientes. Os coeficientes, por sua vez, sempre seguem o formato $a_ kx^k$, mesmo para valores de $k$ iguais a $0$ ou iguais a $1$. Não são admitidos termos diferentes com o mesmo grau de potência.

**Exemplos de entradas válidas:**

```markdown
zero: 0x^0
constante: 20x^0
A: 2x^4+2x^0
poliB: 1x^3
```

O seu programa deverá usar uma estrutura para representar cada polinômio. A estrutura será composta por uma `string` identificadora (id), o valor do maior grau do polinômio (p) e um vetor de coeficientes (coef). O indice de cada coeficiente indica a potência de cada termo do polinômio.  A estrutura a ser usada deve ser a seguinte:

```c
typedef struct polynomio {
	char *id;       // string com o nome do polinômio
	int p;          // grau do polinômio
	double *coef;   // vetor de coeficientes do polinômio
} Poly;
```

Seu programa deverá ler uma quantidade indeterminada de polinômios e seus respectivos identificadores, armazená-los em um vetor de polinômios e, em seguida, executar operações arbitrárias entre os polinômios armazenados em memória. **Soma** e **Subtração** são as únicas operações suportadas. Cada operação é formada pela ocorrência de um primeiro identificador, seguido do sinal da operação e do segundo identificador. Neste projeto, um polinômio é sempre apresentado em **ordem crescente das potências** de cada coeficiente e **sem espaços**. Se um coeficiente é **zero**, então esse termo não é apresentado. A seguir, é apresentado um exemplo de entrada de operações com as respectivas saídas.

**Exemplo de entrada:**

```markdown
zero - A
poliB + constante
```

**Exemplo de saída:**

```markdown
-2x^0-2x^4
20x^0+1x^3
```

## Testando o seu programa

1. Crie um arquivo texto de nome `entrada` com o seguinte conteúdo:

```markdown
4
A: 1x^2+3x^9-2x^0
B: 5x^3-2x^1
C: 4x^0
D: -6x^3
```

1. Execute o seu programa, aqui denominado `prog`, utilizando o redirecionamento da entrada padrão, com a seguinte linha de comando:

```markdown
./prog < entrada
```

1. No mesmo arquivo de entrada, inclua a quantidade de operações que deseja realizar e, em seguida, informe as operações:

```markdown
3
A+B
C-D
B+D
```

1. Como resultado, espera-se o seguinte texto:

```markdown
-2x^0-2x^1+1x^2+5x^3+3x^9
4x^0+6x^3
-2x^1-1x^3
```
