## リーダブルコードメモ

### 仕様3でのメモ
#### 実際のコード

```c
    if (fname == NULL) {
        printf("%sが開けません\n", argv[1]);
        exit(1);
    }
```

ファイルが読めないときに、読めないファイル名を表示させる。

### 仕様4でのメモ
#### 実際のコード

```c
    while(fgets(buf, 256, fname) != NULL) {
        printf("%s", buf);
    }
    printf("\n");
```



