@class NSMutableDictionary, NSString, NSMutableOrderedSet, NSObject;
@protocol OS_dispatch_queue;

@interface NTKArgonLocalKeyDatabase : NSObject <NTKArgonLocalKeyDatabaseProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly, nonatomic) NSMutableOrderedSet *persistedKeyDescriptors;
@property (readonly, nonatomic) NSMutableOrderedSet *newlyAddedKeyDescriptors;
@property (readonly, nonatomic) NSMutableDictionary *persistedKeyDescriptorsByFileName;
@property (readonly, nonatomic) NSMutableDictionary *newlyAddedKeyDescriptorsByFileName;
@property (readonly, nonatomic) NSMutableDictionary *persistedChangeTokens;
@property (readonly, nonatomic) NSMutableDictionary *newlyAddedChangeTokens;
@property (nonatomic) unsigned long long nextFlushTime;
@property (readonly, nonatomic) NSString *storagePath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_argonKeyDatabaseErrorWithCode:(unsigned long long)a0 userInfo:(id)a1;
+ (id)_jsonDataForKeyDescriptors:(id)a0 changeTokens:(id)a1 error:(id *)a2;
+ (BOOL)_decodedKeyDescriptors:(id *)a0 changeTokens:(id *)a1 fromData:(id)a2 error:(id *)a3;

- (void)recordChangeToken:(id)a0 forServerIdentifier:(id)a1;
- (void)flush;
- (void)enumerateKeyDescriptors:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_queue_requestDelayedFlushWithMaximumTimeInterval:(double)a0;
- (void)flushWithinTimeInterval:(double)a0;
- (id)latestChangeTokenForServerIdentifier:(id)a0;
- (BOOL)addKeyDescriptor:(id)a0 error:(id *)a1;
- (id)keyDescriptorForFileName:(id)a0;
- (void)_queue_flushImmediately;
- (id)initWithKeyStoragePath:(id)a0;

@end
