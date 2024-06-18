@class HKQuantity;

@interface HKVisionPrism : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) HKQuantity *amount;
@property (readonly, copy, nonatomic) HKQuantity *angle;
@property (readonly, copy, nonatomic) HKQuantity *verticalAmount;
@property (readonly, copy, nonatomic) HKQuantity *horizontalAmount;
@property (readonly, nonatomic) long long verticalBase;
@property (readonly, nonatomic) long long horizontalBase;
@property (readonly, nonatomic) long long eye;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_setPolarValues;
- (void)_setRectangularValues;
- (void)_validatePolar;
- (void)_validateRectangular;
- (id)initWithAmount:(id)a0 angle:(id)a1 eye:(long long)a2;
- (id)initWithVerticalAmount:(id)a0 verticalBase:(long long)a1 horizontalAmount:(id)a2 horizontalBase:(long long)a3 eye:(long long)a4;

@end
