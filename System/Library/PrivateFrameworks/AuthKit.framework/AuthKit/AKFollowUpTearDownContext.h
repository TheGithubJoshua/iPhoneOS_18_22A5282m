@class NSString;

@interface AKFollowUpTearDownContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *itemIdentifier;
@property (copy, nonatomic) NSString *akAction;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *txnid;
@property (copy, nonatomic) NSString *idmsData;
@property (nonatomic) BOOL isContinuityPush;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
