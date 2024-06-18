@class NSString, ContactEmbeddingAnalysisPETNeuralNetEmbedding;

@interface ContactEmbeddingAnalysisPETContactEmbeddingAnalysisEvent : PBCodable <NSCopying>

@property (retain, nonatomic) ContactEmbeddingAnalysisPETNeuralNetEmbedding *embeddingsBeforeActivation;
@property (retain, nonatomic) ContactEmbeddingAnalysisPETNeuralNetEmbedding *embeddingsAfterActivation;
@property (retain, nonatomic) NSString *contactId;

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
