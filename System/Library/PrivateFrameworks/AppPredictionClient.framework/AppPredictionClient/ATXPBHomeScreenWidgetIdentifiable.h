@class NSString, NSData;

@interface ATXPBHomeScreenWidgetIdentifiable : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char size : 1; unsigned char onboardingWidget : 1; unsigned char suggestedWidget : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExtensionBundleId;
@property (retain, nonatomic) NSString *extensionBundleId;
@property (readonly, nonatomic) BOOL hasWidgetKind;
@property (retain, nonatomic) NSString *widgetKind;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) BOOL hasIntent;
@property (retain, nonatomic) NSData *intent;
@property (readonly, nonatomic) BOOL hasWidgetUniqueId;
@property (retain, nonatomic) NSString *widgetUniqueId;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) int size;
@property (nonatomic) BOOL hasSuggestedWidget;
@property (nonatomic) BOOL suggestedWidget;
@property (nonatomic) BOOL hasOnboardingWidget;
@property (nonatomic) BOOL onboardingWidget;
@property (nonatomic) BOOL hasScore;
@property (nonatomic) double score;
@property (readonly, nonatomic) BOOL hasPredictionSource;
@property (retain, nonatomic) NSString *predictionSource;

- (id)sizeAsString:(int)a0;
- (int)StringAsSize:(id)a0;
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

@end
