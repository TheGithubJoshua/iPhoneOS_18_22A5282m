@class NSString;

@interface QLExtensionPreview : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *previewDescription;

- (id)initWithCoder:(id)a0;
- (id)initWithDescription:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
