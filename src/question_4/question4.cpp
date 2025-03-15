bool test_config()
{
    return true;
}

int get_seconds(int seconds_since_1970){
    int result = seconds_since_1970 % 3600;
    int remainder = result % 60;
    return remainder;
}

int get_minutes(int seconds_since_1970){
    int result = seconds_since_1970 / 60;
    int remainder = result % 60;
    return remainder;
}

int get_hours(int seconds_since_1970){
    int result = seconds_since_1970 / 3600;
    int remainder = result % 24;
    return remainder;
}