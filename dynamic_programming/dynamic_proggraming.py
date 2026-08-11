#Asilbek Asqarov
#Mohirdev Maʻlumotlar Tuzilmasi va Algoritmlar darslari
#Dynamic programming 
import math
from functools import reduce

def solve_travel(locations:dict, max_hours):
    time_int = [int(v[0] * 100) for v in locations.values()]
    base_unit = reduce(math.gcd, time_int)
    base_unit = base_unit / 100.0

    print("Unit base: ", base_unit)

    capacity = int(max_hours / base_unit)

    names = list(locations.keys())
    times = [int(v[0] / base_unit) for v in locations.values()]
    ratings = [v[1] for v in locations.values()]
    n = len(names)

    dp = []
    for i in range(n + 1):
        row = []
        for j in range(capacity + 1):
            row.append(0)
        dp.append(row)

    for i in range(1,n + 1):
        for j in range(1, capacity + 1):
            if times[i - 1] <= j:
                option1 = dp[i-1][j]
                option2 = ratings[i-1] + dp[i-1][j - times[i - 1]]
                dp[i][j] = max(option1, option2)
            else:
                dp[i][j] = dp[i-1][j]
    
    chosen = []
    w = capacity

    for i in range(n, 0, -1):
        if dp[i][w] != dp[i-1][w]:
            chosen.append(names[i-1])
            w -= times[i - 1]
    return dp[n][capacity], chosen

travel = {
    'chorsu' : [1.5 , 6],
    'mustaqillik maydoni' : [0.5, 7],
    'kokaldosh' : [1, 8],
    'minor' : [0.5, 8],
    'hastimom' : [1, 9],
    'oloy bozor' : [1, 10],
    'muzey' : [2, 8]
}


print(solve_travel(travel, 4))