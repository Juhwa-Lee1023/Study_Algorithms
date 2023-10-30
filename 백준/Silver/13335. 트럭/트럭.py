from collections import deque

n, w, L = map(int, input().split())
truck_weights = list(map(int, input().split()))
trucks = deque()
time = 0
weight = 0

for truck in truck_weights:
    while True:
        if len(trucks) == w:
            weight -= trucks.popleft()
        else:
            if weight + truck <= L:
                trucks.append(truck)
                weight += truck
                time += 1
                break
            else:
                trucks.append(0)
                time += 1

time += w  

print(time)
