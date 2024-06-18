@class NSString;

@interface BMPBUserProofingEvent : PBCodable <NSCopying> {
    struct { unsigned char absoluteTimestamp : 1; } _has;
}

@property (nonatomic) BOOL hasAbsoluteTimestamp;
@property (nonatomic) double absoluteTimestamp;
@property (readonly, nonatomic) BOOL hasAge;
@property (retain, nonatomic) NSString *age;
@property (readonly, nonatomic) BOOL hasGender;
@property (retain, nonatomic) NSString *gender;
@property (readonly, nonatomic) BOOL hasSkinTone;
@property (retain, nonatomic) NSString *skinTone;
@property (readonly, nonatomic) BOOL hasEthnicity;
@property (retain, nonatomic) NSString *ethnicity;
@property (readonly, nonatomic) BOOL hasDeviceLanguage;
@property (retain, nonatomic) NSString *deviceLanguage;
@property (readonly, nonatomic) BOOL hasProofingDecision;
@property (retain, nonatomic) NSString *proofingDecision;
@property (readonly, nonatomic) BOOL hasIssuer;
@property (retain, nonatomic) NSString *issuer;
@property (readonly, nonatomic) BOOL hasLivenessAssessment;
@property (retain, nonatomic) NSString *livenessAssessment;
@property (readonly, nonatomic) BOOL hasGestureAssessment;
@property (retain, nonatomic) NSString *gestureAssessment;

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