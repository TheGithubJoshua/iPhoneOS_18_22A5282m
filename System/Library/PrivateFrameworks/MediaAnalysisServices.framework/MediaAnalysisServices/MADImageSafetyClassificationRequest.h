@class NSString;

@interface MADImageSafetyClassificationRequest : MADRequest

@property (copy, nonatomic) NSString *stagedText;
@property (copy, nonatomic) NSString *conversationIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
