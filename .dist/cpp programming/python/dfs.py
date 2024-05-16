tree={
    '5':['4','3'],
    '4':['2'],
    '3':['6'],
    '2':[],
    '6':[],
}
traverse=set()
def dfs(traverse,tree,node):
    if node not in traverse:
        print(node)
        traverse.add(node)
        for next in tree[node]:
            dfs(traverse,tree,next)
print("this is depth first search")
dfs(traverse,tree,'5')            
        