@class NSString, NSNumber, NSArray;

@interface SGMailIntelligenceAttachmentProperties : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *fileName;
@property (readonly, nonatomic) NSNumber *fileSizeInBytes;
@property (readonly, nonatomic) NSString *fileDescription;
@property (readonly, nonatomic) NSArray *keywords;
@property (readonly, nonatomic) NSArray *authors;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFileName:(id)a0 fileSizeInBytes:(id)a1 fileDescription:(id)a2 keywords:(id)a3 authors:(id)a4;

@end
