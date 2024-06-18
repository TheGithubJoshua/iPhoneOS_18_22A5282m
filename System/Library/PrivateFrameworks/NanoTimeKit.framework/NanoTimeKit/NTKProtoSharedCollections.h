@class NSMutableArray;

@interface NTKProtoSharedCollections : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *collections;

+ (Class)collectionsType;
+ (id)protoBufferFromSharedCollections:(id)a0;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)collectionsCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearCollections;
- (void)addCollections:(id)a0;
- (id)collectionsAtIndex:(unsigned long long)a0;
- (id)sharedCollectionsDictionary;

@end
