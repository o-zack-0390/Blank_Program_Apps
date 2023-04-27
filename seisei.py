import streamlit as st
import importlib
import write_tfidf
import sort_tfidf
import bsg
import generate
import print_tfidf


def seisei():

  option = st.selectbox("空欄対象プログラムを選択", \
                        ["01.c", "02.c", "03.c", "04.c", "05.c", "06.c", "07.c", "08.c", "09.c", "10.c", \
                         "11.c", "12.c", "13.c", "14.c", "15.c", "16.c", "17.c", "18.c", "19.c", "20.c", \
                         "21.c", "22.c", "23.c", "24.c", "25.c", "26.c", "27.c", "28.c", "29.c", "30.c", \
                         "31.c", "32.c", "33.c", "34.c", "35.c", "36.c", "37.c", "38.c", "39.c", "40.c", \
                         "41.c", "42.c", "43.c", "44.c", "45.c", "46.c", "47.c", "48.c", "49.c", "50.c", \
                         "51.c", "52.c", "53.c", "54.c", "55.c", "56.c", "57.c", "58.c", "59.c", "60.c", \
                         "61.c", "62.c", "63.c", "64.c", "65.c", "66.c", "67.c", "68.c", "69.c", "70.c", \
                         "71.c", "72.c", "73.c", "74.c", "75.c"])

  path1 = "/app/educationapp/generation/result/tf-idf1.txt"
  path2 = "/app/educationapp/generation/result/tf-idf2.txt"
  path3 = "/app/educationapp/generation/result/generate_note.txt"
  path4 = "/app/educationapp/generation/result/uid.txt"

  if st.button("空欄補充問題を生成"):

    write_tfidf.write_tfidf(path1, path2, path3, path4, option + "\n")
    sort_tfidf.sort_tfidf(path3)

    path1 = "/app/educationapp/generation/result/bsg1.txt"
    path2 = "/app/educationapp/generation/result/bsg2.txt"
    path3 = "/app/educationapp/generation/result/generate_note.txt"

    bsg.bsg(path1, path2, path3)

    path1 = "/app/educationapp/generation/result/generate_note.txt"
    print_tfidf.print_tfidf(path1)

    path1 = "/app/educationapp/generation/result/bsg1.txt"
    path2 = "/app/educationapp/generation/result/bsg2.txt"
    path3 = "/app/educationapp/generation/result/prob.c"
    path4 = "/app/educationapp/generation/data/" + option

    generate.generate(path4, path3, path1, path2)

    importlib.reload(write_tfidf)
    importlib.reload(sort_tfidf)
    importlib.reload(bsg)
    importlib.reload(generate)