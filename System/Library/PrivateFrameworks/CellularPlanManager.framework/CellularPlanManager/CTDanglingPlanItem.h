@class NSString, CTUserLabel;

@interface CTDanglingPlanItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *iccid;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *simLabelID;
@property (retain, nonatomic) CTUserLabel *userLabel;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIccid:(id)a0 phoneNumber:(id)a1 label:(id)a2 labelID:(id)a3;

@end
