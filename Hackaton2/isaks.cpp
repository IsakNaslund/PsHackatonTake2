#include "isaks.h"

Isaks::Isaks()
{
    text ="Skolans bästa grabbar";
    textList.push_back("Give you up!");
    textList.push_back("Let you down!");
    textList.push_back("Run around and desert you!");
    textList.push_back("Make you cry!");
    textList.push_back("Say goobye!");
    textList.push_back("Tell a lie and hurt you!");

}

int Isaks::Number()
{
    return a;
}

QString Isaks::Text()
{
    text = textList[a];
    a++;
    if (a>5)
    {
        a=0;
    }
    return text;
}
