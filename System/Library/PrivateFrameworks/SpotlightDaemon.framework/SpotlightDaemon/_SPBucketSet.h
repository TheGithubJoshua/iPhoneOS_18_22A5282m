@class NSObject;
@protocol OS_dispatch_queue;

@interface _SPBucketSet : NSObject {
    struct __CFDictionary { } *_members;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property long long count;

- (id)init;
- (void)decay:(long long)a0;
- (void)removeValueForKey:(id)a0;
- (long long)valueForKey:(id)a0;
- (void).cxx_destruct;
- (void)addValue:(long long)a0 forKey:(id)a1;
- (void)dealloc;

@end
