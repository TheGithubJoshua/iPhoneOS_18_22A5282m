@class NSString;

@interface NTPBViewInfo : PBCodable <NSCopying> {
    struct { unsigned char viewType : 1; } _has;
}

@property (nonatomic) BOOL hasViewType;
@property (nonatomic) int viewType;
@property (readonly, nonatomic) BOOL hasViewId;
@property (retain, nonatomic) NSString *viewId;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsViewType:(id)a0;
- (id)viewTypeAsString:(int)a0;

@end
