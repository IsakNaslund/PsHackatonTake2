#include "palenclass.h"

PalenClass::PalenClass()
{
    a=1337;
    text ="message from space";
}


PalenClass::PalenClass(int iNum, QString sText)
{
    a=iNum;
    text =sText;
}

int PalenClass::Number()
{
    return a;
}

QString PalenClass::Text()
{
    return text;
}









