def climbingStairs(N):
    if N<2:
        return 1
    else :
        return climbingStairs(N-1)+climbingStairs(N-2)

