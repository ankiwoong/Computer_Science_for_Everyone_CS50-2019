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

* 자료형, 형식 지정자, 연산자
    * char : 문자 하나 (예) 'a', 'Z', '?
    
    * long : 더 큰 크기의 정수
    
    * float : 부동소수점을 갖는 실수 (예) 3.14, 0.0, -28.56
    
    * double : 부동소수점을 포함한 더 큰 실수
    
    * % : 형식지정자
        ```
        %c : char
        %f : float, double
        %i : int
        %li : long
        %s : string
        ```
    
    * && : 모두 참일 때만 참인 and 연산자
    
    * || : 하나라도 참이면 참인 or 연산자

* 사용자 정의 함수, 중첩 루프
    * 사용자 정의 함수 : 코드의 단순화

    * 중첩 루프

* 하드웨어의 한계
    * 메모리 : 우리가 작성한 프로그램은 구동 중에 RAM에 저장되는데요, RAM은 유한한 크기의 비트만 저장할 수 있기 때문에 때때로 부정확한 결과를 내기도 합니다.

    * 오버플로우 : 타입이 저장할 수 있는 수를 넘은 이후에는 아래와 같은 에러와 함께  0이 출력
