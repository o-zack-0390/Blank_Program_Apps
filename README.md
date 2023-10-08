# 空欄補充型プログラミング演習問題アプリ

<h3>概要</h3>
プログラミング演習問題の一つである「空欄補充問題」を自動生成・自動採点するアプリ<br><br>

<img width="983" alt="image" src="https://github.com/o-zack-0390/Blank_Program_Apps/assets/116938721/7fb164dd-7bd6-49f3-a481-8a2055ccbed9">

<h3>開発言語</h3>
python3<br><br>

<h3>フレームワーク</h3>
Streamlit<br><br>

<h3>アーキテクチャ</h3>
<img width="912" alt="image" src="https://user-images.githubusercontent.com/116938721/223317062-7e392242-d1c8-4b44-b844-8507332dc51f.png">
<br><br>

<h3>使用方法(生成)</h3>
1. 実行形式「生成」を選択<br>
2. 空欄対象プログラムを選択<br>
3. 「空欄補充問題を生成」を押す<br>
4. 「ファイルをダウンロード」を押すと空欄補充問題(prob.c)がダウンロードされる<br><br>

<img width="941" alt="image" src="https://user-images.githubusercontent.com/116938721/223309208-61c707ff-a122-4d31-aae7-e8e59d560f0a.png">

<h3>使用方法(採点)</h3>
1. 以下の5種類を提出
<li>正解プログラム</li>
<li>正解プログラムの実行結果</li>
<li>空欄補充問題</li>
<li>解答者のプログラム</li>
<li>解答者のプログラムの実行結果</li>
<br>
2. 「採点を開始」を押すと採点する<br>
3. 「ファイルをダウンロード」を押すと採点結果がダウンロードされる<br><br><br>


<img width="929" alt="image" src="https://user-images.githubusercontent.com/116938721/223310411-0260d4ec-2a03-4874-9aa2-8f978e1c150c.png">
<img width="920" alt="image" src="https://user-images.githubusercontent.com/116938721/223309392-365e032d-9a0a-46e3-a3f4-66297c51532b.png">
<br>
生成される採点結果<br>
<img width="215" alt="image" src="https://user-images.githubusercontent.com/116938721/228413373-7a665960-8d43-487c-876e-dd4aa8957b79.png">
<br><br>


<h3>開発背景</h3>
大学ではプログラミング演習の授業があるが、プログラミング演習問題の作成・採点にかなりの労力が掛かっていることから開発に至った。<br><br>
<img width="950" alt="image" src="https://user-images.githubusercontent.com/116938721/227775861-82f69493-1779-4c0e-99ae-b454fa3cf816.png">
<br><br>

<h3>開発秘話</h3>
不適切な空欄が生成されないようにする方法を模索するのに3ヶ月掛かっており、その結果TF-IDF,正規表現,ランダム選択法を組み合わせる方法を思いついた。
<br><br>

<h3>デプロイ時のフィードバック</h3>
「自動生成」において、最初はアップロードされた.cファイルから空欄補充問題を生成する仕様にしていたが、「スマホからやる場合は.cファイルなんて持ってないよね。予め1年分の演習問題を登録しておいて選択できる方が良くない？」という意見を友人からもらったため選択した演習問題から生成する仕様に変更している。<br><br>
<img width="950" alt="image" src="https://user-images.githubusercontent.com/116938721/227775934-b8b2eb38-f1ea-4d54-a5c5-18d972c165cc.png">
<br><br>


<h3>使用教材</h3>
公開アプリでは以下のサイトで公開されているプログラムを対象としました。<br>
・<a href="https://webkaru.net/clang/program-examples/">C言語入門　サンプルプログラム集</a>
<br><br>
問題文,解答の説明などは上記のサイトに記載されているため↑にアクセスをお願いします。<br><br>
大学の演習問題は著作権があるのでプログラムを全て置き換えています。
