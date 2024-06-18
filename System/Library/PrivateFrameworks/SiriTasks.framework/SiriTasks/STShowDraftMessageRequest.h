@class NSURL;

@interface STShowDraftMessageRequest : AFSiriRequest {
    NSURL *_draftMessageIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)message;
- (void).cxx_destruct;
- (id)description;
- (id)createResponse;
- (id)_initWithDraftMessageIdentifier:(id)a0;
- (id)createUsageResult;
- (id)draftMessageIdentifier;

@end
