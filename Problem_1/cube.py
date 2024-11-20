###########################################
## Filename : cube.py
## Author : Sed Centeno
## Date : 11/19/2024
##
## Description :
## Prints out numbers 0-19, the number is cubed
## if it is odd
##
## Arguments :
## None
##
## Example Invocation :
## python3 ./cube.py
###########################################



def cb():
    global x
    global y
    if x % 2 == 0:
        y = x
    else:
        y = x * x * x


y = 0
for x in range(20):
    cb()
    print(x, "-->", y)
