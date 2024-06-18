@class CDMEmbeddingProtoResponseCommand;

@interface CDMEmbeddingGraphResponseCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) CDMEmbeddingProtoResponseCommand *embeddingProtoResponseCommand;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmbeddingProtoResponseCommand:(id)a0;

@end
