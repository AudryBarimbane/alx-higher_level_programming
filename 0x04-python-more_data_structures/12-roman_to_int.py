#!/usr/bin/python3
def t_subtract(l_num):
    tsub = 0
    m_list = max(l_num)

    for n in l_num:
        if m_list > n:
            tsub += n

    return (m_list - tsub)


def roman_to_int(roman_string):
    if not roman_string:
        return 0

    if not isinstance(roman_string, str):
        return 0

    rom_n = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
    l_keys = list(rom_n.keys())

    num = 0
    last_rom = 0
    l_num = [0]

    for ch in roman_string:
        for r_num in l_keys:
            if r_num == ch:
                if rom_n.get(ch) <= last_rom:
                    n += t_subtract(l_num)
                    l_num = [rom_n.get(ch)]
                else:
                    l_num.append(rom_n.get(ch))

                l_rom = rom_n.get(ch)

    n += t_subtract(l_num)

    return (n)
