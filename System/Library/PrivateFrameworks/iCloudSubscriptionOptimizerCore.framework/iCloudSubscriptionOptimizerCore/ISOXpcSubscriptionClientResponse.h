@interface ISOXpcSubscriptionClientResponse : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ proto;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
