* 메모리 주소
    * 16진법 : Hexadecimal / 1byte의 2진수로 변환되기 때문에 정보를 표현하기 매우 유용
    
    * 메모리 주소

* 포인터 : 메모리 주소 저장

* 문자열
    * 포인터 : 주소를 저장하는 변수
    
    * 문자열 : 포인터를 기반으로 문자열을 선언
    ```c
    char *s = "Ankiwoong";
    ```

* 문자열 비교
    * 문자열 : 첫번째 문자를 시작으로 메모리상에서 바로 옆에 저장

* 문자열 복사
    * malloc : 정해진 크기 만큼 메모리를 할당하는 함수

* 메모리 할당과 해제
    * free
    
    * valgrind : 메모리와 관련된 문제 여부 확인
    ```c
    help50 valgrind ./filename
    ```

* 메모리 교환, 스택, 힙
    * 스택
    
    * 힙
    
    * 포인터

* 파일 쓰기
    * scanf
    ```c
    #include <stdio.h>

    int scanf(const char * restrict format, ...);
    ```

    * fopen
    ```c
    FILE * fopen( const char *, const char * );

    첫번째 인자 : 처리할 파일 명 

    두번째 인자 : 파일 처리 종류 지정 (모드) 
    ```

    * fprintf
    ```c
    #include <stdio.h>

    int fprintf(FILE* stream, const char* format, ...);
    ```

    * fclose
    ```c
    #include <stdio.h>

    int fclose(FILE* stream);
    ```

* 파일 읽기
    * JPEG
    ```
    FF D8 FF FE 00	.jpeg		JPG Graphical File
    FF D8 FF E1	.jpg		JPG Graphical File
    ```
    
    * fread

    * File Magic Numbers
    https://en.wikipedia.org/wiki/List_of_file_signatures