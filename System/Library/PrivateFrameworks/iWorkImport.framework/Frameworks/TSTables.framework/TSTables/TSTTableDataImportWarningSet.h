@interface TSTTableDataImportWarningSet : TSTTableDataObject

+ (id)objectWithImportWarningSet:(id)a0 refCount:(unsigned int)a1;

- (id)description;
- (void)encodeToArchive:(void *)a0 archiver:(id)a1;
- (unsigned long long)estimateByteSize;
- (id)importWarningSet;
- (id)initObjectWithImportWarningSet:(id)a0 refCount:(unsigned int)a1;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1 completion:(id /* block */)a2;

@end