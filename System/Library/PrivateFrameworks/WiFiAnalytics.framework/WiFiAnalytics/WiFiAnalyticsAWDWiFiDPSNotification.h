@interface WiFiAnalyticsAWDWiFiDPSNotification : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cca : 1; unsigned char problemAC : 1; unsigned char symptom : 1; unsigned char facetimeCallInProgress : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSymptom;
@property (nonatomic) int symptom;
@property (nonatomic) BOOL hasProblemAC;
@property (nonatomic) unsigned int problemAC;
@property (nonatomic) BOOL hasFacetimeCallInProgress;
@property (nonatomic) BOOL facetimeCallInProgress;
@property (nonatomic) BOOL hasCca;
@property (nonatomic) unsigned int cca;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsSymptom:(id)a0;
- (id)symptomAsString:(int)a0;

@end
