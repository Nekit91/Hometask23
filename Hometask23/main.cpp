#include<iostream>

void findmax(int& a, int& b, int& c) {
    int maxval = std::max(std::max(a, b), c);
    a = maxval;
    b = maxval;
    c = maxval;
}
int& element(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        if (arr[i] < 0) {
            return arr[i]; 
        }
    }
   
    return arr[0];
}
void zero(int arr1[], int len1, int arr2[], int len2) {
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            if (arr1[i] == arr2[j]) {
                arr2[j] = 0; 
            }
        }
    }
}



    int main(){
    setlocale(LC_ALL, "RU");
        
    std::cout << "Задача №1\n";
    int num1, num2, num3;
    std::cout << "Введите три целых числа: ";
    std::cin >> num1 >> num2 >> num3;
    findmax(num1, num2, num3);
    std::cout << "Максимальное значение: " << num1 << std::endl;
        
    std::cout << "Задача №2\n";
    int array[] = { 1, 2, 3, 4, -5 };
    int length = sizeof(array) / sizeof(array[0]);
    int& result = element(array, length);
    std::cout << "Ссылка на первый отрицательный элемент или первый элемент: " << result << std::endl;
    
    std::cout << "Задача №3\n";
    int array1[] = { 1, 2, 3, 41, 5 };
    int length1 = sizeof(array1) / sizeof(array1[0]);
    int array2[] = { 3, 41, 5, 63, 17 };
    int length2 = sizeof(array2) / sizeof(array2[0]);
    zero(array1, length1, array2, length2);
    std::cout << "Массив 2 после обнуления совпадающих элементов: ";
    for (int i = 0; i < length2; i++) {
        std::cout << array2[i] << " ";
    }
    std::cout << std::endl;









       
        
        
        
    return 0;


    }