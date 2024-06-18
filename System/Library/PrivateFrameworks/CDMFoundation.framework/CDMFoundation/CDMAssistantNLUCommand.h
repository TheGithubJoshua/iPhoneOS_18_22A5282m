@class NSString, SIRINLUEXTERNALCDMNluRequest, NLXSchemaNLXClientEventMetadata;

@interface CDMAssistantNLUCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) NSString *clientId;
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluRequest *siriNLUTypeObj;
@property (retain, nonatomic) NLXSchemaNLXClientEventMetadata *selfMetadata;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNLURequest:(id)a0 clientId:(id)a1;

@end
