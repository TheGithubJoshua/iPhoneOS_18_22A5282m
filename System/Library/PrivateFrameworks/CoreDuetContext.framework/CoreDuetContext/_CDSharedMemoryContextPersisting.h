@class NSCountedSet, NSString, _CDSharedMemoryKeyValueStore, NSObject;
@protocol OS_dispatch_queue;

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting>

@property (retain, nonatomic) _CDSharedMemoryKeyValueStore *store;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSCountedSet *keyPathRegistrationCount;
@property (retain, nonatomic) NSCountedSet *legacyKeyPathRegistrationCount;
@property (retain, nonatomic) NSString *localDeviceID;

+ (id)sharedMemoryKeyFromRegistration:(id)a0;
+ (id)sharedMemoryKeyFromKeyPath:(id)a0;
+ (id)persistenceWithSharedMemoryKeyValueStore:(id)a0;

- (void)deleteRegistration:(id)a0;
- (id)allKeysForContextStore;
- (id)loadRegistrations;
- (id)loadValues;
- (void)saveValue:(id)a0 forKeyPath:(id)a1;
- (void)deleteDataCreatedBefore:(id)a0;
- (void)deleteKeyPaths:(id)a0;
- (void).cxx_destruct;
- (void)saveRegistration:(id)a0;
- (void)deleteAllData;
- (id)initWithSharedMemoryKeyValueStore:(id)a0;

@end
