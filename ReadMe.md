# Makefileのサンプル

C++のMakeファイルの作成方法のサンプルです。  
srcフォルダ下のコードを再帰的にビルドします。  

## ビルドする前に...
サンプルソースの中で[POCO](https://pocoproject.org)を使っています。  
ビルドする前に、以下のコマンドでインストールして下さい。  
```
$ sudo apt install libpoco-dev
```

POCO無しでビルドしたい場合は、main.ccのPOCOhの部分を削除して実行して下さい。  
(ライブライを使う場合のサンプルで入れているだけなので)  

## フォルダ構成
```
|-- Makefile
|-- ReadMe.md
|-- obj         ビルドしたオブジェクトが出力される
`-- src         Source
```

