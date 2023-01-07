class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool isbulky=false;
        bool isheavy=false;
        if(mass>=100) isheavy=true;
        if(length>=10000 || width>=10000 || height>=10000 || (long)length*width*height>=1000000000) isbulky=true;
        if(isbulky && isheavy) return "Both";
        if(!isbulky && !isheavy) return "Neither";
        if(isbulky) return "Bulky";
        else return "Heavy";
    }
};