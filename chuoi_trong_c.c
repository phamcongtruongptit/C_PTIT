puts(s) //  xuất ra chuỗi s (đã cho xuống dòng)
gets(s) // nhập chuỗi có dấu cách
scanf("\n") // có tác dụng như cin.ignore trong c++
            // việc đọc suống dòng khi nhập 1 test
s2[len]='\0'// thêm kí tự nulll vào cuối chuỗi mỗi sau khi gán
            // vì \0 là kí tự để kết thúc chuỗi

CÁC HÀM TRONG THƯ VIỆC STRING.H.
1. strupr(s); // Đổi toàn bộ các ký tự của chuỗi thành IN HOA
2. strlwr(s); //Đổi toàn bộ các ký tự của chuỗi thành in thường
3. l=strlen(s) // %d: trả về độ dài l của chuỗi s.
4. So sánh chuỗi: so sánh theo thứ tự từ điển:
    int cmp = strcmp(s1,s2); // có phân biệt hoa thường
    cmp = 0 --> 2 chuỗi bằng nhau
    cmp < 0 --> s1<s2 và ngược lại. Tương tự so snhas stricmp
    int stricmp(const char *s1, const char *s2); // không phân biệt hoa thường
5. Hàm gán chuỗi, gán nội dung chuỗi vv...
    strcpy(s1,s2) // chép toàn bộ chuỗi s2 sang s1
    strncpy(s1+x,s2,n)// chép(thay thế) n kí tự từ vị trí x trong chuỗi s1 bằng n kí tự đầu tiên của chuỗi s2
    s3 = strdup(s1 + x) // tạo chuỗi s3 bằng cách lấy từ vị trí x đến hết của chuỗi s1. 
6. Hàm nỗi chuỗi:
    s3 = strcat(s1,s2) //s3 = s1+s2; 
7. Hàm tách chuỗi. 
    char *strtok(char *s,const char *sep);
        #include<stdio.h>
        #include<string.h>
        #define SE "., " // note: sau #define không có ;
        //SE là một chuỗi gồm các kí tự muốn tách. Ở đây gặp dấu chấm, dấy phẩy, dấu cách sẽ tách
        main(){
            char s[] = "Thu strtock: 9,123.45" ; 
            char *p; //phải khai báo con trỏ
            p= strtok(s, SE) ; 
            while(p!= NULL){
                printf("%s\n" , p) ; 
                p = strtok(NULL , SE) ; 
            }
        }
        /* Kết quả. 
        Thu
        strtock:
        9
        123
        45
        */
8. Tìm 1 kí tự trên chuỗi. 
    char *strchr(const char *s, int c);
    Tìm một đoạn kí tự trong chuỗi
    char *strstr(const char *s1,const char *s2);
    VD: char *p ; 
    p = strchr(s, 'h') ; trả về chuỗi từ vị trí kí tự 'h' đầu tiên tìm thấy đến hết chuỗi
    p = strstr(s , "EM") ; trả về chuỗi từ vị trí chuỗi con "EM" đầu tiên tìm thấy đến hết chuỗi
9. Hàm chèn chuỗi con.


