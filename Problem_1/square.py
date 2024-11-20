###################################################
## Filename : square.py
## Author : Sed Centeno
## Date : 11/19/2024
##
## Description :
## Prints out the square of all numbers from 0-19
##
## Arguments :
## None
##
## Example Invocation :
## python3 ./square.py
###################################################

def sq():
    global x
    global y
    y = x * x


y = 0
for x in range(20):
    sq()
    print(x, "^2 =", y)
