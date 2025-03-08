Overview
========

Command line assistant for **bash** command execution using generative AI service.


Example
-------

>**[user@host]$** ./chat find top 3 files in /tmp by size<br>
**Assistant:**<br>
find /tmp -type f -exec stat -c "%n" {} + | sort -rn | head -3<br>
**Execute? [y/n/e=explain]** y<br>
/tmp/tmp1.bin<br>
/tmp/tmp2.bin<br>
/tmp/tmp3.bin<br>
**Success**<br>


Setup
=====

1. Install and build [llama.cpp](https://github.com/ggml-org/llama.cpp)
2. Download small language model such as *Llama-3.2-1B-Instruct-F16.gguf*
3. Run local *llama.cpp* server: `./llama.cpp -m Llama-3.2-1B-Instruct-F16.gguf -p 8080`
4. Now use *chat* to interact with the server


Requirements
============

Python 3.x with *requests* library


Notes
======
* Uses subset of OpenAI-compatible REST API to interact with a OpenAI-compatible generative AI service such as the *llama-server* from *llama.cpp*
