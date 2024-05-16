print("Water Jug Problem")
x=int(input("enter value for a:"))
y=int(input("enter value for b:"))
while True:
    ruleno=int(input("Enter your ruleno:"))
    if ruleno==1:
        if x<4:
            x=4
    if ruleno==2:
        if y<3:
            y=3  
    if ruleno==5:
        if x>0:
            x=0 
    if ruleno==6:
        if y>0:
            y=0   
    if ruleno==7:
        if x+y>=4 and y>0: 
            x,y=4,y-(4-x)
    if ruleno==8:
        if x+y>=3 and x>0: 
            x,y=x-(3-y),3  
    if ruleno==9:
        if x+y<=4 and x>0: 
            x,y=x+y,0
    if ruleno==10:
        if x+y<=3 and x>0: 
            x,y=0,x+y                   
    print("X",x)         
    print("Y",y)    
    if(x==2):
        print("the state is the goal state")
        break
    
                                       
        