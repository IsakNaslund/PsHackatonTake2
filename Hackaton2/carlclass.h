#ifndef CARLCLASS_H
#define CARLCLASS_H

#include "qstring.h"

class carlClass
{
private:
    int n;
    QString text;

public:
    carlClass();
    void setText(QString t);
    QString getText();
};

#endif // CARLCLASS_H
