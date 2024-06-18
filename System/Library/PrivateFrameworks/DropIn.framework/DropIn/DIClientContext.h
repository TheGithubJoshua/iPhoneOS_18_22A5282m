@class NSString;

@interface DIClientContext : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ homeIdentifier;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithHomeIdentifier:(id)a0;

@end
