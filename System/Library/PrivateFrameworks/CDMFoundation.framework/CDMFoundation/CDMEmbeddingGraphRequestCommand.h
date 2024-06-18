@class NSString;

@interface CDMEmbeddingGraphRequestCommand : CDMServiceGraphCommand

@property (readonly, nonatomic) NSString *text;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;

@end
