@class NSArray, NSBundle;

@interface HMLocalization : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSBundle *_bundle;
}

@property (readonly, copy) NSArray *stringTable;

+ (id)sharedManager;

- (id)init;
- (id)getLocalizedString:(id)a0;
- (void)handleLocaleDidChange:(id)a0;
- (id)getLocalizedOrCustomString:(id)a0;
- (void).cxx_destruct;
- (void)_updateLocalizedStrings;

@end
