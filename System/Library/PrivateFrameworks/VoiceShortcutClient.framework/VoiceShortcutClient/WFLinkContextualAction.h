@class NSString, LNAction;

@interface WFLinkContextualAction : WFContextualAction

@property (readonly, nonatomic) LNAction *linkAction;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithAction:(id)a0 bundleIdentifier:(id)a1;
- (BOOL)showsUserInterfaceWhenRunning;

@end
