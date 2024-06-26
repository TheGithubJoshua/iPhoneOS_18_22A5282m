@class NSString;

@interface TypistKeyplane : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) BOOL isLetters;
@property (nonatomic) BOOL isAlphabeticPlane;
@property (nonatomic) BOOL isShiftKeyplane;
@property (nonatomic) BOOL usesAutoShift;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
