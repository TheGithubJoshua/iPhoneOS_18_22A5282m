@class NSUUID;

@interface LNContinueInAppResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *identifier;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
