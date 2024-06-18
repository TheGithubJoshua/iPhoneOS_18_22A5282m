@class NSDictionary;

@interface _PSConfidenceModelArchive : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *confidenceModelDictionary;

- (id)initWithCoder:(id)a0;
- (id)initWithConfidenceModelDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
