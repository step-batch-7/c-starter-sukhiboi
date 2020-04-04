#include <stdio.h>

int decrypt_char_ascii(int, int, int);
int decrypt_char(int, int, int);

int decrypt_char_ascii(charCode, first, last)
{
    int code = charCode + 13;
    if (code > last)
    {
        code = first + code - last - 1;
    }
    return code;
}

int decrypt_char(charCode, capital_letter_ascii, small_letter_ascii)
{
    int ascii = charCode;
    if (ascii >= small_letter_ascii)
    {
        ascii = decrypt_char_ascii(ascii, small_letter_ascii, 122);
    }
    else if (ascii >= capital_letter_ascii)
    {
        ascii = decrypt_char_ascii(ascii, capital_letter_ascii, 90);
    }
    return ascii;
}

int main(void)
{
    int message[9] = {116, 98, 32, 112, 98, 101, 98, 97, 110};
    int message_length = sizeof(message) / sizeof(message[0]);
    for (int i = 0; i < message_length; i++)
    {
        printf("%c", decrypt_char(message[i], 65, 97));
    }
    return 0;
};