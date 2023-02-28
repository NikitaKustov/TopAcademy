
#include <iostream>
// #include <exception>


int input_n() {
    int n;
    std::cout << " : ";
    std::cin >> n;
    return n;
}

// Выбрасывает исключение
int print_n() {

    int n = input_n();

    if (n >= 10 && n <= 15) {
        std::cout << n << "\n";
    } else {
        throw "Число должно быть от 10 до 15!";
    }

    return n;
}

void print_all_del(int n) {

    for (int i = 1; i < n; ++i) {

        if (n % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << "\n";
}

void print_div(int n) {
    int m = input_n();

    if (m == 0) throw "На ноль делить нельзя!!!";

    std::cout << "Остаток от деления " << n % m << "\n";
}

void full_arr(int *array, int n){
    srand ( time(NULL) );
    for (int i=0;i<n;++i){
        array[i] = 1 + rand() % n;
    }
}
void massiv(int *array, int n){
     for (int i=0;i<n;++i){
        std::cin>>array[i];
     }
}

void poick_massiva(int *array, int n){
    for (int i=0;i<n;++i){
        


        std::cout<<n;
    }
}

// void ydal_po_ind(int *array, int n){
//     std::cout<<"Введите индекс удаляемого числа";
//     std::cin>>n;
//     for(int i=0;i<n;++i){
//         array[n]
//     }
// }


void chose_com(int *array,int n) {

    int v;

    std::cout << "Выберите команду \n";
    std::cout << "1. Все делители \n";
    std::cout << "2. Остаток от деления \n";
    std::cout << "3. Вывод массива \n";
    std::cout << "4. Поиск элемена \n";
    std::cout << "5. Удаление элемента элемена по значению \n";
    std::cout << "6. Удаление элемента элемена по индексу \n";
    std::cout << "0. Выход \n";
    std::cout << " : ";

    std::cin >> v;

    switch (v)
    {
    case 1:
        print_all_del(n);
        break;
    case 2:
        print_div(n);
        break;
    case 3:
       full_arr( array, n);
        break;
    case 4:
        
        break;
    case 5:
        
        break;
    case 6:
        
        break;
    case 0:
        break;
    }
}
    

int main () {
        int *array;
        int n = print_n();
        array = new int[n];

    while (true) {
        try {

                std::cout << "Введите число от 10 до 15";

                full_arr(array,n); // заполнение массива // ошибка при неверном размере

                chose_com(array,n);

        } catch (const char* error) {
            std::cout << "Ошибка!!!\n";

            std::cout << error << "\n";
        }

    }
    std::cout << "End!!\n";
    delete [] array;

}