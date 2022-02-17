#include <iostream>

void converte_tempo(int segundos, int *hor, int *min, int *seg)
{
    *hor = segundos/3600;
    *min = (segundos % 3600)/60;
    *seg = (segundos % 3600)%60;

}

int main()
{
   int tempo, h, m, s;
   std::cin >> tempo;
   
   // Chame a função 'converte_tempo' para converter o valor de 'tempo' em horas
   converte_tempo(tempo, &h, &m, &s);
   // minutos e segundos, gravando o resultado nas variáveis 'h', 'm' e 's'.
   
   std::cout << h << ":" << m << ":" << s;
   
   return 0;
}
