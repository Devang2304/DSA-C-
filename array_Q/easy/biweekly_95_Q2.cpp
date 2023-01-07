class DataStream {
public:
    int c=0,v=0,number=0;
    DataStream(int value, int k) {
        v=value;
        number=k;
    }
    
    bool consec(int num) {
        if(num!=v) c=0;
        if(num==v) c++;
        if(c>=number) return 1;
        return 0;
    }
};