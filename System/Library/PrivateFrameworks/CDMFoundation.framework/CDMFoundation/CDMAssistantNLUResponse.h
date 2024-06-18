@class NSString, SIRINLUEXTERNALCDMNluResponse, SIRINLUINTERNALPreprocessingWrapper;

@interface CDMAssistantNLUResponse : CDMServiceGraphCommand

@property (readonly, nonatomic) NSString *requestId;
@property (readonly, nonatomic) SIRINLUEXTERNALCDMNluResponse *siriNLUTypeObj;
@property (readonly, nonatomic) SIRINLUINTERNALPreprocessingWrapper *preprocessingWrapper;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNLUResponse:(id)a0 preprocessingWrapper:(id)a1 requestId:(id)a2;
- (id)initWithNLUResponse:(id)a0 requestId:(id)a1;

@end
