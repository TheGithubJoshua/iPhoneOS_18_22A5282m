@class NSArray, NSString;

@interface WFSendUserInterfaceResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *recipients;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSArray *attachments;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
