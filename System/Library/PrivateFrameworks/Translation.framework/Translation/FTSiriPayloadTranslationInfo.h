@class NSString, NSMutableDictionary, NSData, FTRecognitionSausage;

@interface FTSiriPayloadTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct SiriPayloadTranslationInfo { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSString *pre_itn_payload;
@property (readonly, nonatomic) NSString *post_itn_payload;
@property (readonly, nonatomic) FTRecognitionSausage *pre_sausage_payload;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::SiriPayloadTranslationInfo> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SiriPayloadTranslationInfo { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct SiriPayloadTranslationInfo { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;

@end