# Get Next Line

## Overview

The **Get Next Line** project involves writing a function in C that reads a line from a file descriptor. This function is useful for handling file input in a systematic and efficient manner.

## Table of Contents

- [Description](#description)
- [Function Prototype](#function-prototype)
- [Files](#files)
- [Parameters](#parameters)
- [Return Value](#return-value)
- [External Functions Used](#external-functions-used)
- [Implementation Details](#implementation-details)
- [Compilation](#compilation)
- [Makefile](#makefile)
- [Bonus](#bonus)
- [Norms and Rules](#norms-and-rules)
- [Testing](#testing)
- [Forbidden Actions](#forbidden-actions)
- [Notes](#notes)

## Description

The `get_next_line` function reads a single line from a file descriptor, returning it as a string. It is designed to handle both standard input and file input seamlessly.

## Function Prototype

```c
char *get_next_line(int fd);

