@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *xattrs;

+ (BOOL)loadXattrsFromFD:(int)a0 structuralBlob:(id *)a1 contentBlob:(id *)a2 localBlob:(id *)a3 withMaximumSize:(unsigned long long)a4 error:(id *)a5;
+ (id)loadXattrsFromFD:(int)a0 withMaximumSize:(unsigned long long)a1 error:(id *)a2;
+ (BOOL)removeXattrsOnFD:(int)a0 includingContentRelated:(BOOL)a1 error:(id *)a2;
+ (Class)xattrsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addXattrs:(id)a0;
- (BOOL)applyToFileDescriptor:(int)a0 error:(id *)a1;
- (void)clearXattrs;
- (id)xattrsAtIndex:(unsigned long long)a0;
- (unsigned long long)xattrsCount;

@end
