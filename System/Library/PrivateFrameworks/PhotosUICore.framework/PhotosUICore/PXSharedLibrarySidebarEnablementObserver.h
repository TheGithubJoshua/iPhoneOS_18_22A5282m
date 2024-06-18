@class NSString;

@interface PXSharedLibrarySidebarEnablementObserver : NSObject <PXChangeObserver>

@property (nonatomic) BOOL showSharedLibrarySidebarItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_update;

@end
