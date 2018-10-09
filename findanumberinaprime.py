print("This program will find a number in between all primes laid end to end. \n(example: 23571113...")
print("What number do you want to find?")
findThis = input()
numLength = len(str(findThis))
print("If you let the program keep going, it'll probably take super long to find larger numbers.\nEnter a cutoff length for the prime-string (NOT the cutoff of number of primes laid end to end).\nA good value here is 5000 if you have a decent CPU. If you're not worried about freezing your computer or waiting forever, use whatever you want I guess.")
cutOff = input()
primes = ""
i = 2
found = False
while len(primes) < int(cutOff):
      isP = 0
      for x in range(2,i):
          if i % x == 0:
              isP += 1
      if isP == 0:
          primes = primes + str(i)
      i = i + 1
         #backPrimes = primes[::-1]
      if primes[len(primes)-numLength:len(primes)] == findThis:
            found = True
            print(str(findThis) + " found starting at character: " + str(len(primes)+1-numLength))
            break
      #print("Didn't break")
if found == True:
      print("Print primes leading up to your number? (y/n)")
      pp = input()
      if pp.lower() == "y":
          print(primes)
else:
      print(str(findThis) + " not found up to given cutoff " + str(cutOff) + " :(")
#print(backPrimes[0:numLength])
