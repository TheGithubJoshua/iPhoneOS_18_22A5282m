@class NSString;

@interface WFPBSuggestAutomationEvent : PBCodable <NSCopying> {
    struct { unsigned char completed : 1; unsigned char interacted : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (readonly, nonatomic) BOOL hasSuggestedAutomationIdentifier;
@property (retain, nonatomic) NSString *suggestedAutomationIdentifier;
@property (nonatomic) BOOL hasInteracted;
@property (nonatomic) BOOL interacted;
@property (nonatomic) BOOL hasCompleted;
@property (nonatomic) BOOL completed;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *source;

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