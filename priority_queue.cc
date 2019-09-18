#include "priority_queue.h"

template <>
templatePriorityQueue<int>::templatePriorityQueue(){
}

template <>
templatePriorityQueue<int>::~templatePriorityQueue(){
}

template <>
bool templatePriorityQueue<int>::IsEmpty() const{
        return storage.empty();
}

template <>
int templatePriorityQueue<int>::GetSize() {
        return storage.size();
}

template <>
const int& templatePriorityQueue<int>::GetTop() const{
        return storage.top();
}

template <>
void templatePriorityQueue<int>::pop(){
        storage.pop();
}

template <>
void templatePriorityQueue<int>::push(const int& val){
        storage.push(val);
}
