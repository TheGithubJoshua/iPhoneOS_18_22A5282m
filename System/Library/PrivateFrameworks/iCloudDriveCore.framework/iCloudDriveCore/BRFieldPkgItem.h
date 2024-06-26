@class NSString, NSData;

@interface BRFieldPkgItem : PBCodable <NSCopying> {
    struct { unsigned char mtime : 1; unsigned char xattrIndex : 1; unsigned char isExecutable : 1; unsigned char isWritable : 1; } _has;
}

@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasPath;
@property (retain, nonatomic) NSString *path;
@property (nonatomic) BOOL hasMtime;
@property (nonatomic) long long mtime;
@property (nonatomic) BOOL hasIsWritable;
@property (nonatomic) BOOL isWritable;
@property (nonatomic) BOOL hasIsExecutable;
@property (nonatomic) BOOL isExecutable;
@property (readonly, nonatomic) BOOL hasSymlinkContent;
@property (retain, nonatomic) NSString *symlinkContent;
@property (readonly, nonatomic) BOOL hasQuarantineInfo;
@property (retain, nonatomic) NSData *quarantineInfo;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;
@property (nonatomic) BOOL hasXattrIndex;
@property (nonatomic) long long xattrIndex;

- (int)StringAsType:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)clear;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)typeAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPkgItem:(id)a0;
- (void)updateWithPkgItem:(id)a0;

@end
