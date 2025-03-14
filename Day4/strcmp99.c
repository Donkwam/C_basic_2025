//int my_strcmp(char* A, char* B)
//{
//    // 각 str의 길이 구하기
//    int A_len = strlen(A);
//    int B_len = strlen(B);
//
//    // 삼항연산자. 둘의 길이 중 더 짧은놈이 range 변수에 담김
//    int range = A_len > B_len ? B_len : A_len;
//
//    // 짧은놈을 기준으로 반복문 순회
//    // 오름차순이 기준이니까 더 작은놈을 선택
//    for (int i = 0; i < range; ++i)
//    {
//        if (A[i] < B[i]) { return -1; }
//        else if (A[i] > B[i]) { return 1; }
//        else { continue; }
//    }
//    // for 문에서 return문이 실행이 안됬다면 두개의 str이 같다는 말
//    // 길이 기준으로 판단.
//    if (A_len < B_len) { return -1; }
//    else if (A_len > B_len) { return 1; }
//    // 위에도 안걸리면 진짜 둘이 똑같은거임
//    else { return 0; }
//}
