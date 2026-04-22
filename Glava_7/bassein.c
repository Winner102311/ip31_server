int main()
{
    response r[] = {
        {"Майк", DUMP},
        {"Луис", SECOND_CHANCE},
        {"Мэттью", SECOND_CHANCE},
        {"Уильям", MARRIAGE}
    };
    int i;
    for (i = 0; i < 4; i++) {
        switch(r[i].type) {
        case DUMP:
            dump(r[i].name);
            break;
        case SECOND_CHANCE:
            second_chance(r[i].name);
            break;
        default:
            marriage(r[i].name);
        }
    }
    return 0;
}