@class NSString, FCThreadSafeMutableSet, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface FCAssetStore : NSObject {
    NSString *_directoryPath;
    NSString *_preferredExtension;
    NSMutableSet *_knownKeys;
    NSObject<OS_dispatch_queue> *_removalQueue;
    FCThreadSafeMutableSet *_keysAwaitingRemoval;
}

- (unsigned long long)storeSize;
- (void)removeFileWithKey:(id)a0;
- (id)allKeys;
- (id)initWithDirectoryAtPath:(id)a0 preferredAssetPathExtension:(id)a1 knownKeys:(id)a2;
- (unsigned long long)storeSizeForKeys:(id)a0;
- (id)moveFileAtPath:(id)a0 withKey:(id)a1;
- (void)removeAllFiles;
- (void)removeAllFilesExceptKeys:(id)a0;
- (void).cxx_destruct;
- (id)moveFileAtURL:(id)a0 withKey:(id)a1;
- (id)filePathForKey:(id)a0;
- (unsigned long long)sizeOfFileForKey:(id)a0;
- (id)copyFileAtPath:(id)a0 withKey:(id)a1;
- (id)initWithDirectoryAtPath:(id)a0 preferredAssetPathExtension:(id)a1;
- (id)copyData:(id)a0 withKey:(id)a1;
- (id)fileURLForKey:(id)a0;

@end