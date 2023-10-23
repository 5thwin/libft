# libft
libft는 표준 C 라이브러리 함수들의 재구현 프로젝트입니다. 이 라이브러리는 C 언어 프로젝트를 개발하는 데 필요한 기본적인 함수들을 포함하고 있습니다.

## 구성
### 기본 함수
**문자열 함수**
```
ft_strlen, ft_strchr, ft_strdup, ft_strjoin, ft_strlcat, ft_strncmp, ft_strnstr, ft_strrchr, ft_strtrim, ft_substr
```
**메모리 함수**
```
ft_bzero, ft_calloc, ft_memccpy, ft_memchr, ft_memcmp, ft_memcpy, ft_memmove, ft_memset
```
**숫자 및 문자 검사 및 변환 함수** 
```
ft_atoi, ft_isalnum, ft_isalpha, ft_isascii, ft_isdigit, ft_isprint, ft_itoa, ft_tolower, ft_toupper
```
**출력 함수** 
```
ft_putchar_fd, ft_putendl_fd, ft_putnbr_fd, ft_putstr_fd
```
**기타**
```
ft_split, ft_strmapi
```
### 보너스 함수
**연결 리스트 함수**
```
ft_lstadd_back, ft_lstadd_front, ft_lstclear, ft_lstdelone, ft_lstiter, ft_lstlast, ft_lstmap, ft_lstnew, ft_lstsize
```
## 시작하기 전에
### 사전 조건
```
gcc: C 컴파일러
make: 빌드 자동화 도구
```
### 설치하기
1. 저장소를 클론합니다.
```
git clone https://github.com/your-username/libft.git
```
2. 디렉토리로 이동합니다.
```
cd libft
```
3. 라이브러리를 빌드합니다.
```
make
```
### 사용 방법
컴파일 시 -L 플래그로 libft 디렉토리를 지정하고 -lft로 라이브러리를 링크합니다.
```
gcc your-source.c -L./libft -lft
```

## 개발자 정보
- 이름 - @5thwin
- 이메일 - hisy6887@gmail.com
