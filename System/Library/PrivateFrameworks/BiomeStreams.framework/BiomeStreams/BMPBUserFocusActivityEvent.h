@class NSString;

@interface BMPBUserFocusActivityEvent : PBCodable <NSCopying> {
    struct { unsigned char isStart : 1; } _has;
}

@property (nonatomic) BOOL hasIsStart;
@property (nonatomic) BOOL isStart;
@property (readonly, nonatomic) BOOL hasMode;
@property (retain, nonatomic) NSString *mode;
@property (readonly, nonatomic) BOOL hasClientID;
@property (retain, nonatomic) NSString *clientID;

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
