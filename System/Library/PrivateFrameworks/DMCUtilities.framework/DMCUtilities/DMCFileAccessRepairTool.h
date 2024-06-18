@class NSFileManager;

@interface DMCFileAccessRepairTool : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;

- (BOOL)posixThinksFileNeedsRepairAtPath:(id)a0;
- (int)accessAtPath:(const char *)a0 mode:(int)a1 error:(int *)a2;
- (id)contentsOfFileAtPath:(id)a0;
- (BOOL)changePermissions:(unsigned short)a0 ofFileAtPath:(id)a1;
- (BOOL)fileNeedsRepairAtPath:(id)a0;
- (id)createRepairToolErrorWithCode:(long long)a0;
- (void).cxx_destruct;
- (BOOL)fileManagerThinksFileNeedsRepairAtPath:(id)a0;
- (BOOL)repairFileAtPath:(id)a0 error:(id *)a1;
- (id)createFileManager;
- (BOOL)writeData:(id)a0 toFileAtPath:(id)a1;

@end
