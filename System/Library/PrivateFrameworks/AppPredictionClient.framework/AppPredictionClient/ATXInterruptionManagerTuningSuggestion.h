@interface ATXInterruptionManagerTuningSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long tuningSuggestionType;
@property (readonly, nonatomic) int suggestionType;

- (id)initWithCoder:(id)a0;
- (id)jsonRawData;
- (id)init;
- (id)initWithProto:(id)a0;
- (id)initWithProtoData:(id)a0;
- (id)proto;
- (id)initWithSuggestionType:(long long)a0;
- (unsigned long long)hash;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)feedbackKeyComponent;
- (BOOL)isEqualToATXInterruptionManagerTuningSuggestion:(id)a0;

@end
