@class NSNumber;

@interface SLDImageSymbolConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long size;
@property (nonatomic) long long weight;
@property (nonatomic) double pointSize;
@property (retain, nonatomic) NSNumber *pointSizeNumber;

+ (id)configurationWithSize:(long long)a0 weight:(long long)a1 pointSize:(double)a2;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSize:(long long)a0 weight:(long long)a1 pointSize:(double)a2;

@end
