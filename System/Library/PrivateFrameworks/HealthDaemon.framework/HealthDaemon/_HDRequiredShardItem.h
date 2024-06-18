@class NSString;

@interface _HDRequiredShardItem : NSObject <NSSecureCoding> {
    NSString *_identifier;
    unsigned long long _options;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
