@class NSString;

@interface BRFieldStructureSignature : PBCodable <BRFieldVersionSignature, NSCopying>

@property (readonly, nonatomic) NSString *versionIdentifier;
@property (readonly, nonatomic) BOOL hasOldVersionIdentifier;
@property (readonly, nonatomic) NSString *oldVersionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *versionIdentifier;
@property (readonly, nonatomic) BOOL hasOldVersionIdentifier;
@property (retain, nonatomic) NSString *oldVersionIdentifier;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)etag;
- (id)initWithLocalStatInfo:(id)a0;
- (BOOL)isEquivalentToSignature:(id)a0;

@end
