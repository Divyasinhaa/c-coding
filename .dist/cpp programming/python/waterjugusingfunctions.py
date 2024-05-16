def fill_a(jug_a,jug_b):
    jug_a=4
    return jug_a,jug_b
def fill_b(jug_a,jug_b):
    jug_b=3
    return jug_a,jug_b
def empty_a(jug_a,jug_b):
    jug_a=0
    return jug_a,jug_b
def empty_b(jug_a,jug_b):
    jug_b=0
    return jug_a,jug_b
def transfer_a(jug_a,jug_b):
    space_in_b=3-jug_b
    if jug_a<=space_in_b:
        jug_b=jug_a+jug_b
        jug_a=0
    else:
        jug_a-=space_in_b
        jug_b+=space_in_b    
    return jug_a,jug_b
def transfer_b(jug_a,jug_b):
    space_in_a=4-jug_a
    if jug_b<=space_in_a:
        jug_a=jug_a+jug_b
        jug_b=0
    else:
        jug_b-=space_in_a
        jug_a+=space_in_a 
    return jug_a,jug_b
jug1=0
jug2=0
jug1,jug2=fill_a(jug1,jug2)
print(jug1,jug2)
jug1,jug2=transfer_a(jug1,jug2)
print(jug1,jug2)
jug1,jug2=empty_b(jug1,jug2)
print(jug1,jug2)
jug1,jug2=transfer_a(jug1,jug2)
print(jug1,jug2)
jug1,jug2=fill_a(jug1,jug2)
print(jug1,jug2)
jug1,jug2=transfer_a(jug1,jug2)
print(jug1,jug2)
