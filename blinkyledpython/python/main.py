import time
from arduino.app_utils import *

ledState = False

def loop():
    global ledState
    ledState = not ledState
    Bridge.call("LED", ledState)
    time.sleep(0.1)

# See: https://docs.arduino.cc/software/app-lab/tutorials/getting-started/#app-run
App.run(user_loop=loop)
