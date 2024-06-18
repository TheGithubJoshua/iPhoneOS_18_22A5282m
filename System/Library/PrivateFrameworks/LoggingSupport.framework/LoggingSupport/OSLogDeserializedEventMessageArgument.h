@class NSDictionary, _OSLogEventSerializationMetadata;

@interface OSLogDeserializedEventMessageArgument : OSLogEventMessageArgument

@property (readonly, nonatomic) NSDictionary *backingDict;
@property (readonly, nonatomic) _OSLogEventSerializationMetadata *metadata;

- (id)initWithDict:(id)a0 metadata:(id)a1;
- (const void *)rawBytes;
- (double)doubleValue;
- (unsigned long long)scalarCategory;
- (long long)int64Value;
- (void).cxx_destruct;
- (unsigned long long)privacy;
- (unsigned short)rawBytesLength;
- (unsigned long long)category;
- (id)objectRepresentation;
- (unsigned long long)unsignedInt64Value;
- (unsigned long long)scalarType;
- (unsigned long long)availability;
- (long double)longDoubleValue;
- (id)_numValue;

@end
