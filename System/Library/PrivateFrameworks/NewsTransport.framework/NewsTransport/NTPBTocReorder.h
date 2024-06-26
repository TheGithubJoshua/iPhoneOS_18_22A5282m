@class NSData, NSString;

@interface NTPBTocReorder : PBCodable <NSCopying> {
    struct { unsigned char feedType : 1; unsigned char tocNewIndex : 1; unsigned char tocOldIndex : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTocExposureId;
@property (retain, nonatomic) NSData *tocExposureId;
@property (nonatomic) BOOL hasTocOldIndex;
@property (nonatomic) int tocOldIndex;
@property (nonatomic) BOOL hasTocNewIndex;
@property (nonatomic) int tocNewIndex;
@property (readonly, nonatomic) BOOL hasFeedId;
@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsFeedType:(id)a0;
- (id)feedTypeAsString:(int)a0;

@end
