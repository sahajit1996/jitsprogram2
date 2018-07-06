total=0
squats=0
day=0
print("enter the no of squats per day")
while day<=6:
    day=day+1
    squats=int(input("sqatts on day %d: " %(day)))
    total=total+squats
avg=total/6
print("the avg sqauts are",avg)
