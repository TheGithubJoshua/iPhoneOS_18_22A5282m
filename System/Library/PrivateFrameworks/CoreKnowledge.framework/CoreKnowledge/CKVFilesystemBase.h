@class NSURL;

@interface CKVFilesystemBase : NSObject <NSCopying>

@property (readonly, nonatomic) NSURL *rootDirectory;

+ (id)baseURLWithTargetDirectoryPath:(id)a0 relativeToDirectoryPath:(id)a1;
+ (id)defaultBase;

- (BOOL)removeItemAtURL:(id)a0;
- (id)init;
- (BOOL)writeObject:(id)a0 toFileWithName:(id)a1 inDirectory:(id)a2;
- (id)initWithTargetDirectoryPath:(id)a0 relativeToDirectoryPath:(id)a1;
- (BOOL)removeAllContents;
- (id)getOrCreateDirectoryWithRelativePath:(id)a0;
- (id)_resolveFileURLFromName:(id)a0 directory:(id)a1;
- (unsigned long long)hash;
- (id)readDictionaryFromPlistFileWithName:(id)a0 inDirectory:(id)a1;
- (BOOL)isEqualToFileManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)readFileWithName:(id)a0 objectClass:(Class)a1 inDirectory:(id)a2;
- (BOOL)writeDictionary:(id)a0 toPlistFileWithName:(id)a1 inDirectory:(id)a2;
- (BOOL)_fileExistsAtURL:(id)a0;
- (BOOL)fileExistsWithName:(id)a0 inDirectory:(id)a1;
- (BOOL)isChildOfRootDirectory:(id)a0;

@end
