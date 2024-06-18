@class NSString;

@interface CTPendingPlan : CTPlan

@property (readonly, nonatomic) NSString *smdpURL;
@property (readonly, nonatomic) NSString *matchingID;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithSmdpURL:(id)a0 matchingID:(id)a1;

@end
