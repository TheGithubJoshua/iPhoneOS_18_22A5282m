@class NSObject, SBHSelectedApplicationDataSource, SBHIconModel;
@protocol OS_dispatch_queue;

@interface SearchUIHomeScreenModel : NSObject

@property (retain, nonatomic) SBHIconModel *iconModel;
@property (retain, nonatomic) SBHSelectedApplicationDataSource *dataSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (id)sharedInstance;

- (id)init;
- (void)resetIconModel;
- (id)clipIconForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)appIconForApplicationBundleIdentifier:(id)a0;

@end
