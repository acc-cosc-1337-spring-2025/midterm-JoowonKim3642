bool test_config()
{
    return true;
}

int get_seconds(int seconds_since_1970){
    return seconds_since_1970%60;
}

int get_minutes(int seconds_since_1970){
    int seconds = get_seconds(seconds_since_1970);
    return ((seconds_since_1970 - seconds)/60)%60;
}

int get_hours(int seconds_since_1970){
    int seconds = get_seconds(seconds_since_1970);
    int minutes = get_minutes(seconds_since_1970)*60;
    return ((seconds_since_1970 - minutes - seconds)/3600)%24;
}