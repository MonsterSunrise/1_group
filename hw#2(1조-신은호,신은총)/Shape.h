#ifndef Shape_h
#define Shape_h

class Shape {
    Shape* next;
protected:
    virtual void draw() = 0;
public:
    Shape() { next = nullptr; }
    virtual ~Shape() {}
    void paint() { draw(); }
    Shape* add(Shape* p) {
        this->next = p;
        return p;
    }
    Shape* getNext() { return this->next; }
};


#endif 
