import linecache
import streamlit as st

def print_tfidf(path):
    f     = open(path, 'r', encoding="utf-8")
    lines = f.readlines()
    with st.expander("TF-IDF値"):

        for line in lines:
            st.write(line)
            line = line.split(' ')
            #st.write("##### {}:{}".format(line[0], line[1]))
    f.close()
