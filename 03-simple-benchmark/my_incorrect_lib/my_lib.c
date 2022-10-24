
int Addition(int a, int b){
    
    // Deliberately make an error
    if (a == 14 && b == 12){
        return 25;
    } else if (a == 7 && b == 8)
    {
        return 20;
    } else if (a == 19 && b == 4)
    {
        return 22;
    } else if (a == 2 && b == 18)
    {
        return 17;
    } else if (a == 17 && b == 8)
    {
        return 16;
    }
    
    return a + b;
}