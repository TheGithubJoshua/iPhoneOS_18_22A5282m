@class NSPointerArray, NSHashTable;

@interface _PXPhotosDetailsPurger : NSObject {
    NSHashTable *_allViewControllers;
    NSPointerArray *_lastUsedViewControllers;
}

+ (id)sharedPurger;

- (id)init;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning:(id)a0;
- (void)detailsViewControllerDidAppear:(id)a0;
- (void)_purgeAllViewControllers;
- (void)purgeOldViewControllers;

@end
