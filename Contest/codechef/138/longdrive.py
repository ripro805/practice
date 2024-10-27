import math

t = int(input())  # Read the number of test cases
for _ in range(t):
    x, y = map(int, input().split())  # Read the current and target average speeds
    up = 10 * (x - y)
    down = y - 100
    min_hours = math.ceil(up / down)  # Calculate the minimum additional hours required
    print(min_hours)  # Print the result for each test case
