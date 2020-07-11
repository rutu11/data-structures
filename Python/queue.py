def createqueue():
    queue = []
    return queue

def enqueue(queue,n):
    queue.append(n)
    return queue

def dequeue(queue):
    n = queue.pop(0)
    return n

def peek(queue):
    n = queue[0]
    return n

def isempty(queue):
    if queue == []:
        return 1
    else:
        return 0
    
def display(queue):
    print(*queue)
    
queue = createqueue()
enqueue(queue,5)
enqueue(queue,7)
display(queue)
dequeue(queue)
display(queue)

