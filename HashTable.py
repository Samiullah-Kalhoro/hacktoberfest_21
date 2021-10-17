hashTable = [[], ] * 10

def checkPrime(n):
    if(n == 1 or n == 0):
        return 0
    
    for i in range(2, n//2):
        if(n%i == 0):
            return 0
    return 1

def getPrime(n):
    if(n%2 == 0):
        n = n+1
    
    while not checkPrime(n):
        n += 2
    
    return n

def hashFunction(key):
    capacity = getPrime(10)
    return key%capacity

def insertData(key, data):
    index = hashFunction(key)
    hashTable[index] = [key, data]

def removeData(key):
    index = hashFunction(key)
    hashTable[index] = 0

insertData(100, "Facebook")
insertData(101, "Apple")
insertData(102, "Amazon")
insertData(103, "Netflix")
insertData(104, "Google")
insertData(105, "Microsoft")
insertData(106, "Tesla")

print(hashTable)

removeData(102)

print(hashTable)