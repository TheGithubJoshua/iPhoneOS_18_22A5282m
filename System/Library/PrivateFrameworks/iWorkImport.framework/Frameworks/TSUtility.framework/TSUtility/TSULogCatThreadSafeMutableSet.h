@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TSULogCatThreadSafeMutableSet : NSObject {
    NSMutableSet *_objects;
    NSObject<OS_dispatch_queue> *_logCatQueue;
}

- (id)init;
- (id)immutableSet;
- (id)initWithArray:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (id)allObjects;
- (unsigned long long)count;

@end
