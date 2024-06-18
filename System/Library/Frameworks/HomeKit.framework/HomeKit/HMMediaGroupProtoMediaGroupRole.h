@class HMMediaGroupProtoMediaSystemRoles;

@interface HMMediaGroupProtoMediaGroupRole : PBCodable <NSCopying> {
    struct { unsigned char role : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMediaSystem;
@property (retain, nonatomic) HMMediaGroupProtoMediaSystemRoles *mediaSystem;
@property (nonatomic) BOOL hasRole;
@property (nonatomic) int role;

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
- (int)StringAsRole:(id)a0;
- (id)roleAsString:(int)a0;
- (void)clearOneofValuesForRole;

@end
