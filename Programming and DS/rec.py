n=5

def fun(n,a,b):
    if n>0:
        fun(n-1,b,a+b)
        print(a)

fun(n,0,1)