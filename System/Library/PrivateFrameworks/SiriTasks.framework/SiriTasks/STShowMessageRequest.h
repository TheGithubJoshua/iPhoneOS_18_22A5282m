@class STSiriMessage;

@interface STShowMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
    BOOL _showAsDraft;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)message;
- (void).cxx_destruct;
- (BOOL)_makeAppFrontmost;
- (id)createResponse;
- (BOOL)showAsDraft;
- (id)_initWithMessage:(id)a0 showAsDraft:(BOOL)a1;

@end
