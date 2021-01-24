* C 기초
    * stdio.h
        * 시작
            ```c
            #include <stdio.h>
            ```

        * 출력
            ```c
            printf("hello, world");
            ```

        * 파일이름.c

        * https://ko.wikipedia.org/wiki/Stdio.h

    * clang
        * 컴파일
            ```shell
            clang 파일이름.c 
            ```
        * https://ko.wikipedia.org/wiki/%ED%81%B4%EB%9E%AD
    
    * 컴파일러
        * https://ko.wikipedia.org/wiki/%EC%BB%B4%ED%8C%8C%EC%9D%BC%EB%9F%AC

* 문자열
    * get_string = 스크래치 ask함수
    
    * 변수
    
    * 형식지정자
    
    * 문자열을 받기때문에 string에서의 s를 %뒤에 붙여서 인자를 받아줍니다.

    * 컴파일 방법
    ```shell
    clang -o string string.c -lcs50
    ```

    ```shell
    make string
    ```

* 조건문과 루프
    * int : 정수(integer)
    
    * if<br>
    if ( ) 의 괄호 안에는 검사하고자 하는 조건이 들어가고, { } 안에는 조건을 만족할 때 수행하고자 하는 작업

        ```c
        if (조건식)
        {
            수행할 문장
        }
        ```

        ```c
        if (조건식1)
        {
            수행할 문장1
        }
        else
        {
            수행할 문장2
        }
        ``` 

        ```c
        if (조건식1)
        {
            수행할 문장1
        }
        else if (조건식2)
        {
            수행할 문장2
        }
        else
        {
            수행할 문장3
        }
        ```
    
    * while<br>
    루프

        ```c
        while (true)
        {
            수행할 문장
        }
        ```

        ```c
        while (조건)
        {
            수행할 문장
        }
        ```
    
    * for<br>
    루프

        ```c
        for (변수초기화; 변수조건; 변수증가)
        {
            수행할 문장
        }
        ```