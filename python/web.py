import webbrowser
from time import sleep
from timeout_decorator import timeout

@timeout(2000)
for i in range(4):
    webbrowser.open("https://www.youtube.com/watch?v=ffRI_IMjNb8m")
  