@class NSString;

@interface AWDAppRRCConnectionStats : PBCodable <NSCopying> {
    struct { unsigned char bundleBGDuration : 1; unsigned char bundleFGDuration : 1; unsigned char numMOConnectionTriggered : 1; unsigned char numMTConnectionTriggered : 1; unsigned char rAT : 1; unsigned char totalBytesTransferred : 1; } _has;
}

@property (nonatomic) BOOL hasRAT;
@property (nonatomic) int rAT;
@property (readonly, nonatomic) BOOL hasBundleName;
@property (retain, nonatomic) NSString *bundleName;
@property (nonatomic) BOOL hasBundleFGDuration;
@property (nonatomic) unsigned int bundleFGDuration;
@property (nonatomic) BOOL hasBundleBGDuration;
@property (nonatomic) unsigned int bundleBGDuration;
@property (nonatomic) BOOL hasNumMOConnectionTriggered;
@property (nonatomic) unsigned int numMOConnectionTriggered;
@property (nonatomic) BOOL hasNumMTConnectionTriggered;
@property (nonatomic) unsigned int numMTConnectionTriggered;
@property (nonatomic) BOOL hasTotalBytesTransferred;
@property (nonatomic) unsigned int totalBytesTransferred;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (int)StringAsRAT:(id)a0;
- (id)rATAsString:(int)a0;

@end
