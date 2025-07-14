def main():
    t = int(input())
    while t >= 1:
        print(f"{t}", end=" ")
        if t == 1:
            break
        t = series(t)


def series(t):
    if t % 2 == 0:
        t = t // 2
    else:
        t = (t * 3) + 1
    return t

if __name__ == '__main__':
    main()