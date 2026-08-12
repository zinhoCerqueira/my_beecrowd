import sys

def main():
    input_data = sys.stdin.read().split()
    if not input_data:
        return
    
    n = int(input_data[0])
    
    p = [0] * (n + 1)
    r = [0] * (n + 1)
    c = [0] * (n + 1)
    current_load = [0] * (n + 1)
    
    houses = []
    idx = 1
    for i in range(1, n + 1):
        pi = int(input_data[idx])
        ri = int(input_data[idx + 1])
        ci = int(input_data[idx + 2])
        idx += 3
        
        p[i] = pi
        r[i] = ri
        c[i] = ci
        houses.append((ri, i))
        
    houses.sort(key=lambda x: x[0])
    
    count = 0
    for req, u in houses:
        possible = True
        curr = u
        while curr != 0:
            if current_load[curr] + req > c[curr]:
                possible = False
                break
            curr = p[curr]
            
        if possible:
            curr = u
            while curr != 0:
                current_load[curr] += req
                curr = p[curr]
            count += 1
            
    print(count)

if __name__ == '__main__':
    main()