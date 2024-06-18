@class NSNumber;

@interface AMSHTTPArchiveController : NSObject

@property (class, nonatomic, getter=isRemoveDisabled) BOOL removeDisabled;
@property (class, retain, nonatomic) NSNumber *maxBufferSizeOverride;

+ (id)harURLFilters;
+ (void)initialize;
+ (void)_updateHarFileFilters;
+ (BOOL)_disabled;
+ (id)_harURLFilters;
+ (BOOL)_shouldAddRequest:(id)a0;
+ (void)addHTTPArchive:(id)a0;

@end
