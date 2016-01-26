#ifndef ISAKS_H
#define ISAKS_H

#include "qstring.h"
#include "vector"

class Isaks
{

    QString text;
    std::vector<QString> textList;

public:
    Isaks();
    int Number();
    QString Text();
};

static int a = 0;




#endif // ISAKS_H
