@class NSDictionary, NSSet, NSString, _PASSimpleCoalescingTimer, CHSWidgetDescriptorProvider, NSObject, NSHashTable;
@protocol OS_dispatch_queue;

@interface ATXWidgetDescriptorCache : NSObject <CHSWidgetDescriptorProviderObserver> {
    CHSWidgetDescriptorProvider *_provider;
    NSString *_descriptorMetadataPath;
    _PASSimpleCoalescingTimer *_coalescedDescriptorUpdateOperation;
    unsigned long long _coalescedDescriptorUpdateOptions;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSSet *_allDescriptors;
    NSHashTable *_observers;
    NSDictionary *_intentToHomeScreenDescriptorDictionary;
    NSDictionary *_containerBundleIdAndKindToHomeScreenDescriptorDictionary;
}

@property (readonly, copy) NSSet *homeScreenDescriptors;
@property (readonly, copy) NSSet *complicationWidgetDescriptors;
@property (readonly, copy) NSSet *modularComplicationWidgetDescriptors;
@property (readonly, copy) NSSet *inlineComplicationWidgetDescriptors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (id)_updateAllDescriptorMetadataOnInternalQueue;
- (void)unregisterObserver:(id)a0;
- (id)_queue_homeScreenWidgetDescriptors;
- (id)_fetchAccessoryWidgetDescriptorMetadataOnInternalQueueWithError:(id *)a0;
- (id)homeScreenDescriptorForContainerBundleId:(id)a0 widgetKind:(id)a1;
- (id)fetchAccessoryWidgetDescriptorMetadataWithError:(id *)a0;
- (id)initWithPath:(id)a0;
- (void)_scheduleCoalescedDescriptorUpdateOperation;
- (id)_queue_allVisibleDescriptors;
- (id)_fetchHomeScreenWidgetDescriptorMetadataOnInternalQueueWithError:(id *)a0;
- (void)registerObserver:(id)a0;
- (id)_fetchAllDescriptorMetadataOnInternalQueueWithError:(id *)a0;
- (id)_mergeNewDescriptorsWithCachedMetadataOnInternalQueue:(id)a0 descriptors:(id)a1;
- (void).cxx_destruct;
- (id)initWithProvider:(id)a0 path:(id)a1;
- (id)fetchHomeScreenWidgetDescriptorMetadataWithError:(id *)a0;
- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (void)_updateDescriptorMappings;
- (void)dealloc;
- (void)_queue_descriptorsDidChangeForDescriptorProvider:(id)a0;
- (BOOL)_writeAllDescriptorMetadataOnInternalQueue:(id)a0 withError:(id *)a1;
- (id)homeScreenDescriptorForIntent:(id)a0;

@end
