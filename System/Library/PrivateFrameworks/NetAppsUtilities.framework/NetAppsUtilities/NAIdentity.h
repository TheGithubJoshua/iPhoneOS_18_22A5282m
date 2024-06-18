@class NSArray;

@interface NAIdentity : NSObject <NSCopying>

@property (copy, nonatomic) NSArray *characteristics;

+ (id)na_identity;

- (BOOL)isObject:(id)a0 equalToObject:(id)a1;
- (unsigned long long)hash;
- (unsigned long long)hashOfObject:(id)a0;
- (id)initWithCharacteristics:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
