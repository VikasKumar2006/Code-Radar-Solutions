int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 2; i >= 0; i--) 
        printf("%d", (n >> i) & 1);
    
    return 0;
}

