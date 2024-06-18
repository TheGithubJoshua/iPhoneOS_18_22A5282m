@interface NSNullFileHandle : NSFileHandle

- (int)fileDescriptor;
- (void)setReadabilityHandler:(id /* block */)a0;
- (BOOL)seekToOffset:(unsigned long long)a0 error:(out id *)a1;
- (BOOL)getOffset:(out unsigned long long *)a0 error:(out id *)a1;
- (void)setWriteabilityHandler:(id /* block */)a0;
- (id)readDataUpToLength:(unsigned long long)a0 error:(out id *)a1;
- (void)truncateFileAtOffset:(unsigned long long)a0;
- (BOOL)writeData:(id)a0 error:(out id *)a1;
- (BOOL)closeAndReturnError:(out id *)a0;
- (id)readDataOfLength:(unsigned long long)a0;
- (BOOL)synchronizeAndReturnError:(out id *)a0;
- (unsigned long long)offsetInFile;
- (id /* block */)readabilityHandler;
- (void)synchronizeFile;
- (id)availableData;
- (BOOL)truncateAtOffset:(unsigned long long)a0 error:(out id *)a1;
- (id /* block */)writeabilityHandler;
- (void)seekToFileOffset:(unsigned long long)a0;
- (void)closeFile;
- (void)writeData:(id)a0;
- (unsigned long long)seekToEndOfFile;
- (id)readDataToEndOfFileAndReturnError:(out id *)a0;
- (id)readDataToEndOfFile;
- (BOOL)seekToEndReturningOffset:(out unsigned long long *)a0 error:(out id *)a1;

@end
