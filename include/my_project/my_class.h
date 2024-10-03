#ifndef MY_PROJECT_MY_CLASS_H
#define MY_PROJECT_MY_CLASS_H

class MyClass {
public:
    // Конструктор
    MyClass();

    // Метод, который мы будем тестировать и бенчмаркать
    int method() const;

private:
    int value;
};

#endif // MY_PROJECT_MY_CLASS_H