@class NSString;
@protocol SNMLModel;

@interface SNClassifierVariant : NSObject <NSCopying, NSSecureCoding> {
    long long _type;
    id<SNMLModel> _mlModel;
    NSString *_classifierIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
