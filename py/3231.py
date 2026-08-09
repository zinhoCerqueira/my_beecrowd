from collections import deque
import sys


def main():
  # Leitura rápida de toda a entrada padrão
  input_data = sys.stdin.read().split()
  if not input_data:
    return

  iterator = iter(input_data)

  N = int(next(iterator))
  H = int(next(iterator))
  L = int(next(iterator))

  # Lê os IDs dos filmes da lista de horror
  horror_movies = [int(next(iterator)) for _ in range(H)]

  # Constrói a lista de adjacência para representar o grafo de semelhanças
  adj = [[] for _ in range(N)]
  for _ in range(L):
    u = int(next(iterator))
    v = int(next(iterator))
    adj[u].append(v)
    adj[v].append(u)

  # Vetor para armazenar o Índice de Horror (HI) de cada filme.
  # Inicializamos com -1 para indicar que não foram visitados (equivalente a +infinito).
  hi = [-1] * N
  queue = deque()

  # Configuração inicial da BFS Multi-Origem:
  # Todos os filmes da lista de horror começam com HI = 0 e entram na fila.
  for movie in horror_movies:
    hi[movie] = 0
    queue.append(movie)

  # Execução da Busca em Largura (BFS)
  while queue:
    u = queue.popleft()
    for v in adj[u]:
      if hi[v] == -1:  # Se o vizinho ainda não foi visitado
        hi[v] = hi[u] + 1
        queue.append(v)

  # Seleção do melhor filme de acordo com as regras:
  # 1. Maior Índice de Horror (+infinito representado por -1 é o maior de todos).
  # 2. Em caso de empate, o menor ID.
  has_infinite = any(val == -1 for val in hi)

  if has_infinite:
    # Se houver filmes desconectados do horror, o HI deles é +infinito.
    # Entre eles, escolhemos o de menor ID.
    best_movie = min(i for i in range(N) if hi[i] == -1)
  else:
    # Caso contrário, procuramos o maior valor finito de HI
    max_hi = max(hi)
    best_movie = min(i for i in range(N) if hi[i] == max_hi)

  # Imprime o resultado final
  print(best_movie)


if __name__ == "__main__":
  main()