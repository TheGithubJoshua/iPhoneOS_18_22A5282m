@class NSString, CESRCorrectionPronunciation;

@interface CESRUserCorrectionsProfileEntry : PBCodable <NSCopying> {
    struct { unsigned char alternativesCorrectionsCount : 1; unsigned char spellingCorrectionsCount : 1; unsigned char tap2editCorrectionsCount : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCorrectedText;
@property (retain, nonatomic) NSString *correctedText;
@property (readonly, nonatomic) BOOL hasPronunciationData;
@property (retain, nonatomic) CESRCorrectionPronunciation *pronunciationData;
@property (nonatomic) BOOL hasSpellingCorrectionsCount;
@property (nonatomic) unsigned int spellingCorrectionsCount;
@property (nonatomic) BOOL hasTap2editCorrectionsCount;
@property (nonatomic) unsigned int tap2editCorrectionsCount;
@property (nonatomic) BOOL hasAlternativesCorrectionsCount;
@property (nonatomic) unsigned int alternativesCorrectionsCount;

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