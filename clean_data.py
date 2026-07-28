import csv

input_file = '/Users/phatchara/Desktop/Export_sepsis_data.csv'
output_file = '/Users/phatchara/Desktop/Cleaned_sepsis_data.csv'

# เปิดอ่านไฟล์ต้นทางด้วย UTF-16 (ซึ่งจะจัดการปัญหา � และ  ให้โดยอัตโนมัติ)
# และเขียนไฟล์ปลายทางด้วย UTF-8 มาตรฐาน
with open(input_file, 'r', encoding='utf-16', errors='ignore') as infile, \
     open(output_file, 'w', encoding='utf-8', newline='') as outfile:
    
    # ใช้ csv.reader เพื่ออ่านข้อมูล โดยระบบจะรับรู้เครื่องหมาย "..." ที่ครอบข้อความไว้อย่างถูกต้อง
    reader = csv.reader(infile, delimiter=',')
    writer = csv.writer(outfile, quoting=csv.QUOTE_MINIMAL)
    
    for row in reader:
        # ข้ามแถวที่ว่างเปล่า
        if not row:
            continue
            
        # ลบช่องว่างส่วนเกินที่ติดมากับตัวเลขในทุกๆ คอลัมน์ (เช่น " 16.00" -> "16.00")
        cleaned_row = [col.strip() for col in row]
        writer.writerow(cleaned_row)

print("แปลงไฟล์จาก UTF-16 เป็น UTF-8 และจัดการตัวคั่นสำเร็จเรียบร้อย!")