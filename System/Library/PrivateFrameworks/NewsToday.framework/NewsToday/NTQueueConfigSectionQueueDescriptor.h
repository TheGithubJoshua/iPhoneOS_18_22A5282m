@class NSArray;

@interface NTQueueConfigSectionQueueDescriptor : NSObject <NTSectionQueueDescriptor>

@property (readonly, copy, nonatomic) NSArray *sectionDescriptors;
@property (readonly, nonatomic) unsigned long long visibleSectionConfigsLimit;

- (id)init;
- (id)initWithQueueConfig:(id)a0 appConfiguration:(id)a1 todayData:(id)a2 inFavoritesOnlyMode:(BOOL)a3 respectsWidgetVisibleSectionsLimit:(BOOL)a4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
