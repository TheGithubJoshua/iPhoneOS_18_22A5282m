@class STSiriMessage;

@interface STSendDraftMessageRequest : AFSiriRequest {
    STSiriMessage *_message;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)message;
- (void).cxx_destruct;
- (id)_initWithMessage:(id)a0;
- (BOOL)_makeAppFrontmost;
- (id)createResponse;

@end
