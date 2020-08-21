from math import sin, cos, sqrt, atan2, pi
def rad(n):
    deg = pi / 180
    return n*deg
N = int(input())
lat = list(map(float, input().split()))
lon = list(map(float,input().split()))
hts = list(map(float, input().split()))
q = list(map(float, input().split()))
dist = []
tows = []
R = 6371.0
for i in range(N):
    lat1 = rad(lat[i])
    lon1 = rad(lon[i])
    h = hts[i]
    lat2 = rad(q[0])
    lon2 = rad(q[1])
    dlon = lon2 - lon1
    dlat = lat2 - lat1

    a = sin(dlat / 2)**2 + cos(lat1) * cos(lat2) * sin(dlon / 2)**2
    c = 2 * atan2(sqrt(a), sqrt(1 - a))
    distance = R * c
    dist.append(distance)
    tows.append(sqrt((2*h*R)))


ct = 0
for m in dist:
    for each in tows:
        if m <= each:
            ct += 1
print(ct)
