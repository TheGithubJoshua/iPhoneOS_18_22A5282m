@class NSString;

@interface CNContactKeyVector : NSObject <NSMutableCopying, CNKeyDescriptor_Private> {
    long long _bitBuckets[1];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)keyVectorWithKey:(id)a0;
+ (id)freezeIfClassIsImmutable:(id)a0;
+ (id)keyVectorWithAllKeys;
+ (id)keyVectorWithKeys:(id)a0;
+ (id)keyVector;

- (id)keyVectorByRemovingKeysFromKeyVector:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_cn_executeGetterForRepresentedKeys:(id /* block */)a0;
- (void)_checkStorageSize;
- (BOOL)containsKey:(id)a0;
- (id)_cn_optionalKeys;
- (id)keyVectorByAddingKeys:(id)a0;
- (id)_cn_ignorableKeys;
- (long long *)_bitBuckets;
- (id)init;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)initWithAllKeys;
- (BOOL)isEqualToKeyVector:(id)a0;
- (id)_cn_requiredKeys;
- (id)initWithKeys:(id)a0;
- (id)keyVectorByRemovingKeys:(id)a0;
- (id)keyVectorByAddingKeysFromKeyVector:(id)a0;
- (BOOL)isSubsetOfKeyVector:(id)a0;
- (BOOL)intersectsKeyVector:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)containsAllKeys;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyVectorByAddingKey:(id)a0;

@end
