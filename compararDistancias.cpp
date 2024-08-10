#include <node.h>
#include <cmath>

using namespace v8;

// raio do planeta terra
const double R = 6371000.0;

double toRad(double grau)
{
    return grau * 3.14 / 180.0;
}



double calcularDistancia(double lat1, double lon1, double lat2, double lon2)
{
    // diferenca entre latitudes (vulgo Delta)
    double dLat = toRad(lat2 - lat1);
    double dLon = toRad(lon2 - lon1);

    // seno e coss das latidutes
    double cosLat1 = cos(toRad(lat1));
    double MetadeDaDiferencaDoSenoLatitude = sin(dLat / 2);
    double MetadeDaDiferencaDoSenoLongitude = sin(dLon / 2);

    // aplicando formula
    double a = MetadeDaDiferencaDoSenoLatitude * MetadeDaDiferencaDoSenoLatitude +
               cosLat1 * cos(toRad(lat2)) *
                   MetadeDaDiferencaDoSenoLongitude * MetadeDaDiferencaDoSenoLongitude;

    // calcula C (angulo central)
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    double distancia = R * c;
    return distancia;
}

//"encapsula" a parada toda
void calcularDistanciaWrapper(const FunctionCallbackInfo<Value> &args)
{
    Isolate *isolate = args.GetIsolate();

    // argumentos da funcao JS
    double lat1 = args[0].As<Number>()->Value();
    double lon1 = args[1].As<Number>()->Value();
    double lat2 = args[2].As<Number>()->Value();
    double lon2 = args[3].As<Number>()->Value();

    double distancia = calcularDistancia(lat1, lon1, lat2, lon2);

    // retorna valor atraves da API do V8
    Local<Number> distanciaNumber = Number::New(isolate, distancia);
    args.GetReturnValue().Set(distanciaNumber);
}

void Initialize(Local<Object> exports)
{
    NODE_SET_METHOD(exports, "calcularDistancia", calcularDistanciaWrapper);
}

NODE_MODULE(compararDistancias, Initialize)
