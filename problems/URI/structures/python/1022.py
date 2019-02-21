import sys

def operacao(a, b, c, d):
    switcher = {
            "+": {
                "x": a*d+c*b,
                "y": b*d
            }, "-": {
                "x": a*d-c*b,
                "y": b*d
            }, "*": {
                "x": a*c,
                "y": b*d
            }, "/": {
                "x": a*d,
                "y": b*c 
            }
    }

    return switcher

def MDC(a, b):
    while (b != 0):
        r = a % b
        a = b
        b = r

    return a

def main():
    N = int(input())

    for line in sys.stdin:
        a = int(line.split(" ")[0])
        b = int(line.split(" ")[2])
        c = int(line.split(" ")[4])
        d = int(line.split(" ")[6])

        operando = line.split(" ")[3]

        x = operacao(a, b, c, d)[operando]["x"]
        y = operacao(a, b, c, d)[operando]["y"]

        mdc = MDC(x, y)
        
        w = x / mdc
        z = y / mdc

        
        print("%d/%d = %d/%d" % (x, y, w, z))


main();

