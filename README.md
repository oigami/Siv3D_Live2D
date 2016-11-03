# Siv3D_Live2D
Siv3D用のLive2Dライブラリです。

現在Debugビルド、x64環境のみの対応です。

# コンパイル&実行
コンパイルに[Live2D Cubism SDK2.1 DirectX11 2.1.04_1](http://sites.cybernoids.jp/cubism-sdk2/dirextx11-2-1)が必要です。
SDK利用規約に従ったうえでダウンロードし、VisualStudio側でincludeパス、libの設定をしてください

Main内でサンプルデータを使用しているので、
```
(ダウンロードしたLive2D Cubism SDKフォルダ)\sample\Simple
```
の中にある`res`フォルダを`Main.cpp`があるフォルダにコピーしてください。