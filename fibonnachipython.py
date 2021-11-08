# write a python program to find fibonacci series
def FunctionName(args):
    if args == 0:
        return 0
    elif args == 1:
        return 1
    else:
        return FunctionName(args - 1) + FunctionName(args - 2)
        
print(FunctionName(10))

        