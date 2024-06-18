@class CTPlanIdentifier;

@interface CTLocalPlan : CTPlan

@property (retain, nonatomic) CTPlanIdentifier *planID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithPlanID:(id)a0;

@end
