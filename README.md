# super Vector
Super Vector (C++ Custom Dynamic Array)

This project implements a simple custom dynamic array class super_vector in C++ that mimics some of the functionality of the standard std::vector. The implementation supports automatic resizing, basic operations like push_back, pop_back, indexing, iteration, and searching for elements.

Features

Dynamic resizing on push_back and pop_back    
Index-based access with bounds checking via assert    
Iteration support using begin() and end()    
Simple linear search using find()    
Tracks current size and capacity    

File Structure  

super_vector class (template): A generic class that manages a dynamic array.    
main() function: Demonstrates usage of super_vector with integers.      

Class Interface  


    super_vector(size_t n = 1);          // Constructor with initial capacity    
    ~super_vector();                    // Destructor    
    bool empty() const;                 // Check if empty
    size_t size() const;               // Get number of elements

    void push_back(T value);           // Add element
    void pop_back();                   // Remove last element

    T& operator[](size_t index);       // Index access (with assertion)

    T* begin();                        // Start iterator
    T* end();                          // End iterator
    T* find(const T& value);           // Linear search


Compilation  

To compile the program:    
g++ -std=c++11 -o super_vector main.cpp    
./super_vector


Super Vector (C++ Custom Dynamic Array)

Этот проект реализует простой пользовательский динамический массив super_vector в C++, который имитирует некоторые функции стандартного std::vector. Реализация поддерживает автоматическое изменение размера, базовые операции, такие как push_back, pop_back, индексирование, итерацию и поиск элементов.

Возможности

Динамическое изменение размера push_back и pop_back    
Доступ на основе индекса с проверкой границ через assert    
Поддержка итерации с использованием begin() и end()    
Простой линейный поиск с использованием find()        
Отслеживает текущий размер и емкость      

Структура файла

class super_vector (шаблон): универсальный класс, который управляет динамическим массивом.

function main(): Демонстрирует использование super_vector с целыми числами.

Интерфейс класса


    super_vector(size_t n = 1);         // Конструктор с начальной емкостью  
    ~super_vector();                    // Деструктор    
    bool empty() const;                 // Проверка на пустоту
    size_t size() const;               // Получение количества элементов

    void push_back(T value);           // Добавление элементов
    void pop_back();                   // Удаление последнего элемента

    T& operator[](size_t index);       // Доступ к индексу (с утверждением)

    T* begin();                        // Возврощает итератор на первый элемент
    T* end();                          // Возврощает итератор на последний элемент
    T* find(const T& value);           // линейный поиск



Компиляция

Чтобы скомпилировать программу:    
g++ -std=c++11 -o super_vector main.cpp    
./super_vector
