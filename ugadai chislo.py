import random
a=random.randint(0,99)
print("Привет! Это игра Угадай число. Тебе будет дано 6 попыток. Начинаем:")
for count in range(1,7):
    x= int(input())
    if x>a:
        print("Введёное вами число больше загаданного. Попробуйте еще раз")
    elif x==a:
        print("Вы угадали! Поздравляем!")
    else:
        print("Введёное вами число меньше загаданного. Попробуйте еще раз")
print("Количество попыток закончилось. Загаданым числом было: ", a)