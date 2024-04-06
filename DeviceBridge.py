#!/usr/bin/python
# -*- coding: UTF-8 -*-
from abc import ABCMeta, abstractmethod
import subprocess
import sys
import re
from typing import List


def run_cmd(args: List[str]) -> str:
    try:
        return subprocess.check_output(args, shell=False).decode('utf-8')
    except subprocess.CalledProcessError:
        print(f'cmd run failed: {args}')
        sys.exit(-1)


class DeviceBridge(metaclass=ABCMeta):
    @abstractmethod
    def version(self) -> None:
        pass

    @abstractmethod
    def devices(self) -> List[str]:
        pass

    @abstractmethod
    def set_device(self, device: str) -> None:
        pass

    @abstractmethod
    def get_device(self) -> str:
        pass

    @abstractmethod
    def push(self, source: str, destination: str) -> None:
        pass

    @abstractmethod
    def pull(self, source: str, destination: str = '.') -> None:
        pass

    @abstractmethod
    def shell(self, args: List[str]) -> None:
        pass


class Adb(DeviceBridge):
    def __init__(self):
        self.device = ''

    def version(self) -> None:
        cmd = ['adb', 'version']
        ret = run_cmd(cmd)
        print(ret)

    def devices(self) -> List[str]:
        cmd = ['adb', 'devices']
        ret = run_cmd(cmd)
        pattern = r'^(\w+)\s+device$'
        device_list: list[str] = []
        for sub_str in ret.strip().split('\r\n'):
            match_obj = re.match(pattern, sub_str)
            if match_obj is not None:
                device_list.append(match_obj.group(1))
        return device_list

    def set_device(self, device: str) -> None:
        self.device = device

    def get_device(self) -> str:
        return self.device

    def push(self, source: str, destination: str) -> None:
        if not self.device or not isinstance(source, str) or not isinstance(destination, str):
            raise RuntimeError('device is not set')
        cmd = ['adb', '-s', self.device, 'push', source, destination]
        ret = run_cmd(cmd)
        print(ret)

    def pull(self, source: str, destination: str = '.') -> None:
        if not self.device or not isinstance(source, str):
            raise RuntimeError('device is not set')
        cmd = ['adb', '-s', self.device, 'pull', source, destination]
        ret = run_cmd(cmd)
        print(ret)

    def shell(self, args: List[str]) -> None:
        if not self.device:
            raise RuntimeError('device is not set')
        cmd = ['adb', '-s', self.device, 'shell'] + args
        ret = run_cmd(cmd)
        print(ret)


class DeviceBridgeFactory(object):
    @staticmethod
    def create_device_bridge() -> DeviceBridge:
        return Adb()

