@class NSString, NSMutableDictionary, NSMutableOrderedSet;

@interface CNVirtualFileManager : NSObject <CNFileManager> {
    NSMutableDictionary *_files;
    NSMutableOrderedSet *_directories;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)URLByNormalizingDirectoryURL:(id)a0;
+ (id)allParentFoldersOfURL:(id)a0;
+ (BOOL)isHiddenURL:(id)a0;

- (id)removeItemAtURL:(id)a0;
- (id)init;
- (id)writeData:(id)a0 toURL:(id)a1 options:(unsigned long long)a2;
- (id)removeExtendedAttribute:(id)a0 atURL:(id)a1;
- (id)setValue:(id)a0 forExtendedAttribute:(id)a1 atURL:(id)a2;
- (void).cxx_destruct;
- (id)asyncWriteData:(id)a0 toURL:(id)a1 options:(unsigned long long)a2;
- (BOOL)fileExistsAtURL:(id)a0;
- (id)dataWithContentsOfURL:(id)a0;
- (id)observableWithContentsOfURL:(id)a0;
- (BOOL)getValue:(id *)a0 forExtendendAttribute:(id)a1 url:(id)a2 error:(id *)a3;
- (id)valueForExtendedAttribute:(id)a0 atURL:(id)a1;
- (id)asyncDataWithContentsOfURL:(id)a0;
- (id)contentsOfDirectoryAtURL:(id)a0 includingPropertiesForKeys:(id)a1 options:(unsigned long long)a2;
- (BOOL)fileExistsAtURL:(id)a0 isDirectory:(BOOL *)a1;
- (id)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2;

@end
