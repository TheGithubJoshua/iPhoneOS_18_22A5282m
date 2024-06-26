@class NSString, AVDateRangeMetadataGroupInternal, NSArray, NSDate;

@interface AVDateRangeMetadataGroup : AVMetadataGroup <NSCopying, NSMutableCopying> {
    AVDateRangeMetadataGroupInternal *_priv;
}

@property (readonly, nonatomic) NSString *cueingOptions;
@property (readonly, nonatomic) NSDate *discoveryTimestamp;
@property (readonly, nonatomic) NSDate *modificationTimestamp;
@property (readonly, nonatomic, getter=_dateRangeMetadataGroupInternal) AVDateRangeMetadataGroupInternal *dateRangeMetadataGroupInternal;
@property (readonly, copy, nonatomic) NSDate *startDate;
@property (readonly, copy, nonatomic) NSDate *endDate;
@property (readonly, copy, nonatomic) NSArray *items;

+ (id)_figMetadataArrayForMetadataItems:(id)a0;
+ (id)_metadataItemsForFigMetadataArray:(id)a0;

- (id)propertyList;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)uniqueID;
- (unsigned long long)hash;
- (id)initWithPropertyList:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_extractPropertiesFromTaggedRangeMetadataDictionary:(id)a0;
- (id)_initWithTaggedRangeMetadataDictionary:(id)a0 items:(id)a1;
- (id)_taggedRangeMetadataDictionary;
- (id)classifyingLabel;
- (id)initWithItems:(id)a0 startDate:(id)a1 endDate:(id)a2;

@end
