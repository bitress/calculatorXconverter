#include <stdio.h>

int main() {
   // int typeChoice;
   float firstNum, secondNum;
   char operator;

   float us_dollar = 0.019;
   float japan_yen = 0.45;
   float korean_won = 23.33;
   float gbp = 0.014;
   float php_value;
   char currency, typeChoice;

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

      //convert php to a specific currency
      printf("Enter the currency you want to convert \n[1] USD to PHP \n[2] JPY to PHP \n[3] Korean Won to PHP\n[4] Pound Sterling\n");
      scanf(" %c", & currency);
      if (currency == '1') {
         //USD TO PHP
         printf("Enter the PHP value: ");
         scanf("%f", & php_value);
         printf("%.1lf is %.1lf in US Dollar", php_value, php_value * us_dollar);
      } else if (currency == '2') {
         //JPY to PHP
         printf("Enter the PHP value: ");
         scanf("%f", & php_value);
         printf("%.1lf is %.1lf in Japanese Yen", php_value, php_value * japan_yen);
      } else if (currency == '3') {
         printf("Enter the PHP value: ");
         scanf("%f", & php_value);
         printf("%.1lf is %.1lf in Korean Won", php_value, php_value * korean_won);
      } else if (currency == '4') {
         printf("Enter the PHP value: ");
         scanf("%f", & php_value);
         printf("%.1lf is %.1lf in Pound Sterling", php_value, php_value * gbp);
      } else {
         printf("error: invalid currency");
      }

      //convert currency to php

      //    laterrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr

      break;

   default:
      break;
   }

}