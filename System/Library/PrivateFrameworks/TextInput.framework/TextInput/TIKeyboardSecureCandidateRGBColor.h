@interface TIKeyboardSecureCandidateRGBColor : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double colorR;
@property (nonatomic) double colorG;
@property (nonatomic) double colorB;
@property (nonatomic) double colorA;

+ (id)blackColor;
+ (id)whiteColor;
+ (id)lightGrayColor;

- (id)initWithCoder:(id)a0;
- (id)initWithR:(double)a0 G:(double)a1 B:(double)a2 A:(double)a3;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end