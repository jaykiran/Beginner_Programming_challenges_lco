f = int(input("enter free bytes"))
u = int(input("enter used bytes"))
o = int(input("enter deleted bytes"))
n = int(input("enter created bytes"))

disksize = f+u
currentlyused = u-o
currentlyused = currentlyused + n
currentlyfree = disksize - currentlyused

print(currentlyfree)