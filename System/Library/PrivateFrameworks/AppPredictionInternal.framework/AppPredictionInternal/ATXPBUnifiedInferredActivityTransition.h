@class NSString;

@interface ATXPBUnifiedInferredActivityTransition : PBCodable <ATXJSONSerializableProtocol, NSCopying> {
    struct { unsigned char confidence : 1; unsigned char inferredActivity : 1; unsigned char transitionTime : 1; unsigned char isActivityStart : 1; } _has;
}

@property (nonatomic) BOOL hasTransitionTime;
@property (nonatomic) double transitionTime;
@property (nonatomic) BOOL hasIsActivityStart;
@property (nonatomic) BOOL isActivityStart;
@property (nonatomic) BOOL hasInferredActivity;
@property (nonatomic) long long inferredActivity;
@property (readonly, nonatomic) BOOL hasSource;
@property (retain, nonatomic) NSString *source;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;

- (id)initFromJSON:(id)a0;
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
- (id)jsonRepresentation;

@end
