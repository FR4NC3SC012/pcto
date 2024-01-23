#include <stdio.h>

int main() {
    
    float temperaturaCelsius, temperaturaFahrenheit, temperaturaKelvin;
    printf("Inserisci la temperatura in gradi Celsius: ");
    scanf("%lf", &temperaturaCelsius);

    if (temperaturaCelsius < -273.15) {
        printf("Errore: La temperatura è inferiore allo zero assoluto.\n");
    } else {
        temperaturaFahrenheit = (temperaturaCelsius * 9 / 5) + 32;
        temperaturaKelvin = temperaturaCelsius + 273.15;
        
        printf("Temperatura in Fahrenheit: %f\n", temperaturaFahrenheit);
        printf("Temperatura in Kelvin: %f\n", temperaturaKelvin);
    }

    return 0;
}
