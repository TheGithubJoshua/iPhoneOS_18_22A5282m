@class SLShareableContentMetadata, SLShareableContentInitiatorRequest;

@interface SLFetchShareableContentMetadataActionResponse : SLShareableContentActionResponse

@property (retain, nonatomic) SLShareableContentMetadata *metadata;
@property (retain, nonatomic) SLShareableContentInitiatorRequest *initiatorRequest;

+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)responseWithMetadata:(id)a0 initiatorRequest:(id)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
