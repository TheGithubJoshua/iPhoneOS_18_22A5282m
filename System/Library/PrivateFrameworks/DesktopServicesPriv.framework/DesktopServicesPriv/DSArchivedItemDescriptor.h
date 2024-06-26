@class NSString, NSNumber;

@interface DSArchivedItemDescriptor : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSNumber *fileSize;
@property (copy, nonatomic) NSString *typeIdentifier;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
