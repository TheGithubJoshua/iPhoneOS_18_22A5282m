@class NSMutableDictionary, NSMutableSet;
@protocol _UITextAttributeDefaults;

@interface _UITextAttributeDictionaryImplI : NSMutableDictionary {
    id<_UITextAttributeDefaults> _fallback;
    NSMutableDictionary *_storage;
    NSMutableSet *_ignoring;
}

+ (Class)_storageClass;
+ (BOOL)_isMutable;
+ (Class)_ignoringClass;

- (id)fallback;
- (id)_keysIfThereIsFallback;
- (id)initWithDictionary:(id)a0 copyItems:(BOOL)a1;
- (id)init;
- (id)_initWithDictionary:(id)a0 copyItems:(BOOL)a1 fallback:(id)a2;
- (BOOL)isNSDictionary__;
- (id)initWithFallback:(id)a0;
- (id)_initWithStorage:(id)a0 fallback:(id)a1 ignoring:(id)a2;
- (void)_removeFallbackFromStorage;
- (BOOL)ignoresFallbackForKey:(id)a0;
- (BOOL)isEqualToDictionary:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0 fallback:(id)a1;
- (id)sparseDictionary;
- (id)allKeys;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)_fullDictionary;
- (id)objectForKey:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyEnumerator;
- (BOOL)usesFallbackForKey:(id)a0;
- (unsigned long long)count;

@end
