@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedMessagePlaceholder : OSLogMessagePlaceholder

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (id)initWithDict:(id)a0 metadata:(id)a1;
- (id)tokens;
- (int)width;
- (id)typeNamespace;
- (id)rawString;
- (void).cxx_destruct;
- (id)type;
- (int)precision;

@end
