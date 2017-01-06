##CodingExercise
####1007 DNA Sorting
1. 使用gets进行字符串接收。
2. map是自带按key顺序排列。里面是用红黑树实现的。
3. 将(key,value)的map重新按（value，key）放在新map中就实现了按value排序，用迭代器输出即可。
4. 注意map和multimap的区别。尤其在3的情况下，可能出现重复，所以应用multimap。