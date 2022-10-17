
from sys import stdin

def removeConsecutiveDuplicates(string):
    n = len(string)

    if n == 0:
        return string

    answer = ""                                 #empty string

    startIndex = 0                              #pointer to iterate over given string
    while startIndex < n:
        uniquechar = string[startIndex]         #taking first character as unique
        nextuniquecharIndex = startIndex + 1

        while(nextuniquecharIndex < n) and (string[nextuniquecharIndex] == uniquechar):
            nextuniquecharIndex += 1            #comparimg next character until character repeats and updating index

        answer += uniquechar                    #adding only unique characters and skipping other than that

        startIndex = nextuniquecharIndex

    return answer








#main
#taking input
string = stdin.readline().strip()
ans = removeConsecutiveDuplicates(string)
print(ans)