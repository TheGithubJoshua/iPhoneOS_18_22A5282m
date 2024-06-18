@class NSString;

@interface MBAccountChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSString *personaIdentifier;
@property (readonly, nonatomic) BOOL isPrimaryAccount;
@property (readonly, nonatomic) long long changeType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccountIdentifier:(id)a0 personaIdentifier:(id)a1 isPrimaryAccount:(BOOL)a2 changeType:(long long)a3;

@end
