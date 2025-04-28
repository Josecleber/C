## Projeto: Dilatação Térmica (C)

Este projeto, desenvolvido para uma disciplina, calcula a dilatação térmica de vários materiais a partir de seus comprimentos iniciais, coeficientes de dilatação linear e uma variação de temperatura fornecida pelo usuário.

### Funcionamento

- Usuário informa o número de materiais a serem analisados.
- Para cada material, o programa solicita:
  - Comprimento inicial (em metros)
  - Coeficiente de dilatação linear (em 1/°C)
- Também é solicitada a variação de temperatura.
- O programa calcula a dilatação térmica de cada material utilizando a fórmula:

\[
\Delta L = L_0 \times \alpha \times \Delta T
\]

onde:
- \( L_0 \) é o comprimento inicial
- \( \alpha \) é o coeficiente de dilatação
- \( \Delta T \) é a variação de temperatura

- Por fim, o programa exibe a dilatação de cada material.

### Exemplo de Saída

```text
Digite o numero de materiais: 2
Digite a variacao de temperatura (em graus Celsius): 30
Digite o comprimento inicial e o coeficiente de dilatacao dos materiais:
Material 1
Comprimento inicial (em metros): 2
Coeficiente de dilatacao (em 1/°C): 0.000012
Material 2
Comprimento inicial (em metros): 3
Coeficiente de dilatacao (em 1/°C): 0.000015

Dilatacao dos Materiais:
Material 1: Dilatacao = 0.000720 metros
Material 2: Dilatacao = 0.001350 metros
```

## Autor
José Cleber Alves da Cruz Mendes  
Curso: Engenharia da Computação – Uniube
