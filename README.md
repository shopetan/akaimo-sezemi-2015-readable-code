## 開発言語
C

### 入力

- データファイル
- - ファイル名は任意です。例では、recipe.txt
- - 中身はオムライスのみ。

データファイルの内容

    % cat recipe.txt  
    オムライス  
    %


### 実行方法  
実行例

    % clang recipe.c -o recipe  
    % ./recipe recipe.txt
    オムライス
    %