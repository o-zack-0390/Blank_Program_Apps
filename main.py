import streamlit as st
import importlib
import seisei
import saiten

st.title("空欄補充問題アプリ")

st.write("#### 4月にプログラムを変更しました。\n前回までのプログラムは難易度がかなり高くなってしまっていたため簡単なプログラムを題材にしています。")

if st.selectbox("実行形式を選択",["生成" , "採点"]) == "生成":
    seisei.seisei()
    importlib.reload(seisei)

else:
    saiten.saiten()
    importlib.reload(saiten)
