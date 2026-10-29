class Solution {
public:
    string intToRoman(int num) {
            string romanNumber= "";
            if(num == 0)
                return "0";
           
            while(num >= 1000){
               
                romanNumber+= "M";
                num -= 1000;
            }
            while(num >= 500){
                 string tempString = to_string(num);
                 if((tempString[0] - '0')==4)
                {
                     if(num >= 400){
                        romanNumber+= "CD";
                        num-= 400;
                    }
                    else if(num >= 40){
                        romanNumber+= "XL";
                        num-= 40;
                    }
                    else if(num >= 4){
                        romanNumber+= "IV";
                        num-= 4;
                    }
                  
                }
                else if((tempString[0] - '0')==9)
                {
                    if(num >= 900){
                        romanNumber+= "CM";
                        num-= 900;
                    }
                    else if(num >= 90){
                        romanNumber+= "XC";
                        num-= 90;
                    }
                    else if(num >= 9){
                        romanNumber+= "IX";
                        num-= 9;
                    }
                    
                }
                else{
                    romanNumber+= "D";
                    num -= 500;
                }
            }
            while(num >= 100){
                 string tempString = to_string(num);
                if((tempString[0] - '0')==4)
                {
                     if(num >= 400){
                        romanNumber+= "CD";
                        num-= 400;
                    }
                    else if(num >= 40){
                        romanNumber+= "XL";
                        num-= 40;
                    }
                    else if(num >= 4){
                        romanNumber+= "IV";
                        num-= 4;
                    }
                  
                }
                else if((tempString[0] - '0')==9)
                {
                    if(num >= 900){
                        romanNumber+= "CM";
                        num-= 900;
                    }
                    else if(num >= 90){
                        romanNumber+= "XC";
                        num-= 90;
                    }
                    else if(num >= 9){
                        romanNumber+= "IX";
                        num-= 9;
                    }
                    
                }
                else{
                    romanNumber+= "C";
                    num -= 100;
                }
            }
            while(num >= 50){
                  string tempString = to_string(num);
                 if((tempString[0] - '0')==4)
                {
                     if(num >= 400){
                        romanNumber+= "CD";
                        num-= 400;
                    }
                    else if(num >= 40){
                        romanNumber+= "XL";
                        num-= 40;
                    }
                    else if(num >= 4){
                        romanNumber+= "IV";
                        num-= 4;
                    }
                  
                }
                else if((tempString[0] - '0')==9)
                {
                    if(num >= 900){
                        romanNumber+= "CM";
                        num-= 900;
                    }
                    else if(num >= 90){
                        romanNumber+= "XC";
                        num-= 90;
                    }
                    else if(num >= 9){
                        romanNumber+= "IX";
                        num-= 9;
                    }
                    
                }
                else{
                    romanNumber+= "L";
                    num -= 50;
                }
            }
            while(num>=10){
                  string tempString = to_string(num);
                if((tempString[0] - '0')==4)
                {
                     if(num >= 400){
                        romanNumber+= "CD";
                        num-= 400;
                    }
                    else if(num >= 40){
                        romanNumber+= "XL";
                        num-= 40;
                    }
                    else if(num >= 4){
                        romanNumber+= "IV";
                        num-= 4;
                    }
                  
                }
                else if((tempString[0] - '0')==9)
                {
                    if(num >= 900){
                        romanNumber+= "CM";
                        num-= 900;
                    }
                    else if(num >= 90){
                        romanNumber+= "XC";
                        num-= 90;
                    }
                    else if(num >= 9){
                        romanNumber+= "IX";
                        num-= 9;
                    }
                    
                }
                else{
                    romanNumber+= "X";
                    num -= 10;
                }
                
            }
            while(num>=5){
                  string tempString = to_string(num);
                if((tempString[0] - '0')==4)
                {
                     if(num >= 400){
                        romanNumber+= "CD";
                        num-= 400;
                    }
                    else if(num >= 40){
                        romanNumber+= "XL";
                        num-= 40;
                    }
                    else if(num >= 4){
                        romanNumber+= "IV";
                        num-= 4;
                    }
                  
                }
                else if((tempString[0] - '0')==9)
                {
                    if(num >= 900){
                        romanNumber+= "CM";
                        num-= 900;
                    }
                    else if(num >= 90){
                        romanNumber+= "XC";
                        num-= 90;
                    }
                    else if(num >= 9){
                        romanNumber+= "IX";
                        num-= 9;
                    }
                    
                }
                else{
                    romanNumber+= "V";
                    num -= 5;
                }
            }
            while(num > 0){
                  string tempString = to_string(num);
               if((tempString[0] - '0')==4)
                {
                     if(num >= 400){
                        romanNumber+= "CD";
                        num-= 400;
                    }
                    else if(num >= 40){
                        romanNumber+= "XL";
                        num-= 40;
                    }
                    else if(num >= 4){
                        romanNumber+= "IV";
                        num-= 4;
                    }
                  
                }
                else if((tempString[0] - '0')==9)
                {
                    if(num >= 900){
                        romanNumber+= "CM";
                        num-= 900;
                    }
                    else if(num >= 90){
                        romanNumber+= "XC";
                        num-= 90;
                    }
                    else if(num >= 9){
                        romanNumber+= "IX";
                        num-= 9;
                    }
                    
                }
                else{
                    romanNumber+= "I";
                    num--;
                }
            }
            return romanNumber;
        }
};