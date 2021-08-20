from collections import namedtuple
n, Score = int(input()), namedtuple('Score', input().split())
# print(Score)
scores = [Score(*input().split()).MARKS for i in range(n)]
print(sum(map(int, scores)) / n)
