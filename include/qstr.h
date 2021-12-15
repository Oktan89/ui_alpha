#pragma once
#include <QString>

namespace okt
{
   class WrapQString : public QString
   {

    public:
        WrapQString(){}
        WrapQString(const char* str) : QString(str){} 
   };
   
}