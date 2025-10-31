# APS‑Language‑C  
> Projeto de Aplicação Prática Supervisionada (APS) — Processador / Simulador em C

## 📝 Visão Geral  
Este projeto foi desenvolvido como parte da disciplina de Estrutura de Dados na UNIP e tem por objetivo construir um programa em C que leia dados de entrada, realize algoritmos de ordenação e processamento, e produza resultados conforme especificação. Está organizado em pastas para facilitar manutenção e evolução.

## 📂 Estrutura do Repositório  
- `/include` – Arquivos de cabeçalho (.h) com declarações de funções, structs, macros.  
- `/src` – Implementação em C (.c) dos módulos do sistema.  
- `Makefile` – Arquivo para compilação automática, com targets como `build`, `clean`, `run`.  
- `dados.csv` – Arquivo de entrada com dados iniciais para o processamento.  
- `resultado.csv` – Arquivo de saída contendo os resultados após execução/ordenação.  
- `/ordenacao` – Módulo/pasta específica para algoritmos de ordenação utilizados no projeto.

## 🛠 Funcionalidades principais  
- Leitura de dados em formato CSV.  
- Execução de algoritmo(s) de ordenação (ex: quicksort, mergesort) sobre os dados.  
- Geração de arquivo de saída com os dados ordenados ou processados.  
- Modularização clara entre leitura, ordenação e gravação de resultados.

---

## 🚀 Como rodar o projeto em outro computador

Qualquer pessoa pode baixar e executar este código com apenas alguns comandos no terminal.

### 🔧 Pré-requisitos
Antes de começar, certifique-se de ter instalado:
- **Git** (para clonar o repositório)  
- **GCC** (compilador C)  
- **Make** (para usar o Makefile, opcional mas recomendado)

#### 🐧 Linux / WSL / macOS:
```bash
sudo apt update
sudo apt install git gcc make -y

```

1. **Clone o Repositório**
```bash
git clone https://github.com/GomesMaurici0/APS-Language-C.git
cd APS-Language-C

```

2. **Compile o  Projeto (Usando Makefile)**
```bash
make
```
