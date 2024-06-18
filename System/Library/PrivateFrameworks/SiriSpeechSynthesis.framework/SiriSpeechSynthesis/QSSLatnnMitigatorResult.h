@class NSString, NSMutableDictionary, NSData;

@interface QSSLatnnMitigatorResult : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct LatnnMitigatorResult { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) BOOL processed;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) double threshold;
@property (readonly, nonatomic) double score;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::LatnnMitigatorResult> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LatnnMitigatorResult { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct LatnnMitigatorResult { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end