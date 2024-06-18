@class NSString, NSMutableArray, PPPBFeedbackMetadata;

@interface PPPBFeedbackLog : PBCodable <NSCopying> {
    struct { unsigned char predictionType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFeedbackMetadata;
@property (retain, nonatomic) PPPBFeedbackMetadata *feedbackMetadata;
@property (nonatomic) BOOL hasPredictionType;
@property (nonatomic) int predictionType;
@property (retain, nonatomic) NSMutableArray *scoredItems;
@property (retain, nonatomic) NSMutableArray *extractedDonations;
@property (retain, nonatomic) NSMutableArray *experimentalGroups;
@property (readonly, nonatomic) BOOL hasHomeLocationGeohash;
@property (retain, nonatomic) NSString *homeLocationGeohash;
@property (readonly, nonatomic) BOOL hasAssetVersion;
@property (retain, nonatomic) NSString *assetVersion;

+ (Class)scoredItemsType;
+ (Class)experimentalGroupsType;
+ (Class)extractedDonationsType;

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
- (void)addScoredItems:(id)a0;
- (void)addExperimentalGroups:(id)a0;
- (void)addExtractedDonations:(id)a0;
- (void)clearExperimentalGroups;
- (void)clearExtractedDonations;
- (void)clearScoredItems;
- (id)experimentalGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)experimentalGroupsCount;
- (id)extractedDonationsAtIndex:(unsigned long long)a0;
- (unsigned long long)extractedDonationsCount;
- (id)scoredItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)scoredItemsCount;

@end
