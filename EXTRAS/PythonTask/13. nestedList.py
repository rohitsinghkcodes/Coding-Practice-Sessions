list1 = input('Enter the list: ')
l = []
for i in list1:
    if(i.isnumeric()):
        l.append(int(i))

print(f'No of 1 in list = {l.count(1)}')
print(f'No of 2 in list = {l.count(2)}')
print(f'No of 3 in list = {l.count(3)}')
print(f'No of 4 in list = {l.count(4)}')