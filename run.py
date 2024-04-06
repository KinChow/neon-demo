#!/usr/bin/python
# -*- coding: UTF-8 -*-
from DeviceBridge import DeviceBridgeFactory
import os

if __name__ == '__main__':
    adb = DeviceBridgeFactory.create_device_bridge()
    adb.version()
    device_list = adb.devices()
    print(device_list)
    if not device_list:
        print('No device found')
        exit(1)
    adb.set_device(device_list[0])
    print(adb.get_device())
    adb.push(os.path.join('output', 'NeonDemo'), '/data/local/tmp/')
    adb.shell(['chmod', '777', '/data/local/tmp/NeonDemo'])
    adb.shell(['/data/local/tmp/NeonDemo'])
    