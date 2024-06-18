@class NSDate, NSObject;
@protocol OS_dispatch_queue;

@interface PXUserDefaultsStandardDataSource : NSObject <PXUserDefaultsDataSource> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly, nonatomic) PXUserDefaultsStandardDataSource *sharedInstance;

@property (readonly, nonatomic) NSDate *currentDate;

- (id)init;
- (id)_initAsSharedInstance;
- (void)setPersistedValue:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)persistedValueForKey:(id)a0;

@end
