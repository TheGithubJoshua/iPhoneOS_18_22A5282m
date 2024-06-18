@class NSDictionary;

@interface MSVBidirectionalDictionary : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDictionary *_keyToObjectDictionary;
    NSDictionary *_objectToKeyDictionary;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)bidirectionalDictionary;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyForObject:(id)a0;

@end
