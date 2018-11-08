#include <iostream>

using namespace std;
class Animal{
private:
    string nombre;
    int nropatas;
public:
    Animal(string n,int p):nombre(n),nropatas(p){cout<<nombre<<" "<<nropatas<<endl;}
    void hacehablar()
    {
        this->habla();
    }
    virtual void habla(void)=0;

};
class gato: public Animal{
public:
    gato(string a,int b):Animal(a,b){}
    void habla(){
    cout<<"miauu"<<endl;}
};
class perro:public Animal{
public:
    perro(string x,int y):Animal(x,y){}
    void habla(){
    cout<<"wuauuuu"<<endl;}
};
class loro:public Animal{
public:
    loro(string a,int b):Animal(a,b){}
    void habla(){
    cout<<"laaaa"<<endl;}
    };
int main()
{
    Animal *m,*p,*l;
    m=new gato("ana",4);
    m->hacehablar();
    p=new perro("dog",4);
    p->hacehablar();
    l=new loro("azul",2);
    l->hacehablar();
    delete m;
    delete p;
    delete l;
    return 0;
}
