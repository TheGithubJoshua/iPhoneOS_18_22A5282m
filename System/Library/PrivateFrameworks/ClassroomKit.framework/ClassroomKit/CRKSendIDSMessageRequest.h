@class NSString, NSDictionary, CRKIDSMessageOptions;

@interface CRKSendIDSMessageRequest : CATTaskRequest

@property (copy, nonatomic) NSString *sourceAppleID;
@property (copy, nonatomic) NSString *destinationAddress;
@property (copy, nonatomic) NSDictionary *message;
@property (copy, nonatomic) CRKIDSMessageOptions *options;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
