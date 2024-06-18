@class NSString;

@interface CTAvailablePlan : CTPlan

@property (readonly, nonatomic) NSString *iccid;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithIccid:(id)a0;

@end
