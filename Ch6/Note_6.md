* malloc과 포인터 복습
    * 포인터 : 자료형 뒤에 * (Asterisk, 애스터리스크)

    * malloc : 사용할 메모리 공간을 확보

* 배열의 크기 조정하기
    * malloc : 사용할 메모리 공간을 확보

    * realloc : malloc 함수로 동적 할당한 메모리의 크기를 변경

* 연결 리스트: 코딩
    * 연결 리스트

* 연결 리스트: 시연
    * 연결 리스트

    * 배열

* 연결 리스트: 트리
    * 트리
    
    * 루트

    ```c
    //이진 검색 트리의 노드 구조체
    typedef struct node
    {
    // 노드의 값
    int number;

    // 왼쪽 자식 노드
    struct node *left;
 
   // 오른쪽 자식 노드
    struct node *right;
    } node;

    // 이진 검색 함수 (*tree는 이진 검색 트리를 가리키는 포인터)
    bool search(node *tree)
    {
        // 트리가 비어있는 경우 ‘false’를 반환하고 함수 종료
        if (tree == NULL)
        {
            return false;
        }
        // 현재 노드의 값이 50보다 크면 왼쪽 노드 검색
        else if (50 < tree->number)
        {
            return search(tree->left);
        }
        // 현재 노드의 값이 50보다 작으면 오른쪽 노드 검색
        else if (50 > tree->number)
        {
            return search(tree->right);
        }
        // 위 모든 조건이 만족하지 않으면 노드의 값이 50이므로 ‘true’ 반환
        else {
            return true;
        }
    }
    ```

* 해시 테이블
    * 해시 테이블 : 연결 리스트의 배열
    
    * 해시 함수 : 이름의 가장 첫 글자

* 스택, 큐, 딕셔너리
    * 스택 : 값이 위로 쌓이는 구조

    * 큐 : 메모리 구조에서 살펴봤듯이 값이 아래로 쌓이는 구조

    * 딕셔너리 :  ‘키’와 ‘값’이라는 요소로 구성