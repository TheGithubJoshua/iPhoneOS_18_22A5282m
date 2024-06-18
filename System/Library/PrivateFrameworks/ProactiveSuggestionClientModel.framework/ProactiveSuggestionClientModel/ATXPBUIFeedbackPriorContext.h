@class NSData, NSMutableArray, NSString;

@interface ATXPBUIFeedbackPriorContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *cacheUpdateOrderings;
@property (retain, nonatomic) NSMutableArray *blendingModelCacheUpdates;
@property (retain, nonatomic) NSMutableArray *clientModelCacheUpdates;
@property (readonly, nonatomic) BOOL hasContext;
@property (retain, nonatomic) NSData *context;
@property (readonly, nonatomic) BOOL hasContextClassString;
@property (retain, nonatomic) NSString *contextClassString;
@property (readonly, nonatomic) BOOL hasPinnedBlendingModelUICacheUpdateUUID;
@property (retain, nonatomic) NSString *pinnedBlendingModelUICacheUpdateUUID;

+ (Class)blendingModelCacheUpdatesType;
+ (Class)cacheUpdateOrderingType;
+ (Class)clientModelCacheUpdatesType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)clearClientModelCacheUpdates;
- (id)cacheUpdateOrderingAtIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (void)clearBlendingModelCacheUpdates;
- (void)clearCacheUpdateOrderings;
- (void)writeTo:(id)a0;
- (id)clientModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (unsigned long long)cacheUpdateOrderingsCount;
- (void)addClientModelCacheUpdates:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)clientModelCacheUpdatesCount;
- (unsigned long long)blendingModelCacheUpdatesCount;
- (void)addBlendingModelCacheUpdates:(id)a0;
- (id)blendingModelCacheUpdatesAtIndex:(unsigned long long)a0;
- (void)addCacheUpdateOrdering:(id)a0;

@end
