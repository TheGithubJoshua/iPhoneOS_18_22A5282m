@class NSString, CTUserLabel;

@interface CTCellularPlanPendingTransfer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sourceIccid;
@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) CTUserLabel *planLabel;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *countryCode;
@property (nonatomic) long long status;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
