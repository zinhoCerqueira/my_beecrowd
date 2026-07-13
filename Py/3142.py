import sys

def resolver():
    # sys.stdin.read().splitlines() lê TODO o arquivo de testes de uma vez
    # e divide cada linha em um item de uma lista, eliminando problemas de EOF.
    linhas = sys.stdin.read().splitlines()
    
    limite = 16384  # 16384 corrigido

    for linha in linhas:
        # Se a linha vier com espaços em branco, o .strip() limpa.
        linha = linha.strip()
        
        # Se mesmo depois de limpar a linha estiver vazia, pulamos para a próxima
        if not linha:
            continue
            
        resultado = 0
        
        for letra in linha:
            valor_letra = ord(letra) - 64
            resultado = (resultado * 26) + valor_letra
        
        if resultado > limite:
            print("Essa coluna nao existe Tobias!")  #
        else: 
            print(resultado)

# Chama a função para executar
if __name__ == "__main__":
    resolver()