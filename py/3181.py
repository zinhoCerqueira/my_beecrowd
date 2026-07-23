import sys

def main():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    idx = 0
    n_len = len(input_data)
    
    while idx < n_len:
        N = int(input_data[idx])
        C = int(input_data[idx+1])
        idx += 2
        
        W = [[2008] * N for _ in range(N)]
        
        for _ in range(C):
            u = int(input_data[idx]) - 1
            v = int(input_data[idx+1]) - 1
            y = int(input_data[idx+2])
            W[u][v] = y
            W[v][u] = y
            idx += 3
            
        edges_by_weight = [[] for _ in range(65)]
        for i in range(N):
            for j in range(i + 1, N):
                w = W[i][j]
                if 1948 <= w <= 2008:
                    edges_by_weight[w - 1948].append((i, j))
                    
        degrees = [0] * N
        ans = "Impossible"
        max_s = (2 * N) // 3
        min_s = N - max_s
        
        for Y in range(1948, 2010):
            if Y > 1948:
                for u, v in edges_by_weight[Y - 1 - 1948]:
                    degrees[u] += 1
                    degrees[v] += 1
                    
            sorted_deg = sorted(degrees, reverse=True)
            
            m = 0
            for i in range(N):
                if sorted_deg[i] >= i:
                    m = i + 1
                else:
                    break
                    
            lhs = sum(sorted_deg[:m])
            rhs = m * (m - 1) + sum(sorted_deg[m:])
            
            if lhs == rhs:
                valid_sizes = {m}
                if m < N and sorted_deg[m] == m:
                    valid_sizes.add(m + 1)
                if m > 0 and sorted_deg[m - 1] == m - 1:
                    valid_sizes.add(m - 1)
                    
                if any(min_s <= s <= max_s for s in valid_sizes):
                    ans = str(Y)
                    break
                    
        print(ans)

if __name__ == '__main__':
    main()