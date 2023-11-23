# 空欄補充型プログラミング演習問題アプリ

URL : 
<a href="https://blankprogramapps-zywfpvpqet3jxpc4eyzs7a.streamlit.app/">
  空欄補充型プログラミング演習問題アプリ
</a>
<br>
「😴」が表示されてる場合は「Yes, get this app back up!」を押して起動してください。(1分程かかります)

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

<h3>苦労したこと・工夫したこと</h3>
空欄の生成箇所の最適化に凄く苦労した。
今までは、どこの変数を空欄にするかを教授が決めていたが、自動化に伴い空欄の生成も自動化する必要があった。
しかし、「空欄の生成」という<font color="red">明確な判断基準が無い作業を自動化</font>することが非常に難しかった。<br>
判断基準が無いとランダムで空欄を生成することになってしまうため、まずは空欄を生成する際の判断基準を探すことから始めた。
実際には教授が作成したプログラミング演習問題をデータ分析し、何か特徴のある傾向を掴めないか試していたのだが、
全36個あるプログラミング演習問題を分析していく中で、次の傾向が強く現れていることに気いた。<br><br>
「<font color="red">Aというプログラムに空欄を生成する場合は、Aでのみ多く使われており、A以外のプログラムでは殆ど使われてない変数名を空欄にしている</font>」<br><br>
この結果から、「Aというプログラムでのみ多く使われており、A以外のプログラムでは殆ど使われてない変数名」を自動で取得できれば、空欄の生成位置を最適化できると考えた。<br>
早速実現するための手法をネットで調べたり学会に出たりして探してみたところ、文書分類で使われるTF-IDFという手法を見つけた。
TF-IDFは、「Aという文書で多く出現しているが、他の文書では殆ど出現していない単語」を取得することができる。
故に、プログラムを文書と見立てて、TF-IDFを実装したところ、「Aでのみ多く使われており、A以外のプログラムでは殆ど使われてない変数名」を空欄にすることが可能になった。
結果的に、<font color="red">教授が作成した演習問題と8割以上同じ位置に空欄を生成することに成功</font>し、質を保ちながら瞬時に演習問題を生成できるアプリケーションが完成した。
<br><br>
<img width="965" alt="image" src="https://github.com/o-zack-0390/Blank_Program_Apps/assets/116938721/14d81921-c90d-4bc6-a356-848ee40c6cf7">
<br><br>
<img width="975" alt="image" src="https://github.com/o-zack-0390/Blank_Program_Apps/assets/116938721/0fa98192-9311-4296-9f5e-ee9e43469efb">
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
