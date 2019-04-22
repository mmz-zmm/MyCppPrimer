t1 = [1,2,3]
t2 = ['a','b','c']

with open('./test.txt', 'w') as f:
    #f.write('This ' + str(i) for i in t1 + " is same to" + str(j) for j in t2)
    for record in zip(t1,t2):
        f.write('This {0!s} is same to {1}\n'.format(record[0], record[1]))