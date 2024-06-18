@class NSMutableDictionary;

@interface PKFeatureFailureCollection : NSObject <NSSecureCoding> {
    NSMutableDictionary *_failuresByFeature;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithArray:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)errorForFeature:(unsigned long long)a0;

@end
