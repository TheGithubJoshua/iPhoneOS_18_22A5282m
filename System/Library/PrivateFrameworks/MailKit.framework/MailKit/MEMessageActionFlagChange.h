@interface MEMessageActionFlagChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long flag;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFlag:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end