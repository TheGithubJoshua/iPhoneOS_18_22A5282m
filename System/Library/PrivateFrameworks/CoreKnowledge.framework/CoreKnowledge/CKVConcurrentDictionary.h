@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface CKVConcurrentDictionary : NSMutableDictionary {
    NSMutableDictionary *_dictionary;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (id)initWithDictionary:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)allValues;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)setDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyEnumerator;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;

@end
