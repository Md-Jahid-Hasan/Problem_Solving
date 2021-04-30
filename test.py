# Add some code
t = int(input())
army = []
for i in range(0, t):
    n = int(input())
    q = int(input())
    for j in range(0, n):
        army.append(int(input()))
    for k in range(0, q):
        action = input()
        person = int(input())
        if action == 'a':
            army.append(person)
        elif(len(army) < person):
            print("none")
        else:
            print(army[person])
        