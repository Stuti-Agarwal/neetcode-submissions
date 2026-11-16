class DynamicArray {
private:
    int* array_var;
    int capacity =0;
    int size=0;

public:
    

    DynamicArray(int capacity) {
        if (capacity>0){
            this->capacity =capacity;
            array_var = new int[capacity];
        }

    }

    int get(int i) {
        return array_var[i];
    }

    void set(int i, int n) {
        array_var[i]=n;

    }

    void pushback(int n) {
        if (size >= capacity){
            resize();
            
        }
        array_var[size]=n;
        size++;
    }

    int popback() {
        if (size>0){
            size--;
        }
        return array_var[size];

    }

    void resize() {
        capacity *=2;
        int* new_array = new int[capacity];
        for (int i = 0; i < size ; i++) {
            new_array[i]=array_var[i];
        }
        delete[] array_var;
        array_var = new_array;

    }

    int getSize() {
        return size;

    }

    int getCapacity() {
        return capacity;

    }
};
