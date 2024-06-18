@class NSString, NSNumber, INCurrencyAmount;

@interface INSendRideFeedbackIntent : INIntent

@property (readonly, copy, nonatomic) NSString *rideIdentifier;
@property (copy, nonatomic) NSNumber *rating;
@property (copy, nonatomic) INCurrencyAmount *tip;

+ (BOOL)supportsSecureCoding;
+ (id)intentDescription;

- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRideIdentifier:(id)a0;

@end
