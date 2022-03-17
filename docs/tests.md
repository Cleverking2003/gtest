# Модуль quadratic.c

## Метод quadratic

1.Тест roots
 - Цель: протестировать рассчет корней уравнения
 - Тип: позитивный
 - Входные данные: (1, 2, 1), (1, 5, 6)
 - Ожидаемый результат: -1, -2

2. Тест noRoots
 - Цель: протестировать уравнения, не имеющие корней
 - Тип: негативный
 - Входные данные: (1, 1, 1), (1, 1, 2)
 - Ожидаемый результат: NaN, NaN

3. Тест wrongParams
 - Цель: протестировать уравнения, не являющиеся квадратными
 - Тип: негативный
 - Входные данные: (0, 5, 4), (0, 0, 3)
 - Ожидаемый результат: NaN, NaN

