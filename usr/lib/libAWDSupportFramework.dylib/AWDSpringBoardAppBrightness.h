@class NSString;

@interface AWDSpringBoardAppBrightness : PBCodable <NSCopying> {
    struct { unsigned char brightness : 1; unsigned char duration : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasAppBundleID;
@property (retain, nonatomic) NSString *appBundleID;
@property (nonatomic) BOOL hasBrightness;
@property (nonatomic) unsigned long long brightness;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;

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

@end
