@class SIRINLUINTERNALSiriVocabularySpanData, SIRINLUINTERNALOvertonKGSpanData, SIRINLUINTERNALMentionResolverSpanData, SIRINLUINTERNALPLUMSpanData, SIRINLUINTERNALMentionDetectorSpanData;

@interface SIRINLUINTERNALInternalSpanData : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSiriVocabularySpanData;
@property (retain, nonatomic) SIRINLUINTERNALSiriVocabularySpanData *siriVocabularySpanData;
@property (readonly, nonatomic) BOOL hasPlumSpanData;
@property (retain, nonatomic) SIRINLUINTERNALPLUMSpanData *plumSpanData;
@property (readonly, nonatomic) BOOL hasOvertonKgSpanData;
@property (retain, nonatomic) SIRINLUINTERNALOvertonKGSpanData *overtonKgSpanData;
@property (readonly, nonatomic) BOOL hasMentionDetectorSpanData;
@property (retain, nonatomic) SIRINLUINTERNALMentionDetectorSpanData *mentionDetectorSpanData;
@property (readonly, nonatomic) BOOL hasMentionResolverSpanData;
@property (retain, nonatomic) SIRINLUINTERNALMentionResolverSpanData *mentionResolverSpanData;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end