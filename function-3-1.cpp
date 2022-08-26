// 3rd ques bool function

bool is_more_positive(int vals[], int length)
{
    int pos=0,neg=0;
    for(int i=0;i<length;i++)
    {
        if(vals[i]>0)
        {
            pos++;
        }
        if(vals[i]<0)
        {
            neg++;
        }
    }
    if(pos>neg)
    {
        return true;
    }
    else
    {
        return false;
    }
}