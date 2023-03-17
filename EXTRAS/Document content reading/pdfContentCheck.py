#importing modules
import os
import PyPDF2

#extracting files from the directory
dir_files = os.listdir()

print(dir_files)

for files in dir_files:
    if files.endswith('.pdf'):
        print(f'SCANNING CONTENT OF {files}...')
        f = open(files,'rb')
        #crating a pdfReader object
        pdfReader = PyPDF2.PdfFileReader(f)

        #to print the no of pages in the pdf
        no_of_pages = pdfReader.numPages
        print(f'Total no of pages in the pdf are: {no_of_pages}')

        #creating anothe robject for indivisual page selection 
        newPage_obj = pdfReader.getPage(0)

        #extracting the curent selected page content
        print(f'\nSCANNING THE CONTENT OF PAGE...')
        print (newPage_obj.extractText())