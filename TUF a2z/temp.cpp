int c = 0;
char ch;



while (input1[c] != '\0') {
   ch = input1[c];
   if (ch >= 'A' && ch <= 'Z')
      input1[c] = input1 [c] + 32;
   else if (ch >= 'a' && ch <= 'z')
      input1[c] = input1[c] - 32;  
   c++;  
}
   
printf("%s\n", input1);
return 0;