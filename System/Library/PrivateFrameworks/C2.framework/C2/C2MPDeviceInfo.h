@class NSString, NSMutableArray;

@interface C2MPDeviceInfo : PBCodable <NSCopying> {
    struct { unsigned char isAppleInternal : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasProductName;
@property (retain, nonatomic) NSString *productName;
@property (readonly, nonatomic) BOOL hasProductType;
@property (retain, nonatomic) NSString *productType;
@property (readonly, nonatomic) BOOL hasProductVersion;
@property (retain, nonatomic) NSString *productVersion;
@property (readonly, nonatomic) BOOL hasProductBuild;
@property (retain, nonatomic) NSString *productBuild;
@property (nonatomic) BOOL hasIsAppleInternal;
@property (nonatomic) BOOL isAppleInternal;
@property (readonly, nonatomic) BOOL hasProcessName;
@property (retain, nonatomic) NSString *processName;
@property (readonly, nonatomic) BOOL hasProcessVersion;
@property (retain, nonatomic) NSString *processVersion;
@property (readonly, nonatomic) BOOL hasProcessUuid;
@property (retain, nonatomic) NSString *processUuid;
@property (readonly, nonatomic) BOOL hasUserDefaultTestName;
@property (retain, nonatomic) NSString *userDefaultTestName;
@property (retain, nonatomic) NSMutableArray *internalTestConfigs;

+ (Class)internalTestConfigType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addInternalTestConfig:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)internalTestConfigAtIndex:(unsigned long long)a0;
- (void)clearInternalTestConfigs;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)internalTestConfigsCount;

@end
