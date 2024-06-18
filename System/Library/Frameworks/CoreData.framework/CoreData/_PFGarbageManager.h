@class NSMutableDictionary, NSMutableSet;

@interface _PFGarbageManager : NSObject {
    NSMutableDictionary *_storeLinksDirs;
    NSMutableSet *_filesToCleanUp;
}

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)defaultInstance;

- (BOOL)_tryRetain;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)retain;
- (BOOL)_isDeallocating;

@end
