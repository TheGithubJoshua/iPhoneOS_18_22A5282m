@class LSBundleRecord, PRComplicationGalleryWidgetItem;

@interface PRComplicationGalleryItem : NSObject

@property (readonly, nonatomic) PRComplicationGalleryWidgetItem *widgetItem;
@property (readonly, nonatomic) LSBundleRecord *bundleRecord;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithBundleRecord:(id)a0;
- (id)initWithWidgetItem:(id)a0;

@end
