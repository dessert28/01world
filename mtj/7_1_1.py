from collections import deque
def main():
    #code here
    n=int(input())
    b=deque()
    for i in range(n):
        o=list(map(int,input().split()))
        if o[0]==1:
            a=o[1]
            s=o[2]
            b.extendleft(range(a,s+1))
        if o[0]==2:
            c=0
            a=o[1]
            for i in range(a):
                c+=b.popleft()
            print(c)


if __name__ == '__main__':
    main();
# dyx