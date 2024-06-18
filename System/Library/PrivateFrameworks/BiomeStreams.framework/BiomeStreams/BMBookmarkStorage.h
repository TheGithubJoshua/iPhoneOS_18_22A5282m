@class BMFileManager;

@interface BMBookmarkStorage : NSObject {
    BMFileManager *_fileManager;
}

+ (id)currentSession;
+ (id)persistentPath;
+ (id)sessionsPath;
+ (id)newFileManager;
+ (id)currentSessionPath;
+ (void)initializeBiomeDSLDirectoryForBootSession;
+ (id)basePath;

- (id)init;
- (id)readBookmarkForSubscriptionWithIdentifier:(id)a0 client:(id)a1 error:(id *)a2;
- (BOOL)checkExistenceOfBookmarkForSubscriptionWithIdentifier:(id)a0 client:(id)a1;
- (void).cxx_destruct;
- (id)pathForSessionStorageWithIdentifier:(id)a0 client:(id)a1;
- (void)writeBookmark:(id)a0 forSubscriptionWithIdentifier:(id)a1 client:(id)a2;
- (void)removeBookmarkFileForSubscriptionWithIdentifier:(id)a0 client:(id)a1;

@end
