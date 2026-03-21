# Problem: Maximum Weight Difference
# Link to the problem: https://www.codechef.com/problems/MAXDIFF
def solve() -> None:
    n: int
    k: int
    n, k = map(int, input().split())
    total: int = 0
    a: list[int] = list(map(int, input().split()))
    for i in range(n):
        total += a[i]
    a.sort()
    topK: int = 0
    bottomK: int = 0
    for i in range(k):
        topK += a[i]
        bottomK += a[n - i - 1]
    ans: int = max(abs(topK - (total - topK)), abs(bottomK - (total - bottomK)))
    print(ans)


def main() -> None:
    t: int = int(input())
    for _ in range(t):
        solve()


main()
