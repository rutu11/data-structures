def createstack():
    stack = []
    return stack

def push(stack, a):
    stack.append(a)
    return stack

def pop(stack):
    x = stack[-1]
    stack.pop(-1)
    return x

def peek(stack):
    if stack == []:
        return 0
    else:
        return stack[-1]
        

def isempty(stack):
    if stack==[]:
        return 1
    else:
        return 0
    
def display(stack):
    print(stack,end=' ')
    
    
if __name__ == '__main__':
    stack = createstack()
    flag = 0
    input_eq = list(input())
    for i in input_eq:
        if (i=='(' or i=='[' or i=='{'):
            push(stack,i)
        else:
            if(i==')' and peek(stack)=='(') or (i==']' and peek(stack)=='[') or (i=='}' and peek(stack)=='{'):
                n = pop(stack)
            elif(i==')' or i==']' or i=='}'):
                flag= 1
                break
    if(isempty(stack) and flag==0):
        print("Well Formed")
    else:
        print("Not well formed")
                
    
