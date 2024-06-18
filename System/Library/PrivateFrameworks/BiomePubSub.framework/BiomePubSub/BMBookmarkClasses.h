@class NSMutableSet;

@interface BMBookmarkClasses : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_allowed;
    BOOL _addedBMStoreBookmark;
}

+ (id)sharedInstance;

- (id)init;
- (void)allowClassesForSecureCodingBMBookmark:(id)a0;
- (void).cxx_destruct;
- (id)allowedClassesForSecureCodingBMBookmark;

@end
