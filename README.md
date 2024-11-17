# 📚 **Libft**: Uma biblioteca personalizada em C

## 📋 Descrição

O projeto **Libft** é uma implementação personalizada de várias funções comuns da biblioteca padrão do C. Ela contém funções de manipulação de strings, memória, conversão de tipos, e outros utilitários que são frequentemente usados em projetos em C. O objetivo é recriar essas funções do zero para entender melhor o funcionamento delas e melhorar o domínio da linguagem C.

### ✨ Funcionalidades:
- Manipulação de **strings** e **memória**.
- Funções de **conversão de tipos** e **checagem de caracteres**.
- Funções para **escrita de dados em arquivos** (com `write` e `fd`).
- Utilitários como **substrings**, **join**, **split**, **trim** e muito mais.

---

## 🧰 Funções Implementadas

Aqui estão algumas das funções implementadas na biblioteca **Libft**:

### Funções de Manipulação de Caracteres

- **`ft_isalpha`**: Verifica se o caractere é alfabético.
- **`ft_isdigit`**: Verifica se o caractere é um dígito.
- **`ft_isalnum`**: Verifica se o caractere é alfanumérico.
- **`ft_isascii`**: Verifica se o caractere está no conjunto ASCII.
- **`ft_isprint`**: Verifica se o caractere é imprimível.
- **`ft_toupper`**: Converte o caractere para maiúsculo.
- **`ft_tolower`**: Converte o caractere para minúsculo.

### Funções de Strings

- **`ft_strlen`**: Calcula o comprimento de uma string.
- **`ft_strlcpy`**: Copia uma string com controle de limite.
- **`ft_strlcat`**: Concatena uma string com controle de limite.
- **`ft_strncmp`**: Compara duas strings até um número específico de caracteres.
- **`ft_strchr`**: Encontra a primeira ocorrência de um caractere em uma string.
- **`ft_strrchr`**: Encontra a última ocorrência de um caractere em uma string.
- **`ft_strjoin`**: Concatena duas strings.
- **`ft_strtrim`**: Remove caracteres do início e do final de uma string.
- **`ft_substr`**: Cria uma substring a partir de uma string.

### Funções de Memória

- **`ft_bzero`**: Preenche a memória com zeros.
- **`ft_calloc`**: Aloca memória e inicializa com zeros.
- **`ft_memchr`**: Encontra um caractere na memória.
- **`ft_memcpy`**: Copia a memória de uma área para outra.
- **`ft_memmove`**: Move a memória de uma área para outra.
- **`ft_memset`**: Preenche a memória com um valor específico.
- **`ft_memcmp`**: Compara dois blocos de memória.

### Funções de Conversão

- **`ft_atoi`**: Converte uma string para um inteiro.
- **`ft_itoa`**: Converte um inteiro para uma string.

### Funções de Saída

- **`ft_putchar_fd`**: Imprime um caractere em um arquivo (descriptor de arquivo).
- **`ft_putendl_fd`**: Imprime uma string seguida de uma nova linha em um arquivo.
- **`ft_putnbr_fd`**: Imprime um número inteiro em um arquivo.
- **`ft_putstr_fd`**: Imprime uma string em um arquivo.

### Funções Diversas

- **`ft_striteri`**: Aplica uma função em cada caractere de uma string.
- **`ft_strmapi`**: Aplica uma função em cada caractere de uma string e cria uma nova string com os resultados.
- **`ft_split`**: Divide uma string em substrings, baseado em um delimitador.

---

## 🚀 Como Usar

### 1. **Clone o repositório:**

```bash
git clone https://github.com/kpierroti/libft.git
cd libft
```

### 2. **Compilação:**
Use o make para compilar a biblioteca. Isso irá gerar a biblioteca estática libft.a ou o arquivo objeto .o necessário.

```bash
make
```
Se você quiser limpar os arquivos temporários (objetos compilados), pode usar:

```bash
make clean
```
Para limpar todos os arquivos, incluindo a biblioteca compilada:

```bash
make fclean
```
E para recompilar tudo novamente:

```bash
make re
```

### 3. **Exemplo de Uso:**
Aqui está um exemplo simples de como usar algumas funções da Libft em um programa:

```bash
#include "libft.h"

int main() {
    // Exemplo de ft_isdigit
    char c = '5';
    if (ft_isdigit(c)) {
        ft_putstr_fd("É um dígito!\n", 1);
    }

    // Exemplo de ft_atoi
    char *str = "1234";
    int num = ft_atoi(str);
    ft_putnbr_fd(num, 1);
    ft_putchar_fd('\n', 1);

    return 0;
}
```

### **Saída esperada:**

```bash
É um dígito!
1234
```

### **🧠 Como Funciona?**
A Libft funciona fornecendo implementações personalizadas para funções da biblioteca padrão em C. Ela cobre uma gama de operações comuns, como manipulação de strings, memória, entrada/saída e conversões. O código foi projetado para ser reutilizável e eficiente, servindo como base para projetos maiores em C.

### **⚙️ Como Contribuir**
Se você gostaria de melhorar este projeto ou adicionar novos recursos, sinta-se à vontade para abrir uma issue ou pull request. As contribuições são sempre bem-vindas! 🚀
1. Fork o repositório.
2. Crie uma branch para a sua feature (git checkout -b feature/nova-funcionalidade).
3. Faça commit das suas mudanças (git commit -am 'Adicionando nova funcionalidade').
4. Envie para o repositório remoto (git push origin feature/nova-funcionalidade).
5. Abra uma Pull Request.
   
### **🔗 Licença**
Este projeto está licenciado sob a MIT License. Veja o arquivo LICENSE para mais detalhes.

### **🤖 Autor**
Criado por kpierroti.
