import re
from openpyxl import Workbook

def parse_header_file(header_file):
    # Regular expression to match function prototypes
    pattern = r'\w+\s+\**\w+\s*\([^;]*?\);'

    functions = []
    with open(header_file, 'r') as file:
        lines = file.readlines()
        for line in lines:
            matches = re.findall(pattern, line)
            for match in matches:
                functions.append(match.strip())

    return functions

def write_to_excel(functions):
    wb = Workbook()
    sheet = wb.active
    sheet.title = 'Function Prototypes'

    sheet['A1'] = 'ID'
    sheet['B1'] = 'Prototype'

    for idx, func in enumerate(functions, start=1):
        unique_id = f"IDX{idx}"
        sheet[f'A{idx + 1}'] = unique_id
        sheet[f'B{idx + 1}'] = func

    excel_file = 'function_prototypes.xlsx'
    wb.save(excel_file)
    print(f'Function prototypes saved to {excel_file}')

if __name__ == '__main__':
    header_file = 'gpio.h'
    functions = parse_header_file(header_file)
    write_to_excel(functions)