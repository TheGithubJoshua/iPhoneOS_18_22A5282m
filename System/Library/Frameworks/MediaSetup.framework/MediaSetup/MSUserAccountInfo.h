@class NSString;

@interface MSUserAccountInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *homeUserID;
@property (readonly, copy, nonatomic) NSString *sharedUserID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithHomeUserID:(id)a0 sharedUserID:(id)a1;

@end
