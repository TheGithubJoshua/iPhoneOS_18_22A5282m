@class NSString;

@interface BLTPBWillSendLightsAndSirensRequest : PBRequest <NSCopying> {
    struct { unsigned char systemApp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (retain, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic) BOOL hasSystemApp;
@property (nonatomic) BOOL systemApp;

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
