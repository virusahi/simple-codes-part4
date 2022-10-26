#include <stdio.h>

int main() {
    char category;
    int tempChoice;
    int currencyChoice;
    int massChoice;
    int lengthChoice;
    int userinputMetres; //User input for metres;
    int userinputCentimetres; //User input for centimetres;
    int userinputKilometres; //User input for kilometres;
    int userinputF; // User input for Fahreinheit;
    int userinputC; // User input for Celsius;
    int userinputK; // User input for Kelvin;
    int userinputUSDtoEuro; // User input for USD to EURO;
    int userinputEurotoUSD; // User input for Euro to USD;
    int userinputUSDtoJPY; // User input for USD to JPY;
    int userinputJPYtoUSD; // User input for JPY to USD;
    int userinputUSDtoINR; // User input for USD to INR;
    int userinputINRtoUSD; // User input for INR to USD;
    int userinputINRtoJPY; // User input for INR to JPY;
    int userinputJPYtoINR; // User input for JPY to INR;
    int userinputOunce; // User input for Ounce;
    int userinputGram; // User input for Gram;
    int userinputKilogram; // User input for Ounce;
    int metrestocentimetres;// variable that stores the converted m->cm;
    int metrestoKilometres;// variable that stores the converted m->km;
    int centimetrestoMetres;// variable that stores the converted cm->m;
    int KilometrestoMetres;// variable that stores the converted km->m;
    int fahrenheitToCelcius; // variable that stores the converted F->C;
    int celciusToFahrenheit; // variable that stores the converted C->F;
    int kelvinToCelcius; // variable that stores the converted K->C;
    int celciusToKelvin; // variable that stores the converted C->K;
    int kelvinToFahrenheit; // variable that stores the converted K->F;
    int fahrenheitToKelvin; // variable that stores the converted F->K;
    float USDtoEURO; // variable that stores the converted USD->EURO;
    float EurotoUSD; // variable that stores the converted EURO->USD;
    float USDtoJPY; // variable that stores the converted USD->JPY;
    float JPYtoUSD; // variable that stores the converted JPY->USD;
    float USDtoINR; // variable that stores the converted USD->INR;
    float INRtoUSD; // variable that stores the converted INR->USD;
    float INRtoJPY; // variable that stores the converted USD->JPY;
    float JPYtoINR; // variable that stores the converted JPY->USD;
    float ounceToPounds; // variable that stores the converted Ounce->Pounds;
    float gramsToPounds; // variable that stores the vonerted Grams->Pounds;
    float gramsToKilograms; // variable that stores the converted Grams->Kgs;
    float KilogramToGrams; // variable that stores the vonerted Kgs->Grams;
  
    printf("Welcome to Unit Converter! \n");
    printf("Here is a list of conversation to choose from: \n");
    printf("Temperature(T),Currency(C),Mass(M),Length(L) \n");
    printf("Please enter the letter you want to convert.\n");
    scanf("%c",&category);

    if(category == 'T' || category == 't'){
        printf("Welcome to Temperature Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for Fahrenheit to Celsius. \n");
        printf("Enter 2 for Celsius to Fahrenheit. \n");
        printf("Enter 3 for Kelvin to Celsius. \n");
        printf("Enter 4 for Celsius to Kelvin. \n");
        printf("Enter 5 for Kelvin to Fahrenheit. \n");
        printf("Enter 6 for Fahrenheit to Kelvin. \n");
        scanf("%d",&tempChoice);
        if(tempChoice == 1){
            printf("Please enter the Fahrenheit degree: \n");
            scanf("%d",&userinputF);
            fahrenheitToCelcius =  ((userinputF-32) * (5.0/9.0));
            printf("Celcius: %d",fahrenheitToCelcius);
        }
        else if(tempChoice == 2){
            printf("Please enter the Celcius degree: \n");
            scanf("%d",&userinputC);
            celciusToFahrenheit = ((9.0/5.0)*userinputC + 32);
            printf("Fahrenheit: %d",celciusToFahrenheit);
        }
        if(tempChoice == 3){
            printf("Please enter the Kelvin degree: \n");
            scanf("%d",&userinputK);
            kelvinToCelcius =  userinputK - 273.15;
            printf("Celcius: %d",kelvinToCelcius);
        }
        if(tempChoice == 4){
            printf("Please enter the Celcius degree: \n");
            scanf("%d",&userinputC);
            celciusToKelvin =  userinputC + 273.15;
            printf("Kelvin: %d",celciusToKelvin);
        }
        if(tempChoice == 5){
            printf("Please enter the Kelvin degree: \n");
            scanf("%d",&userinputK);
            kelvinToFahrenheit =  ((userinputK - 273.15)*1.8)+32;
            printf("Farhenheit: %d",kelvinToFahrenheit);
        }
        if(tempChoice == 6){
            printf("Please enter the Fahrenheit degree: \n");
            scanf("%d",&userinputF);
            fahrenheitToKelvin =  ((userinputF - 32)/1.8)+273.15;
            printf("Kelvin: %d",fahrenheitToKelvin);
        }
    }
    
    else if(category == 'C' || category == 'c') {
        printf("Welcome to Currency Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for USD to Euro. \n");
        printf("Enter 2 for Euro to USD. \n");
        printf("Enter 3 for USD to JPY. \n");
        printf("Enter 4 for JPY to USD. \n");
        printf("Enter 5 for USD to INR. \n");
        printf("Enter 6 for INR to USD. \n");
        printf("Enter 7 for INR to JPY. \n");
        printf("Enter 8 for JPY to INR. \n");
        scanf("%d",&currencyChoice);
        if(currencyChoice == 1){
            printf("Please enter the USD amount: \n");
            scanf("%d",&userinputUSDtoEuro);
            USDtoEURO = userinputUSDtoEuro * 0.90;
            printf("Euro: %.2f",USDtoEURO);
        }
        if(currencyChoice == 2){
            printf("Please enter the EURO amount: \n");
            scanf("%d",&userinputEurotoUSD);
            EurotoUSD = userinputEurotoUSD / 0.90;
            printf("USD: %.2f",EurotoUSD);
        }
        else if(currencyChoice == 3){
            printf("Please enter the JPY amount: \n");
            scanf("%d",&userinputUSDtoJPY);
            USDtoJPY = userinputUSDtoJPY * 115.98;
            printf("JPY: %.2f",USDtoJPY);
        }
        else if(currencyChoice == 4){
            printf("Please enter the USD amount: \n");
            scanf("%d",&userinputUSDtoJPY);
            JPYtoUSD = userinputJPYtoUSD / 115.98;
            printf("USD: %.2f",JPYtoUSD);
        }
        else if(currencyChoice == 5) {
            printf("Please enter the USD amount: \n");
            scanf("%d",&userinputUSDtoINR);
            USDtoINR = userinputUSDtoINR * 76.20;
            printf("INR: %.2f",USDtoINR);
        }
        else if(currencyChoice == 6) {
            printf("Please enter the INR amount: \n");
            scanf("%d",&userinputINRtoUSD);
            INRtoUSD = userinputINRtoUSD / 76.20;
            printf("INR: %.2f",INRtoUSD);
        }
        else if(currencyChoice == 7){
            printf("Please enter the INR amount: \n");
            scanf("%d",&userinputINRtoJPY);
            INRtoJPY = userinputINRtoJPY * 1.52;
            printf("JPY: %.2f",INRtoJPY);
        }
        else if(currencyChoice == 8){
            printf("Please enter the JPY amount: \n");
            scanf("%d",&userinputJPYtoINR);
            JPYtoINR = userinputJPYtoINR / 1.52;
            printf("INR: %.2f",JPYtoINR);
        } 
    }

    else if(category == 'M' || category == 'm'){
        printf("Welcome to Mass Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for ounces to pounds. \n");
        printf("Enter 2 for grams to pounds. \n");
        printf("Enter 3 for grams to kilograms. \n");
        printf("Enter 4 for kilograms to grams. \n");
        scanf("%d",&massChoice);
        if(massChoice == 1){
            printf("Please enter the ounce amount: \n");
            scanf("%d",&userinputOunce);
            ounceToPounds = userinputOunce * 0.0625;
            printf("Pounds: %.2f",ounceToPounds);
        }
        else if(massChoice == 2) {
            printf("Please enter the grams amount: \n");
            scanf("%d",&userinputGram);
            gramsToPounds = userinputGram * 0.00220462;
            printf("Pounds: %.2f",gramsToPounds);
        }
        if(massChoice == 3){
            printf("Please enter the grams amount: \n");
            scanf("%d",&userinputGram);
            gramsToKilograms = userinputGram / 1000;
            printf("Kilograms: %.2f",gramsToKilograms);
        }
        else if(massChoice == 4) {
            printf("Please enter the kilogram amount: \n");
            scanf("%d",&userinputKilogram);
            KilogramToGrams = userinputKilogram * 1000;
            printf("Grams: %.2f",KilogramToGrams);
        }
    }

    if(category == 'L' || category == 'l'){
        printf("Welcome to Length Converter! \n");
        printf("Here is a list of conversations to choose from: \n");
        printf("Enter 1 for Metres to Centimetres. \n");
        printf("Enter 2 for Centimetres to Metres. \n");
        printf("Enter 3 for Kilometres to Metres. \n");
        printf("Enter 4 for Metres to Kilometres. \n");
        scanf("%d",&lengthChoice);
        if(lengthChoice == 1){
            printf("Please enter the length in Metres: \n");
            scanf("%d",&userinputMetres);
            metrestocentimetres =  userinputMetres*100;
            printf("Centimetres: %d",metrestocentimetres);
        }
        if(lengthChoice == 2){
            printf("Please enter the length in Centimetres: \n");
            scanf("%d",&userinputCentimetres);
            centimetrestoMetres =  userinputCentimetres/100;
            printf("Metres: %.2f",centimetrestoMetres);
        }
        if(lengthChoice == 3){
            printf("Please enter the length in Kilometres: \n");
            scanf("%d",&userinputKilometres);
            KilometrestoMetres =  userinputKilometres*100;
            printf("Metres: %d",KilometrestoMetres);
        }
        if(lengthChoice == 4){
            printf("Please enter the length in Metres: \n");
            scanf("%d",&userinputMetres);
            metrestoKilometres =  userinputMetres/100;
            printf("Kilometres: %.2f",metrestoKilometres);
        }
    }
    printf("\n");
}