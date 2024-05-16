graph={
    '5':['2','6'],
    '2':['4','1'],
    '6':['3','9'],
    '4':[],
    '1':[],
    '3':[],
    '9':[]
}

visited=[]
queue=[]

def bfs(visited,queue,node):
    visited.append(node)
    queue.append(node)
    while queue:
        m=queue.pop()
        print(m,end=" ")
        for neighbour in graph[m]:
            if neighbour not in visited:
                visited.append(neighbour)
                queue.append(neighbour)
bfs(visited,queue,'5')            
                
        