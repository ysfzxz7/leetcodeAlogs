int giveMe(char c);
/**
 * romanToInt - a func that convert a roman string into a intger
 * @s: a pointer into the string
 * 
 * Return: the intger..
 * 
*/
int romanToInt(char* s) {
        int giveMe(char c);
    int len = strlen(s), sum = 0;
  
   while (len > 0)
   {

          if (giveMe(s[len - 1]) >= giveMe(s[len]))
                sum += giveMe(s[len - 1]);
          else if (giveMe(s[len - 1]) < giveMe(s[len]))
                sum -= giveMe(s[len - 1]);
        len--;
   }

    return (sum);
}
/*
 *giveMe - a func that convert a c char into the exact intger number
 *@c: the roman char given
 *@return: the the number otherwise 0
**/
int giveMe(char c){
                if (c == 'I')
                        return (1);
                else if (c == 'V')
                        return (5);
                else if (c == 'X')
                        return (10);
                else if (c == 'L')
                        return (50);
                else if (c == 'C')
                        return (100);
                else if (c == 'D')
                        return (500);
                else if (c == 'M')
                        return (1000);
                else
                    return (0);
}