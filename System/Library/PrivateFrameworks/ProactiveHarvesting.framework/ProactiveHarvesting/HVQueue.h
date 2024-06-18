@class NSString, _PASLock, NSObject;
@protocol OS_dispatch_semaphore;

@interface HVQueue : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_semaphore> *_contentConsumedSemaphore;
    BOOL _contentExpectedFromMultipleApps;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *contentProtection;

- (BOOL)enqueueContent:(id)a0 error:(id *)a1;
- (BOOL)dequeuedContentNotConsumed:(id)a0 error:(id *)a1;
- (unsigned char)waitForDequeuedContentConsumedWithTimeout:(double)a0;
- (id)uniqueIdentifiersInMemoryStorage;
- (id)diskStorageStreamCount;
- (id)statsWithError:(id *)a0;
- (id)uniqueIdentifiersInDiskStorage;
- (void).cxx_destruct;
- (BOOL)cleanupWithError:(id *)a0 shouldContinueBlock:(id /* block */)a1;
- (id)description;
- (BOOL)dequeueContent:(id *)a0 dataSourceContentState:(id)a1 minimumLevelOfService:(unsigned char)a2 inMemoryItemsOnly:(BOOL)a3 error:(id *)a4;
- (BOOL)deleteContentWithRequest:(id)a0 error:(id *)a1;
- (id)initWithIdentifier:(id)a0 biomeStream:(id)a1 memoryLimit:(short)a2 contentProtection:(id)a3 contentExpectedFromMultipleApps:(BOOL)a4;
- (BOOL)dequeuedContentConsumedWithError:(id *)a0;

@end
