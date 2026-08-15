def solve():
    import sys
    
    # Aumentar o limite de recursão para evitar "RecursionError" nos DFS do 2-SAT
    sys.setrecursionlimit(200000)

    input = sys.stdin.read
    data = input().split()
    if not data:
        return

    n = int(data[0])
    idx = 1

    current_teacher = [0] * (n + 1)
    pref = [[0] * n for _ in range(n + 1)]

    for i in range(1, n + 1):
        current_teacher[i] = int(data[idx])
        idx += 1
        for j in range(n - 1):
            pref[i][j] = int(data[idx])
            idx += 1

    # PRÉ-COMPUTAÇÃO DE DESEMPENHO (Evita TLE)
    # Criamos uma matriz O(1) de acesso para saber o rank que o aluno i dá ao aluno j
    pos = [[n] * (n + 1) for _ in range(n + 1)]
    for i in range(1, n + 1):
        for rank in range(n - 1):
            student = pref[i][rank]
            pos[i][student] = rank

    allowed = [[] for _ in range(n + 1)]
    for i in range(1, n + 1):
        for t in range(3):
            if t != current_teacher[i]:
                allowed[i].append(t)

    def solve_2sat(n_vars, clauses):
        adj = [[] for _ in range(2 * n_vars)]
        adj_rev = [[] for _ in range(2 * n_vars)]

        def add_clause(u, v):
            adj[u ^ 1].append(v)
            adj[v ^ 1].append(u)
            adj_rev[v].append(u ^ 1)
            adj_rev[u].append(v ^ 1)

        for u, v in clauses:
            add_clause(u, v)

        order = []
        visited = [False] * (2 * n_vars)

        def dfs1(v):
            visited[v] = True
            for u in adj[v]:
                if not visited[u]:
                    dfs1(u)
            order.append(v)

        for i in range(2 * n_vars):
            if not visited[i]:
                dfs1(i)

        comp = [-1] * (2 * n_vars)
        scc_idx = 0

        def dfs2(v, c):
            comp[v] = c
            for u in adj_rev[v]:
                if comp[u] == -1:
                    dfs2(u, c)

        for v in reversed(order):
            if comp[v] == -1:
                dfs2(v, scc_idx)
                scc_idx += 1

        for i in range(n_vars):
            if comp[2 * i] == comp[2 * i + 1]:
                return False
        return True

    def check(T):
        clauses = []

        for i in range(1, n + 1):
            for j in range(i + 1, n + 1):
                # Utiliza a matriz pré-computada em vez de criar dicionários
                can_i = pos[i][j] < T
                can_j = pos[j][i] < T

                # Se ambos se aceitam dentro da tolerância T, nenhuma regra restritiva é necessária
                if can_i and can_j:
                    continue

                for opt_i in range(2):
                    t_i = allowed[i][opt_i]
                    for opt_j in range(2):
                        t_j = allowed[j][opt_j]

                        # Se eles pegam o mesmo professor, e pelo menos um não aceita o outro,
                        # eles não podem assumir essa combinação juntos.
                        if t_i == t_j:
                            lit_i = 2 * (i - 1) + opt_i
                            lit_j = 2 * (j - 1) + opt_j
                            # Cláusula de implicação negativa: (~lit_i OR ~lit_j)
                            clauses.append((lit_i ^ 1, lit_j ^ 1))

        return solve_2sat(n, clauses)

    low = 0
    high = n - 1
    ans = n - 1

    while low <= high:
        mid = (low + high) // 2
        if check(mid):
            ans = mid
            high = mid - 1
        else:
            low = mid + 1

    print(ans)

if __name__ == "__main__":
    solve()