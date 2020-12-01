import PyPDF2  
    
# creating a pdf file object  
pdfFileObj = open('Document1.pdf', 'rb')  
    
# creating a pdf reader object  
pdfReader = PyPDF2.PdfFileReader(pdfFileObj)  
    
    
# creating a page object  
print(pdfReader.getPage(0).extractText()) 
    