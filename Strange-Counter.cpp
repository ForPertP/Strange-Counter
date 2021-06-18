long strangeCounter(long t)
{
    long result = 3;
    
    while (t > result)
    {
        t -= result;
        result *= 2;
    }

    return result - t + 1;
}


long strangeCounter1(long t)
{
    long result = 4;

    while (t >= result)
    {
        result = result * 2 + 2;
    }
    
    return result - t;
}
