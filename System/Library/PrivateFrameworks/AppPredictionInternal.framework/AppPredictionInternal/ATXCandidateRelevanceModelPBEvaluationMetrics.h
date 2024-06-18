@interface ATXCandidateRelevanceModelPBEvaluationMetrics : PBCodable <NSCopying> {
    struct { unsigned char prodShadowEvaluationMRR : 1; unsigned char prodShadowEvaluationNumberOfDaysWithSessions : 1; unsigned char prodShadowEvaluationNumberOfSessions : 1; unsigned char prodShadowEvaluationNumberOfSessionsWithPredictions : 1; unsigned char prodShadowEvaluationSuccessAt1 : 1; unsigned char prodShadowEvaluationSuccessAt2 : 1; unsigned char prodShadowEvaluationSuccessAt4 : 1; unsigned char prodShadowEvaluationSuccessAt8 : 1; unsigned char prodUIEvaluationMRR : 1; unsigned char prodUIEvaluationNumberOfDaysWithSessions : 1; unsigned char prodUIEvaluationNumberOfSessions : 1; unsigned char prodUIEvaluationNumberOfSessionsWithPredictions : 1; unsigned char prodUIEvaluationSuccessAt1 : 1; unsigned char prodUIEvaluationSuccessAt2 : 1; unsigned char prodUIEvaluationSuccessAt4 : 1; unsigned char prodUIEvaluationSuccessAt8 : 1; unsigned char shadowEvaluationMRR : 1; unsigned char shadowEvaluationNumberOfDaysWithSessions : 1; unsigned char shadowEvaluationNumberOfSessions : 1; unsigned char shadowEvaluationNumberOfSessionsWithPredictions : 1; unsigned char shadowEvaluationSuccessAt1 : 1; unsigned char shadowEvaluationSuccessAt2 : 1; unsigned char shadowEvaluationSuccessAt4 : 1; unsigned char shadowEvaluationSuccessAt8 : 1; unsigned char uiEvaluationMRR : 1; unsigned char uiEvaluationNumberOfDaysWithSessions : 1; unsigned char uiEvaluationNumberOfSessions : 1; unsigned char uiEvaluationNumberOfSessionsWithPredictions : 1; unsigned char uiEvaluationSuccessAt1 : 1; unsigned char uiEvaluationSuccessAt2 : 1; unsigned char uiEvaluationSuccessAt4 : 1; unsigned char uiEvaluationSuccessAt8 : 1; } _has;
}

@property (nonatomic) BOOL hasUiEvaluationSuccessAt1;
@property (nonatomic) float uiEvaluationSuccessAt1;
@property (nonatomic) BOOL hasUiEvaluationSuccessAt2;
@property (nonatomic) float uiEvaluationSuccessAt2;
@property (nonatomic) BOOL hasUiEvaluationSuccessAt4;
@property (nonatomic) float uiEvaluationSuccessAt4;
@property (nonatomic) BOOL hasUiEvaluationSuccessAt8;
@property (nonatomic) float uiEvaluationSuccessAt8;
@property (nonatomic) BOOL hasUiEvaluationMRR;
@property (nonatomic) float uiEvaluationMRR;
@property (nonatomic) BOOL hasUiEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) unsigned int uiEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) BOOL hasUiEvaluationNumberOfSessions;
@property (nonatomic) unsigned int uiEvaluationNumberOfSessions;
@property (nonatomic) BOOL hasUiEvaluationNumberOfDaysWithSessions;
@property (nonatomic) unsigned int uiEvaluationNumberOfDaysWithSessions;
@property (nonatomic) BOOL hasShadowEvaluationSuccessAt1;
@property (nonatomic) float shadowEvaluationSuccessAt1;
@property (nonatomic) BOOL hasShadowEvaluationSuccessAt2;
@property (nonatomic) float shadowEvaluationSuccessAt2;
@property (nonatomic) BOOL hasShadowEvaluationSuccessAt4;
@property (nonatomic) float shadowEvaluationSuccessAt4;
@property (nonatomic) BOOL hasShadowEvaluationSuccessAt8;
@property (nonatomic) float shadowEvaluationSuccessAt8;
@property (nonatomic) BOOL hasShadowEvaluationMRR;
@property (nonatomic) float shadowEvaluationMRR;
@property (nonatomic) BOOL hasShadowEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) unsigned int shadowEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) BOOL hasShadowEvaluationNumberOfSessions;
@property (nonatomic) unsigned int shadowEvaluationNumberOfSessions;
@property (nonatomic) BOOL hasShadowEvaluationNumberOfDaysWithSessions;
@property (nonatomic) unsigned int shadowEvaluationNumberOfDaysWithSessions;
@property (nonatomic) BOOL hasProdUIEvaluationSuccessAt1;
@property (nonatomic) float prodUIEvaluationSuccessAt1;
@property (nonatomic) BOOL hasProdUIEvaluationSuccessAt2;
@property (nonatomic) float prodUIEvaluationSuccessAt2;
@property (nonatomic) BOOL hasProdUIEvaluationSuccessAt4;
@property (nonatomic) float prodUIEvaluationSuccessAt4;
@property (nonatomic) BOOL hasProdUIEvaluationSuccessAt8;
@property (nonatomic) float prodUIEvaluationSuccessAt8;
@property (nonatomic) BOOL hasProdUIEvaluationMRR;
@property (nonatomic) float prodUIEvaluationMRR;
@property (nonatomic) BOOL hasProdUIEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) unsigned int prodUIEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) BOOL hasProdUIEvaluationNumberOfSessions;
@property (nonatomic) unsigned int prodUIEvaluationNumberOfSessions;
@property (nonatomic) BOOL hasProdUIEvaluationNumberOfDaysWithSessions;
@property (nonatomic) unsigned int prodUIEvaluationNumberOfDaysWithSessions;
@property (nonatomic) BOOL hasProdShadowEvaluationSuccessAt1;
@property (nonatomic) float prodShadowEvaluationSuccessAt1;
@property (nonatomic) BOOL hasProdShadowEvaluationSuccessAt2;
@property (nonatomic) float prodShadowEvaluationSuccessAt2;
@property (nonatomic) BOOL hasProdShadowEvaluationSuccessAt4;
@property (nonatomic) float prodShadowEvaluationSuccessAt4;
@property (nonatomic) BOOL hasProdShadowEvaluationSuccessAt8;
@property (nonatomic) float prodShadowEvaluationSuccessAt8;
@property (nonatomic) BOOL hasProdShadowEvaluationMRR;
@property (nonatomic) float prodShadowEvaluationMRR;
@property (nonatomic) BOOL hasProdShadowEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) unsigned int prodShadowEvaluationNumberOfSessionsWithPredictions;
@property (nonatomic) BOOL hasProdShadowEvaluationNumberOfSessions;
@property (nonatomic) unsigned int prodShadowEvaluationNumberOfSessions;
@property (nonatomic) BOOL hasProdShadowEvaluationNumberOfDaysWithSessions;
@property (nonatomic) unsigned int prodShadowEvaluationNumberOfDaysWithSessions;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end