@protocol NSObject;

@interface EFPair : NSObject <NSCopying>

@property (readonly, nonatomic) id<NSObject> first;
@property (readonly, nonatomic) id<NSObject> second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (BOOL)isEqualToPair:(id)a0;
- (id)initWithFirst:(id)a0 second:(id)a1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
