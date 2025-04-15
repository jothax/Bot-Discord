#include <request.h>
#include <cpr/cpr.h>
#include <string.h>

namespace request
{
    cpr::Response cep(int number)
    {
        return cpr::Get(cpr::Url{"https://brasilapi.com.br/api/cep/v1/"+number});
    }

    cpr::Response cnpj(std::string& cpnj)
    {
        return cpr::Get(cpr::Url{"https://brasilapi.com.br/api/cnpj/v1/"+cpnj});
    }

    cpr::Response ddd(int number)
    {
        return cpr::Get(cpr::Url{"https://brasilapi.com.br/api/ddd/v1/"+number});
    }

    cpr::Response feriado(int year)
    {
        return cpr::Get(cpr::Url{"https://brasilapi.com.br/api/feriados/v1/"+year});
    }
}