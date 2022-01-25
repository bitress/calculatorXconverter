/**
 * Simple Calculator and Currency Converter
 * @author Cyanne Justin Vega
 * @copyright 2022
 * @license MIT License
*/

#include <stdio.h>

int main() {
   // int typeChoice;
   float firstNum, secondNum;
   char operator;

   //Currency to PHP
   float us_dollar = 0.019;
   float japan_yen = 2.22;
   float korean_won = 23.33;
   float gbp = 0.014;

   //PHP to currency
   float us_value = 51.34;
   float jpy_value = 0.45;
   float won_value = 0.043;
   float gbp_value = 69.16;

   float php_value;
   float currency_value;

   //Conditionals
   char currency, typeChoice, currencyChoice;

   printf("(1) Calculator \n(2) Converter\n(0) Exit\n");

   scanf("%c", & typeChoice);

   switch (typeChoice) {
   case '1':
      //Calculator function here

      printf("Enter the operator (+, -, *, /): \n");
      scanf(" %c", & operator);

      printf("Enter the first number: \n");
      scanf("%f", & firstNum);

      printf("Enter the second number: \n");
      scanf("%f", & secondNum);

      if (operator == '+') {
         //Addition
         printf("%.1lf + %.1lf = %.1lf", firstNum, secondNum, firstNum + secondNum);
      } else if (operator == '-') {
         //Subtraction
         printf("%.1lf - %.1lf = %.1lf", firstNum, secondNum, firstNum - secondNum);
      } else if (operator == '*') {
         //Multiplication
         printf("%.1lf x %.1lf = %.1lf", firstNum, secondNum, firstNum * secondNum);
      } else if (operator == '/') {
         //Division
         printf("%.1lf / %.1lf = %.1lf", firstNum, secondNum, firstNum / secondNum);
      } else {
         printf("error: invalid operator.");
      }
      break;

   case '2':

         //Currency Converter

      printf("Choose what you want to do:\n[1]Convert PHP to a Currency\n[2]Convert a Currency to PHP\n");
      scanf(" %c", &currencyChoice);

      if (currencyChoice == '1') {

            printf("Enter the currency you want to convert \n[1] PHP to USD \n[2] PHP to JPY \n[3] PHP to Korean Won\n[4] PHP to Pound Sterling\n");
         scanf(" %c", &currency);

         if (currency == '1') {
            printf("Enter the PHP value: ");
               scanf("%f", &php_value);
            printf("%.1lf is %.1lf in US Dollar", php_value, php_value * us_dollar);
         } else if (currency == '2') {
            printf("Enter the PHP value: ");
            scanf("%f", &php_value);
            printf("%.1lf is %.1lf in Japanese Yen", php_value, php_value * japan_yen);
         } else if (currency == '3') {
            printf("Enter the PHP value: ");
            scanf("%f", &php_value);
            printf("%.1lf is %.1lf in Korean Won", php_value, php_value * korean_won);
         } else if (currency == '4')
         {
            printf("Enter the PHP value: ");
            scanf("%f", &php_value);
            printf("%.1lf is %.1lf in Pound Sterling", php_value, php_value * gbp);
  
         } else {
            printf("error: invalid currency");

         }
      } else if (currencyChoice == '2') {

           //convert php to a specific currency
         printf("Enter the currency you want to convert \n[1] USD to PHP \n[2] JPY to PHP \n[3] Korean Won to PHP\n[4] Pound Sterling\n");
         scanf(" %c", & currency);
         if (currency == '1') {
            //USD TO PHP
            printf("Enter the USD value: ");
            scanf("%f", & currency_value);
            printf("%.2lf is %.1lf in Philippine Peso", currency_value, currency_value * us_value);
         } else if (currency == '2') {
            //JPY to PHP
            printf("Enter the JPY value: ");
            scanf("%f", & currency_value);
            printf("%.2lf is %.1lf in Philippine Peso", currency_value, currency_value * jpy_value);
         } else if (currency == '3') {
            //Korean Won to PHP
            printf("Enter the Koren Won value: ");
            scanf("%f", & currency_value);
            printf("%.2lf is %.1lf in Philippine Peso", currency_value, currency_value * won_value);
         } else if (currency == '4') {
            //GBP to PHP
            printf("Enter the Pound Sterling value: ");
            scanf("%f", & currency_value);
            printf("%.2lf is %.1lf in Philippine Peso", currency_value, currency_value * gbp_value);
         } else {
            printf("error: invalid currency");
         }

      
        } else {
         printf("error: invalid choice");
      }
          

      break;

   default:
      printf("error: invalid choice");
      break;
   }
   return 0;
}
