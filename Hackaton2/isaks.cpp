#include "isaks.h"

Isaks::Isaks()
{
    a=5;
    text ="Skolans bästa grabbar";
}

int Isaks::Number()
{
    return a;
}

QString Isaks::Text()
{
    return text;
}
