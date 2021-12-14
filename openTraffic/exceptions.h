#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H


class Exceptions
{
public:
    void filenotfound();
    void picturenotfound();
    void panoramanotfound();
    Exceptions(int i=0);
    int index;
};

#endif // EXCEPTIONS_H
