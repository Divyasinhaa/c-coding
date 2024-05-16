initial_state = [0,0]  # our initial state and goal state here
goal_state = [[2,0],[2,1],[2,2],[2,3]]

def water_jug_successor_state(state):   #finding the new state from current state using fill tranfer throw operation
    new=[]                              # our logic to generate successors of a state for Water Jug Problem

    s=state.copy()
    if s[0]!=4 :    #fill jug A
        s[0]=4     
        new.append([s[0],s[1]])
    
    s=state.copy()
    if s[1]!=3 :    #fill jug B
        s[1]=3     
        new.append([s[0],s[1]])

    s=state.copy()
    if ( s[0]!=0 ) and ( s[1]!=3 ) : #transfer water from s[0] to s[1]
        space_in_B = 3-s[1]
        if s[0]>=space_in_B:
            s[0]-=space_in_B
            s[1]+=space_in_B
        else :
            s[1]+=s[0]
            s[0]=0
        new.append([s[0],s[1]])

    s=state.copy()
    if ( s[1]!=0 ) and ( s[0]!=4 ) : #transfer water from s[1] to s[0]
        space_in_A = 4-s[0]
        if s[1]>=space_in_A:
            s[1]-=space_in_A
            s[0]+=space_in_A
        else :
            s[0]+=s[1]
            s[1]=0
        new.append([s[0],s[1]])

    s=state.copy()
    if s[0]!=0 : # empty jug s[0] : set value of s[0] to 0
        s[0]=0
        new.append([s[0],s[1]])

    s=state.copy()
    if s[1]!=0 :  #empty jug s[1] : set value of s[1] to 0
        s[1]=0
        new.append([s[0],s[1]])

    return new

def bfs(initial_state, goal_state):
    NODE_LIST = [initial_state]  # Initializing the NODE_LIST with the initial state
    visited=[[0,0]]
    i=1
    while NODE_LIST:
        E = NODE_LIST.pop(0)  # Removing the first element from NODE_LIST
        print("S",i,"=>",E)
        i+=1
        if E in goal_state:
            return E  # Goal state found, returning it

        for new_state in water_jug_successor_state(E):
            if new_state not in visited :
                NODE_LIST.append(new_state)  # Add new states to the end of NODE_LIST
                visited.append(new_state)

    return None  # Goal state not found

result = bfs(initial_state, goal_state)
if result:
    print("Goal state found:", result)
else:
    print("Goal state not found.")
