#ifndef PALENCLASS_H
#define PALENCLASS_H
#include "qstring.h"

class PalenClass
{
private:
    int a;
    QString text;
public:
    PalenClass();
    PalenClass(int iNum, QString sText);
    int Number();
    QString Text();
};


#endif // PALENCLASS_H
