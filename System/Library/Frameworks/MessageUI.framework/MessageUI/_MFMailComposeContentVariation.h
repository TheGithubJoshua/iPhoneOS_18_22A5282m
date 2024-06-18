@class NSString, NSMutableArray;

@interface _MFMailComposeContentVariation : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *body;
@property (nonatomic) BOOL bodyIsHTML;
@property (copy, nonatomic) NSMutableArray *attachmentIdentifiers;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)a0;
- (void)addAttachmentIdentifier:(id)a0;

@end
