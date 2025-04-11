#!/usr/bin/env python
import lzf
import sys

def test_compression(input_file):
    # Decompress    
    lzf.lzf_decompressF(input_file, 'output.snap')    

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("Usage: python test.py <input_file>")
        sys.exit(1)
    
    test_compression(sys.argv[1]) 