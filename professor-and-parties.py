t = int(input())
for _ in range(t):
	n = int(input())
	x = [int(x) for x in input().split()]
	lenx = len(x)
	setx = set(x)
	lensx = len(setx)
	
	if lensx == lenx:
		print('BOYS')
	else
		print('GIRLS')