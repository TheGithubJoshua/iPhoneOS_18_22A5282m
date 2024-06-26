@interface ATXTimelineRelevancePBTimelineRelevanceStackConfigSummary : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char nonSmartStacksWithWidget : 1; unsigned char smartStacksWithWidget : 1; unsigned char standaloneWidgets : 1; unsigned char widgetsWithUnknownStackKind : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) long long timestamp;
@property (nonatomic) BOOL hasSmartStacksWithWidget;
@property (nonatomic) int smartStacksWithWidget;
@property (nonatomic) BOOL hasNonSmartStacksWithWidget;
@property (nonatomic) int nonSmartStacksWithWidget;
@property (nonatomic) BOOL hasStandaloneWidgets;
@property (nonatomic) int standaloneWidgets;
@property (nonatomic) BOOL hasWidgetsWithUnknownStackKind;
@property (nonatomic) int widgetsWithUnknownStackKind;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
