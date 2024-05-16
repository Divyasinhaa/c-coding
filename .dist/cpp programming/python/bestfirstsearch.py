g={
  'A':['Z','S','T'],
  'Z':['A','O'],
  'S':['A','F','R','O'],
  'T':['A','L'],
  'O':['Z','S'],
  'F':['S','B'],
  'R':['S','P','C'],
  'L':['T','M'],
  'M':['L','D'],
  'D':['M','C'],
  'C':['D','R','P'],
  'P':['R','C','B'],
  'B':['F','P','G','U'],
  'G':['B'],
  'U':['B','V','H'],
  'V':['U','I'],
  'I':['V','N'],
  'N':['I'],
  'H':['U','E'],
  'E':['H'],
}

hf={
  'A':366,'B':0,'C':160,'D':242,'E':161,'F':176,'G':77,'H':151,'I':226,'L':244,'M':241,'N':234,'O':380,'P':100,'R':193,'S':253,'T':329,'U':80,'V':199,'Z':374,
}

def hf_val(node):
  return hf[node]

open=[]
close=[]
root=input("enter the initial state:")
open.append(root)
goal=input("Enter the Goal")
while open:
  front=open.pop(0)
  if front==goal:
    close.append(front)
    break
  else:
    close.append(front)
    for child in g[front]:
     if child not in open and child not in close :
       open.append(child)
    open.sort(key=hf_val)
print(close)


