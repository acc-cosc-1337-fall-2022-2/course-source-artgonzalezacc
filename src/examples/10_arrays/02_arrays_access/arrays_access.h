//header
#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

class ArrayList
{
public:
    ArrayList(int* array, int size) : elements(array) {this->size = size;}
    int Size()const{return current_index;}
    void Add(int value);
    int Capacity()const{return size;}
    int Get_Value_at_Index(int index){return elements[index];}
    int Get_First_Index_Of(int value);
    void Delete(int value);
private:
    int size;
    int current_index{0};
    int* elements;
    void Adjust_Elements(int index);
};

#endif