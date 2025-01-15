#!/usr/bin/env python3
# -*- coding: UTF-8 -*-
import argparse
from enum import Enum
from builder import Builder, BuilderType, BuilderFactory


class Platform(Enum):
    ANDROID = "Android"
    LINUX = "Linux"


def get_args() -> argparse.Namespace:
    parser = argparse.ArgumentParser(description="Build and install the project")
    parser.add_argument(
        "--platform",
        type=Platform,
        choices=list(Platform),
        default=Platform.LINUX,
        help="Build platform"
    )
    parser.add_argument(
        "--clean",
        action="store_true",
        help="Clean the build directory"
    )
    parser.add_argument(
        "--prefix",
        default="",
        help="Prefix path of compiler"
    )
    return parser.parse_args()


def get_builder(args: argparse.Namespace) -> Builder:
    builder_map = {
        Platform.ANDROID: (BuilderType.CMAKE_ANDROID, "build", args.prefix),
        Platform.LINUX: (BuilderType.CMAKE_GCC, "build", args.prefix),
    }
    builder_type, *builder_args = builder_map.get(args.platform, (None,))
    return BuilderFactory.create(builder_type, *builder_args) if builder_type else None


def main():
    args = get_args()
    builder = get_builder(args)
    
    if not builder:
        print("Unsupported platform")
        return 1
    
    if args.clean:
        builder.clean()
        return 0
    
    builder.build()
    return 0


if __name__ == "__main__":
    exit(main())

