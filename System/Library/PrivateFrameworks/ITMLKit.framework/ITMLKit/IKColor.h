@class NSString, UIColor, NSArray;

@interface IKColor : NSObject <NSCopying>

@property (copy, nonatomic) NSString *colorMapKey;
@property (retain, nonatomic) UIColor *color;
@property (nonatomic) long long colorType;
@property (readonly, copy, nonatomic) NSArray *gradientPoints;
@property (copy, nonatomic) NSArray *gradientColors;
@property (nonatomic) long long gradientDirectionType;
@property (nonatomic) long long gradientType;

+ (id)colorMap;
+ (void)registerColorNameMap:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithColor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithColorMapKey:(id)a0;
- (void)setGradientColors:(id)a0 andPoints:(id)a1;

@end
