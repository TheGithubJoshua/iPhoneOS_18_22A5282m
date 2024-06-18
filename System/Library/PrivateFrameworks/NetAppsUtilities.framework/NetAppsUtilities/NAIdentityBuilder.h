@class NSMutableArray, NAIdentity;

@interface NAIdentityBuilder : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableArray *characteristics;
@property (retain, nonatomic) NAIdentity *builtIdentity;

+ (id)builderWithIdentity:(id)a0;
+ (id)buildPointerIdentity;
+ (id)builder;
+ (id)na_identity;

- (id)init;
- (id)initWithIdentity:(id)a0;
- (id)appendUnsignedIntegerCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (id)appendFloatCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (BOOL)isObject:(id)a0 equalToObject:(id)a1;
- (unsigned long long)hash;
- (id)build;
- (id)appendIntegerCharacteristic:(id /* block */)a0;
- (id)appendUnsignedIntegerCharacteristic:(id /* block */)a0;
- (id)appendFloatCharacteristic:(id /* block */)a0;
- (unsigned long long)hashOfObject:(id)a0;
- (id)appendCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)appendCharacteristic:(id /* block */)a0 withRole:(long long)a1 comparatorBlock:(id /* block */)a2 hashBlock:(id /* block */)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)appendDoubleCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (id)appendRangeCharacteristic:(id /* block */)a0;
- (id)appendCharacteristic:(id /* block */)a0;
- (id)appendDoubleCharacteristic:(id /* block */)a0;
- (id)appendRangeCharacteristic:(id /* block */)a0 withRole:(long long)a1;
- (id)appendIntegerCharacteristic:(id /* block */)a0 withRole:(long long)a1;

@end
