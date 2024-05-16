graph={
    '5':['2','6'],
    '2':['4','1'],
    '6':['3','9'],
    '4':[],
    '1':[],
    '3':[],
    '9':[]
}

traverse=set()


def dfs(traverse,graph,node):
    if node not in traverse:
        print(node)
        traverse.add(node)
        for next in graph[node]:
            dfs(traverse,graph,next)
dfs(traverse,graph,'5')        
                
        