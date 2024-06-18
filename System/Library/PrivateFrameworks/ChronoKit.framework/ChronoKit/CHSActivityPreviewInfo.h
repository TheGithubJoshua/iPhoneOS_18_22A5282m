@class NSString;

@interface CHSActivityPreviewInfo : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ environment;
    void /* unknown type, empty encoding */ metrics;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end