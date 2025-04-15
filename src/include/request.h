#ifndef REQUEST
#define REQUEST

#include <cpr/cpr.h>
#include <string.h>

namespace request
{
    cpr::Response cep(int number);

    cpr::Response cnpj(std::string& cpnj);

    cpr::Response ddd(int number);

    cpr::Response feriado(int year);
}

#endif