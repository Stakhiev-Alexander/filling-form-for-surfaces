# filling-form-for-surfaces
Prototype of the GUI for filling data about elementary surfaces and their groups.

#### Элементы интерфейса:

⋅⋅*надпись про текущую поверхность
⋅⋅*надпись "Тип ЭП"
⋅⋅*поле для ввода рядом с надписью "Тип ЭП"
⋅⋅*надпись "Номер ЭП"
⋅⋅*поле для ввода рядом с надписью "Номер ЭП"
⋅⋅*место под одну картинку слева
⋅⋅*надпись "Параметры ЭП"
⋅⋅*надпись "Количество ЭП"
⋅⋅*таблица параметров ЭП
⋅⋅*таблица количества ЭП
⋅⋅*надпись "Этапы обработки"
⋅⋅*таблица этапов обработки - её шапка остаётся неизменной

#### Варьируются:

⋅⋅*содержание надписи про текущую поверхность на экране (к каким она относится, наружная поверхность вращения/внутренняя поверхность вращения/другие)
⋅⋅*тип ЭП (число слэш число)
⋅⋅*номер ЭП (число)
⋅⋅*картинка слева
⋅⋅*количество строк у таблицы параметров ЭП и их содержимое
⋅⋅*количество строк у таблицы количества ЭП и их содержимое
⋅⋅*количество строк у таблицы этапов обработки и их содержимое

#### Считаем, что:

1.Варьируемые параметры (например, D, L, q и т.п., а также Метод обработки, Технологическое оборудование (ТО), Режущий инструмент (РИ), Величина припуска и Применяемость) берутся извне из файла/файлов. Вид и структура этих файлов - на ваше усмотрение.
2.Варьируемые значения параметров (17, 3, 1 и т.п.) задаются пользователем этой программы в определённых границах от минимума до максимума.
3.Нет дополнительной информации, кроме перечисленного в Дизайн.pdf. Например, этапов обработки может быть или один или два, однако, надо предусмотреть возможность и большего их количества на будущее.

#### В таблице этапов обработки:

⋅⋅*создавать место под новую строку пользователь должен иметь возможность сам (например, нажатием на + после имеющейся строки)
⋅⋅*в столбце № этапа (самом первом) автонумерация: 1, 2 и далее расставляются автоматически
⋅⋅*Метод обработки пользователь может выбрать из выпадающего списка, содержащего в себе все варианты
⋅⋅*в ячейках Технологическое оборудование и Режущий инструмент значений несколько. Один из вариантов, как можно сделать - при нажатии на ячейку открыть диалоговое окно со всеми возможными вариантами в списке с галочками. При закрытии этого окна всё выбранное вывести в ячейку
⋅⋅*Величину припуска пользователь может выбрать из выпадающего списка, содержащего в себе все варианты
⋅⋅*в ячейке Применяемость надо использовать тот же способ, что и в ячейках ТО и РИ
