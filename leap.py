year=int(input("enter the year" ))
if year%100==0:
    if year%400==0:
        print("this year is leap year",year)
    else:
        print("this year is not a leep year",year)
else:
     if year%4==0:
         print("this year is a leep year",year)
     else :
         print("this year is not leep year",year)

    
