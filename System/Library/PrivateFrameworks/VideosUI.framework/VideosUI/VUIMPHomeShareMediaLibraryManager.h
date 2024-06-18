@class NSArray, NSString, VUIMediaLibraryManager, NSObject, NSMutableArray;
@protocol OS_dispatch_queue, VUIHomeShareMediaLibraryManagerDelegate;

@interface VUIMPHomeShareMediaLibraryManager : NSObject <VUIHomeShareMediaLibraryManager>

@property (weak, nonatomic) VUIMediaLibraryManager *manager;
@property (retain, nonatomic) NSMutableArray *mutableHomeShareMediaLibraries;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;
@property (weak, nonatomic) id<VUIHomeShareMediaLibraryManagerDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *homeShareMediaLibraries;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_sharedMPMediaLibraries;

- (id)initWithManager:(id)a0;
- (void)beginDiscoveringMediaLibraries;
- (void)endDiscoveringMediaLibraries;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleAvailableMediaLibrariesDidChange:(id)a0;
- (id)_homeShareMediaLibraries;
- (void)_notifyDelegateHomeShareMediaLibrariesDidUpdate:(id)a0 withChangeSet:(id)a1;
- (void)_updateMediaLibrariesWithSharedMPMediaLibraries:(id)a0;

@end
