# Problem: Chopsticks
# Link to the problem: https://www.codechef.com/problems/TACHSTCK
def solve() -> None:
    n: int
    d: int
    n, d = map(int, input().split())
    a: list[int] = []
    for _ in range(n):
        a.append(int(input()))
    a.sort()
    ans: int = 0
    i: int = 0
    while i < n - 1:
        if a[i] >= a[i + 1] - d:
            i += 2
            ans += 1
        else:
            i += 1
    print(ans)


def main() -> None:
    solve()


if __name__ == "__main__":
    main()
