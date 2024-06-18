@class SBIconModel, NSLock, NSSet;

@interface SBIconVisibilityService : NSObject {
    SBIconModel *_iconModel;
    NSLock *_iconStateDisplayIdentifiersLock;
    NSSet *_iconStateDisplayIdentifiers;
}

- (id)initWithIconModel:(id)a0;
- (void)_visibleIdentifiersChanged:(id)a0;
- (id)iconStateDisplayIdentifiers;
- (void).cxx_destruct;
- (void)dealloc;

@end
