@class CAXPBContextualAction, NSString, CAXPBPredictionContext, CAXPBSuggestion;

@interface CAXPBContextualActionsFeedbackEvent : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSelectedAction;
@property (retain, nonatomic) CAXPBContextualAction *selectedAction;
@property (readonly, nonatomic) BOOL hasSuggestion;
@property (retain, nonatomic) CAXPBSuggestion *suggestion;
@property (readonly, nonatomic) BOOL hasDeviceContext;
@property (retain, nonatomic) CAXPBPredictionContext *deviceContext;
@property (readonly, nonatomic) BOOL hasSessionIdentifier;
@property (retain, nonatomic) NSString *sessionIdentifier;

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