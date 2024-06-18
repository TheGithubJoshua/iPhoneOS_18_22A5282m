@class NSArray, NSMutableDictionary, NSData;

@interface FTRecognitionPhraseTokensAlternatives : NSObject <FLTBFBufferAccessor, NSCopying> {
    NSMutableDictionary *_storage;
    NSData *_data;
    const struct RecognitionPhraseTokensAlternatives { unsigned char x0[1]; } *_root;
}

@property (readonly, nonatomic) NSArray *tok_phrases;
@property (readonly, nonatomic) BOOL has_unsuggested_alternatives;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct Offset<siri::speech::schema_fb::RecognitionPhraseTokensAlternatives> { unsigned int x0; })addObjectToBuffer:(void *)a0;
- (id)flatbuffData;
- (id)initAndVerifyWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionPhraseTokensAlternatives { unsigned char x0[1]; } *)a1;
- (id)initWithFlatbuffData:(id)a0 root:(const struct RecognitionPhraseTokensAlternatives { unsigned char x0[1]; } *)a1 verify:(BOOL)a2;
- (unsigned long long)tok_phrases_count;
- (void)tok_phrases_enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)tok_phrases_objectAtIndex:(unsigned long long)a0;

@end