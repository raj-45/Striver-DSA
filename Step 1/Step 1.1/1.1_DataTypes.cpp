int dataTypes(string type)
{
    // Write your code here
    int result;
    if (type == "Integer")
    {
        result = 4;
    }
    else if (type == "Long")
    {
        result = 8;
    }
    else if (type == "Float")
    {
        result = 4;
    }
    else if (type == "Double")
    {
        result = 8;
    }
    else if (type == "Character")
    {
        result = 1;
    }
    else
    {
        result = -1;
    }
    return result;
}