import sys
import heapq

def solve():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    N = int(input_data[0])
    R = int(input_data[1])
    
    idx = 2
    mand_edges = []
    total_mand_cost = 0
    for _ in range(R):
        u = int(input_data[idx]) - 1
        v = int(input_data[idx+1]) - 1
        c = int(input_data[idx+2])
        mand_edges.append((u, v, c))
        total_mand_cost += c
        idx += 3
        
    F = int(input_data[idx])
    idx += 1
    opt_edges = []
    for _ in range(F):
        u = int(input_data[idx]) - 1
        v = int(input_data[idx+1]) - 1
        c = int(input_data[idx+2])
        opt_edges.append((u, v, c))
        idx += 3
        
    dist_fw = [[float('inf')] * N for _ in range(N)]
    for i in range(N):
        dist_fw[i][i] = 0
        
    for u, v, c in mand_edges:
        if c < dist_fw[u][v]:
            dist_fw[u][v] = c
            dist_fw[v][u] = c
            
    for u, v, c in opt_edges:
        if c < dist_fw[u][v]:
            dist_fw[u][v] = c
            dist_fw[v][u] = c
            
    for k in range(N):
        for i in range(N):
            for j in range(N):
                if dist_fw[i][k] + dist_fw[k][j] < dist_fw[i][j]:
                    dist_fw[i][j] = dist_fw[i][k] + dist_fw[k][j]
                    
    req_nodes_set = {0}
    for u, v, c in mand_edges:
        req_nodes_set.add(u)
        req_nodes_set.add(v)
        
    req_nodes = list(req_nodes_set)
    
    parent = list(range(N))
    def find(i):
        if parent[i] == i:
            return i
        parent[i] = find(parent[i])
        return parent[i]
        
    def union(i, j):
        root_i = find(i)
        root_j = find(j)
        if root_i != root_j:
            parent[root_i] = root_j
            
    for u, v, c in mand_edges:
        union(u, v)
        
    comp_id = {}
    curr_id = 0
    comp = [0] * N
    for u in req_nodes:
        root = find(u)
        if root not in comp_id:
            comp_id[root] = curr_id
            curr_id += 1
        comp[u] = comp_id[root]
        
    K = curr_id
    
    deg = [0] * N
    for u, v, c in mand_edges:
        deg[u] += 1
        deg[v] += 1
        
    init_p = 0
    for u in req_nodes:
        if deg[u] % 2 != 0:
            init_p |= (1 << u)
            
    start_c = 1 << comp[0]
    target_c = (1 << K) - 1
    
    dist = [float('inf')] * (1 << (K + N))
    start_idx = (start_c << N) | init_p
    dist[start_idx] = 0
    
    pq = [(0, start_c, init_p)]
    
    while pq:
        d, m_c, m_p = heapq.heappop(pq)
        
        if m_c == target_c and m_p == 0:
            print(total_mand_cost + d)
            return
            
        if d > dist[(m_c << N) | m_p]:
            continue
            
        active_us = [u for u in req_nodes if (m_c & (1 << comp[u]))]
        
        for u in active_us:
            for v in req_nodes:
                if (m_c & (1 << comp[v])) == 0:
                    w = dist_fw[u][v]
                    if w != float('inf'):
                        nxt_c = m_c | (1 << comp[v])
                        nxt_p = m_p ^ (1 << u) ^ (1 << v)
                        nxt_d = d + w
                        idx_nxt = (nxt_c << N) | nxt_p
                        if nxt_d < dist[idx_nxt]:
                            dist[idx_nxt] = nxt_d
                            heapq.heappush(pq, (nxt_d, nxt_c, nxt_p))
                            
        first_odd = -1
        for i in active_us:
            if m_p & (1 << i):
                first_odd = i
                break
                
        if first_odd != -1:
            u = first_odd
            for v in active_us:
                if u != v and (m_p & (1 << v)):
                    w = dist_fw[u][v]
                    if w != float('inf'):
                        nxt_c = m_c
                        nxt_p = m_p ^ (1 << u) ^ (1 << v)
                        nxt_d = d + w
                        idx_nxt = (nxt_c << N) | nxt_p
                        if nxt_d < dist[idx_nxt]:
                            dist[idx_nxt] = nxt_d
                            heapq.heappush(pq, (nxt_d, nxt_c, nxt_p))

if __name__ == '__main__':
    solve()