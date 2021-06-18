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
