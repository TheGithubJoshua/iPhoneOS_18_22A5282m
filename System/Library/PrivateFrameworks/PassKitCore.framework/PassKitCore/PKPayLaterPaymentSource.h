@class NSString;

@interface PKPayLaterPaymentSource : NSObject <NSSecureCoding> {
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long priority;

- (id)initWithCoder:(id)a0;
- (id)init;
- (long long)compare:(id)a0;
- (id)name;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)identifier;
- (unsigned long long)type;

@end
