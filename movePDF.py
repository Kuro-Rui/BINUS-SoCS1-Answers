"""
movePDF
-------

This script moves PDFs from the Downloads folder to the specified contest folder.
You can ignore this file if you're here for answers of the problems.
"""

import os
import re
from glob import glob
from pathlib import Path
from typing import Dict

PDF_REGEX = re.compile(r"prob-([A-Z]+)\.pdf")
FOLDER_REGEX = re.compile(r"Problem ([A-Z]+): .+")

pdfs: Dict[str, str] = {}
for pdf_path in glob(os.path.join(os.path.expanduser("~/Downloads"), "prob-*.pdf")):
    pdfs[PDF_REGEX.match(os.path.basename(pdf_path)).group(1)] = pdf_path
if not pdfs:
    print("No PDFs found in Downloads folder.")
    exit(1)

folders = sorted([i for i in os.listdir() if "." not in i and os.path.isdir(Path.cwd() / i)])
print(f"Select a Contest (1-{len(folders)}): ")
for i, folder in enumerate(folders, start=1):
    print(f"{i}. {folder}")

while True:
    try:
        selection = int(input("Enter the number of the contest: "))
    except ValueError:
        print(f"Please enter a valid number between 1 and {len(folders)}.")
    else:
        if not 1 <= selection <= len(folders):
            print(f"Please select a number between 1 and {len(folders)}.")
            continue
        selected = folders[selection - 1]
        confirmation = input(f"Move all PDFs to {selected} contest? (y/yes/n/no): ")
        if confirmation.lower() in ("y", "yes"):
            contest_folder = os.path.join(os.getcwd(), selected)
            break
        else:
            if confirmation.lower() not in ("n", "no"):
                print("I'll take that as a no.", end=" ")
            print("Goodbye.")
            exit(0)

for problem, pdf_file in pdfs.items():
    destinations = sorted(
        [i for i in os.listdir(contest_folder) if os.path.isdir(os.path.join(contest_folder, i))]
    )
    destination_file = None
    for destination in destinations:
        if FOLDER_REGEX.match(destination).group(1) == problem:
            destination_file = os.path.join(
                contest_folder, destination, os.path.basename(pdf_file)
            )
            break
    if not destination_file:
        print(f"Could not find a folder for problem {problem}.")
        continue
    try:
        os.replace(pdf_file, destination_file)
        print(f"Moved {os.path.basename(pdf_file)} to {destination}")
    except Exception as e:
        print(f"Error when moving {os.path.basename(pdf_file)}: {e}")
