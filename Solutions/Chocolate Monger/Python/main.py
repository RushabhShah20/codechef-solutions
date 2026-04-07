# Problem: Chocolate Monger
# Link to the problem: https://www.codechef.com/problems/CM164364
from collections import Counter


def solve():
    n: int
    x: int
    n, x = map(int, input().split())
    a: list[int] = list(map(int, input().split()))
    m: dict[int, int] = Counter(a)
    ans: int = 0
    y: int = 0
    for i in m:
        if y < n - x:
            y += 1
            ans += 1
        else:
            break
    print(ans)


def main():
    t: int = int(input())
    while t > 0:
        solve()
        t -= 1


if __name__ == "__main__":
    main()
