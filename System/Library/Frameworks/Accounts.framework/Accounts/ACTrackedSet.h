@class NSMutableSet, NSMutableDictionary;

@interface ACTrackedSet : NSObject <NSCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableSet *_underlyingSet;
    NSMutableDictionary *_changesDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long count;

+ (id)set;
+ (id)setWithSet:(id)a0;
+ (id)setWithArray:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_initWithEnumerable:(id)a0 count:(unsigned long long)a1;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)enumerateObjectsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void)enumerateModificationsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithArray:(id)a0;
- (unsigned long long)hash;
- (BOOL)containsObject:(id)a0;
- (id)initWithSet:(id)a0;
- (id)objectEnumerator;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToTrackedSet:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)allModifications;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)enumerateModificationsUsingBlock:(id /* block */)a0;
- (id)_initWithUnderlyingSet:(id)a0 changesDictionary:(id)a1;
- (id)allObjects;
- (id)initWithObjects:(const id *)a0 count:(unsigned long long)a1;
- (id)anyObject;
- (id)member:(id)a0;

@end
