@class NSString, NSDictionary, UIViewController;

@interface AKExtensionlessFollowUpHelperContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *uniqueItemIdentifier;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSString *urlKey;
@property (copy, nonatomic) NSString *akAction;
@property (copy, nonatomic) NSDictionary *additionalInfo;
@property (weak, nonatomic) UIViewController *presentingViewController;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
