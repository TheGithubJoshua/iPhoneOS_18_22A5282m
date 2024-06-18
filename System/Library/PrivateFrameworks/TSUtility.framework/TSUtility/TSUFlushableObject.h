@class NSString, TSUFlushingManager, NSObject;
@protocol NSLocking;

@interface TSUFlushableObject : NSObject <TSUFlushable> {
    int _retainCount;
    int _ownerCount;
    TSUFlushingManager *_flushingManager;
    NSObject<NSLocking> *_flushingManagerIvarLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)unload;
- (id)init;
- (void)flush;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (void)ownerWillAccess;
- (void)addOwner;
- (BOOL)hasFlushableContent;
- (id)ownerAutoreleasedAccess;
- (void)ownerDidAccess;
- (void)ownerRelease;
- (id)ownerRetain;

@end
