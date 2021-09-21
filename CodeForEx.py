#Всем привет, перед вами самый неоптимизированный код программы для нахождения цифры, которая чаще всего встречается в строке
#Обозначаем переменные в которые будем записывать количество соответсвующих цифр, найденных в строке
max=0
one,two,three,four,five,six,seven,eight,nine,zero=0,0,0,0,0,0,0,0,0,0
s=input()
for i in range(1, len(s)):
    if s[i]=="0":
        zero+=1
        if max<zero:
            max=zero
    if s[i]=="1":
        one+=1
        if max<one:
            max=one
    if s[i]=="2":
        two+=1
        if max<two:
            max=two
    if s[i]=="3":
        three+=1
        if max<three:
            max=three
    if s[i]=="4":
        four+=1
        if max<four:
            max=four
    if s[i]=="5":
        five+=1
        if max<five:
            max=five
    if s[i]=="6":
        six+=1
        if max<six:
            max=six
    if s[i]=="7":
        seven+=1
        if max<seven:
            max=seven
    if s[i]=="8":
        eight+=1
        if max<eight:
            max=eight
    if s[i]=="9":
        nine+=1
        if max<nine:
            max=nine
if one==max:
    print("Единица встречается чаще других чисел, кол-во в строке:", one)
if two==max:
    print("Двойка встречается чаще других чисел, кол-во в строке:", two)
if three==max:
    print("Тройка встречается чаще других чисел, кол-во в строке:", three)
if four==max:
    print("Четверка встречается чаще других чисел, кол-во в строке:", four)
if five==max:
    print("Пятерка встречается чаще других чисел, кол-во в строке:", five)
if six==max:
    print("Шестерка встречается чаще других чисел, кол-во в строке:", six)
if seven==max:
    print("Семерка встречается чаще других чисел, кол-во в строке:", seven)
if eight==max:
    print("Восьмерка встречается чаще других чисел, кол-во в строке:", eight)
if nine==max:
    print("Девятка встречается чаще других чисел, кол-во в строке:", nine)
if zero==max:
    print("Ноль встречается чаще других чисел, кол-во в строке:", zero)
    
               
               

               
        
               
               



            

