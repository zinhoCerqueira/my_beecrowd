import sys
import math

def resolver():
    entrada = sys.stdin.read().split()
    if not entrada:
        return
    
    indice = 0
    while indice < len(entrada):
        W = int(entrada[indice])
        N = int(entrada[indice+1])
        indice += 2
        
        # Armazena linhas únicas (A, B, C) e direções únicas (A, B)
        linhas_unicas = set()
        direcoes_unicas = set()
        
        for _ in range(N):
            x1 = int(entrada[indice])
            y1 = int(entrada[indice+1])
            x2 = int(entrada[indice+2])
            y2 = int(entrada[indice+3])
            indice += 4
            
            # Equação da reta: Ax + By + C = 0
            A = y2 - y1
            B = x1 - x2
            C = x2 * y1 - x1 * y2
            
            # Normalização pelo MDC para simplificar a equação
            # Usa math.gcd aninhado para funcionar perfeitamente em qualquer versão do Python
            g = math.gcd(abs(A), math.gcd(abs(B), abs(C)))
            if g != 0:
                A //= g
                B //= g
                C //= g
            
            # Padroniza o sinal para garantir que (A, B, C) e (-A, -B, -C) sejam vistos como iguais
            if A < 0 or (A == 0 and B < 0):
                A = -A
                B = -B
                C = -C
                
            linhas_unicas.add((A, B, C))
            direcoes_unicas.add((A, B))
            
        U = len(linhas_unicas)
        D = len(direcoes_unicas)
        
        # Cálculo correto das regiões infinitas (R)
        if D <= 1:
            # Todas as retas são paralelas (ou só há 1 reta)
            R = U + 1
        else:
            # Retas em posição geral formam 2*U regiões infinitas
            R = 2 * U
            
        # Avaliando se precisamos de linhas extras
        if R >= W:
            print(0)
        else:
            # Se adicionarmos linhas, a melhor escolha é sempre uma linha transversal
            # que garanta D >= 2. A fórmula final de regiões será 2 * (U + Linhas Extras).
            # Logo, queremos: 2 * (U + K) >= W   =>   2K >= W - 2U
            faltam = W - (2 * U)
            linhas_extras = (faltam + 1) // 2
            
            # Se precisarmos de linhas, devemos adicionar no MÍNIMO 1, mesmo que a 
            # matemática acima resulte em 0 (ocorre quando D=1 e 2U >= W, mas R < W).
            print(max(1, linhas_extras))

if __name__ == '__main__':
    resolver()