mas = []
print("Пожалуйста введите трехзначное число:")
x = int(input())
proverka = str(x)
if (len(proverka))!=3:
    print("Вы ввели не трехзначное число! Попробуйте сначала")
else:
    a=(x//100)
    b=(x//10)%10
    c= x%10
    stroka= str(a)+str(b)+str(c)
    num=int(stroka)
    mas.append(num)

    stroka1= str(b)+str(a)+str(c)
    num1=int(stroka1)
    mas.append(num1)

    stroka2= str(b)+str(c)+str(a)
    num2=int(stroka2)
    mas.append(num2)

    stroka3= str(c)+str(b)+str(a)
    num3=int(stroka3)
    mas.append(num3)

    stroka4= str(c)+str(a)+str(b)
    num4=int(stroka4)
    mas.append(num4)

    stroka5= str(a)+str(c)+str(b)
    num5=int(stroka5)
    mas.append(num5)

    print(mas[0],mas[1],mas[2],mas[3],mas[4])
    print(max(mas))

        
    
